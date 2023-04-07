#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Author: Linjian Zhang
Email: linjian93@foxmail.com
Create Time: 2018-01-14 14:31:15
Program: 
Description: 
"""
import math
import torch
import warnings
from torch.nn import Module, Parameter
import torch.nn.functional as F
from torch.autograd import Variable


def clip_grad(v, min, max):
    v.register_hook(lambda g: g.clamp(min, max))
    return v


class RNNCellBase(Module):
    def __repr__(self):
        s = '{name}({input_size}, {hidden_size}'
        if 'bias' in self.__dict__ and self.bias is not True:
            s += ', bias={bias}'
        if 'nonlinearity' in self.__dict__ and self.nonlinearity != "tanh":
            s += ', nonlinearity={nonlinearity}'
        s += ')'
        return s.format(name=self.__class__.__name__, **self.__dict__)


class RNNCell(RNNCellBase):
    def __init__(self, input_size, hidden_size, bias=True, grad_clip=None):
        super(RNNCell, self).__init__()
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.grad_clip = grad_clip

        self.weight_ih = Parameter(torch.Tensor(hidden_size, input_size))
        self.weight_hh = Parameter(torch.Tensor(hidden_size, hidden_size))
        if bias:
            self.bias = Parameter(torch.Tensor(hidden_size))
        else:
            self.register_parameter('bias', None)

        self.reset_parameters()

    def reset_parameters(self):
        stdv = 1.0 / math.sqrt(self.hidden_size)
        for weight in self.parameters():
            weight.data.uniform_(-stdv, stdv)

    def forward(self, input, h):
        output = F.linear(input, self.weight_ih, self.bias) + F.linear(h, self.weight_hh)
        if self.grad_clip:
            output = clip_grad(output, -self.grad_clip, self.grad_clip)  # avoid explosive gradient
        output = F.relu(output)

        return output


class GRUCell(RNNCellBase):
    def __init__(self, input_size, hidden_size, bias=True, grad_clip=None):
        super(GRUCell, self).__init__()
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.grad_clip = grad_clip

        self.weight_ih = Parameter(torch.Tensor(3 * hidden_size, input_size))
        self.weight_hh_rz = Parameter(torch.Tensor(2 * hidden_size, hidden_size))
        self.weight_hh = Parameter(torch.Tensor(hidden_size, hidden_size))
        if bias:
            self.bias = Parameter(torch.Tensor(3 * hidden_size))
        else:
            self.register_parameter('bias', None)

        self.reset_parameters()

    def reset_parameters(self):
        stdv = 1.0 / math.sqrt(self.hidden_size)
        for weight in self.parameters():
            weight.data.uniform_(-stdv, stdv)

    def forward(self, input, h):
        ih = F.linear(input, self.weight_ih, self.bias)
        hh_rz = F.linear(h, self.weight_hh_rz)

        if self.grad_clip:
            ih = clip_grad(ih, -self.grad_clip, self.grad_clip)
            hh_rz = clip_grad(hh_rz, -self.grad_clip, self.grad_clip)

        r = F.sigmoid(ih[:, :self.hidden_size] + hh_rz[:, :self.hidden_size])
        i = F.sigmoid(ih[:, self.hidden_size: self.hidden_size * 2] + hh_rz[:, self.hidden_size:])

        hhr = F.linear(h * r, self.weight_hh)
        if self.grad_clip:
            hhr = clip_grad(hhr, -self.grad_clip, self.grad_clip)

        n = F.relu(ih[:, self.hidden_size * 2:] + hhr)
        h = (1 - i) * n + i * h

        return h


class LSTMCell(RNNCellBase):
    def __init__(self, input_size, hidden_size, bias=True, grad_clip=None):
        super(LSTMCell, self).__init__()
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.grad_clip = grad_clip

        self.weight_ih = Parameter(torch.Tensor(4 * hidden_size, input_size))
        self.weight_hh = Parameter(torch.Tensor(4 * hidden_size, hidden_size))
        if bias:
            self.bias = Parameter(torch.Tensor(4 * hidden_size))
        else:
            self.register_parameter('bias', None)

        self.reset_parameters()

    def reset_parameters(self):
        stdv = 1.0 / math.sqrt(self.hidden_size)
        for weight in self.parameters():
            weight.data.uniform_(-stdv, stdv)

    def forward(self, input, hx):
        h, c = hx

        pre = F.linear(input, self.weight_ih, self.bias) + F.linear(h, self.weight_hh)

        if self.grad_clip:
            pre = clip_grad(pre, -self.grad_clip, self.grad_clip)

        i = F.sigmoid(pre[:, :self.hidden_size])
        f = F.sigmoid(pre[:, self.hidden_size: self.hidden_size * 2])
        # g = F.tanh(pre[:, self.hidden_size * 2: self.hidden_size * 3])  # change to relu
        g = F.relu(pre[:, self.hidden_size * 2: self.hidden_size * 3])
        o = F.sigmoid(pre[:, self.hidden_size * 3:])

        c = f * c + i * g
        # h = o * F.tanh(c)  # change to relu
        h = o * F.relu(c)
        return h, c


class LSTMPCell(RNNCellBase):
    def __init__(self, input_size, hidden_size, recurrent_size, bias=True, grad_clip=None):
        super(LSTMPCell, self).__init__()
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.recurrent_size = recurrent_size
        self.grad_clip = grad_clip

        self.weight_ih = Parameter(torch.Tensor(4 * hidden_size, input_size))
        self.weight_hh = Parameter(torch.Tensor(4 * hidden_size, recurrent_size))
        self.weight_rec = Parameter(torch.Tensor(recurrent_size, hidden_size))
        if bias:
            self.bias = Parameter(torch.Tensor(4 * hidden_size))
        else:
            self.register_parameter('bias', None)

        self.reset_parameters()

    def reset_parameters(self):
        stdv = 1.0 / math.sqrt(self.hidden_size)
        for weight in self.parameters():
            weight.data.uniform_(-stdv, stdv)

    def forward(self, input, hx):
        h, c = hx

        pre = F.linear(input, self.weight_ih, self.bias) \
              + F.linear(h, self.weight_hh)

        if self.grad_clip:
            pre = clip_grad(pre, -self.grad_clip, self.grad_clip)

        i = F.sigmoid(pre[:, :self.hidden_size])
        f = F.sigmoid(pre[:, self.hidden_size: self.hidden_size * 2])
        g = F.tanh(pre[:, self.hidden_size * 2: self.hidden_size * 3])
        o = F.sigmoid(pre[:, self.hidden_size * 3:])

        c = f * c + i * g
        h = o * F.tanh(c)
        h = F.linear(h, self.weight_rec)
        return h, c


class MGRUCell(RNNCellBase):
    '''Minimal GRU
    Reference:
    Ravanelli et al. [Improving speech recognition by revising gated recurrent units](https://arxiv.org/abs/1710.00641).
    '''

    def __init__(self, input_size, hidden_size, bias=True, grad_clip=None):
        super(MGRUCell, self).__init__()
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.grad_clip = grad_clip

        self.weight_ih = Parameter(torch.Tensor(2 * hidden_size, input_size))
        self.weight_hh = Parameter(torch.Tensor(2 * hidden_size, hidden_size))
        if bias:
            self.bias = Parameter(torch.Tensor(2 * hidden_size))
        else:
            self.register_parameter('bias', None)

        self.reset_parameters()

    def reset_parameters(self):
        stdv = 1.0 / math.sqrt(self.hidden_size)
        for weight in self.parameters():
            weight.data.uniform_(-stdv, stdv)

    def forward(self, input, h):
        ih = F.linear(input, self.weight_ih, self.bias)
        hh = F.linear(h, self.weight_hh)

        if self.grad_clip:
            ih = clip_grad(ih, -self.grad_clip, self.grad_clip)
            hh = clip_grad(hh, -self.grad_clip, self.grad_clip)

        z = F.sigmoid(ih[:, :self.hidden_size] + hh[:, :self.hidden_size])
        n = F.relu(ih[:, self.hidden_size:] + hh[:, self.hidden_size:])
        h = (1 - z) * n + z * h

        return h


class RNNBase(Module):
    def __init__(self, mode, input_size, hidden_size, recurrent_size=None, num_layers=1, bias=True,
                 return_sequences=True, grad_clip=None):
        super(RNNBase, self).__init__()
        self.mode = mode
        self.input_size = input_size
        self.hidden_size = hidden_size
        self.recurrent_size = recurrent_size
        self.num_layers = num_layers
        self.bias = bias
        self.return_sequences = return_sequences
        self.grad_clip = grad_clip
        self.flatten_parameters()

        mode2cell = {'RNN': RNNCell,
                     'GRU': GRUCell,
                     'MGRU': GRUCell,
                     'LSTM': LSTMCell,
                     'LSTMP': LSTMPCell}
        Cell = mode2cell[mode]

        kwargs = {'input_size': input_size,
                  'hidden_size': hidden_size,
                  'bias': bias,
                  'grad_clip': grad_clip}
        if self.mode == 'LSTMP':
            kwargs['recurrent_size'] = recurrent_size

        self.cell0 = Cell(**kwargs)
        for i in range(1, num_layers):
            kwargs['input_size'] = recurrent_size if self.mode == 'LSTMP' else hidden_size
            cell = Cell(**kwargs)
            setattr(self, 'cell{}'.format(i), cell)

    def flatten_parameters(self):
        """Resets parameter data pointer so that they can use faster code paths.

        Right now, this works only if the module is on the GPU and cuDNN is enabled.
        Otherwise, it's a no-op.
        """
        any_param = next(self.parameters()).data
        if not any_param.is_cuda or not torch.backends.cudnn.is_acceptable(any_param):
            self._data_ptrs = []
            return

        # If any parameters alias, we fall back to the slower, copying code path. This is
        # a sufficient check, because overlapping parameter buffers that don't completely
        # alias would break the assumptions of the uniqueness check in
        # Module.named_parameters().
        unique_data_ptrs = set(p.data_ptr() for l in self.all_weights for p in l)
        if len(unique_data_ptrs) != sum(len(l) for l in self.all_weights):
            self._data_ptrs = []
            return

        with torch.cuda.device_of(any_param):
            # This is quite ugly, but it allows us to reuse the cuDNN code without larger
            # modifications. It's really a low-level API that doesn't belong in here, but
            # let's make this exception.
            from torch.backends.cudnn import rnn
            from torch.backends import cudnn
            from torch.nn._functions.rnn import CudnnRNN
            handle = cudnn.get_handle()
            with warnings.catch_warnings(record=True):
                fn = CudnnRNN(
                    self.mode,
                    self.input_size,
                    self.hidden_size,
                    num_layers=self.num_layers,
                    batch_first=self.batch_first,
                    dropout=self.dropout,
                    train=self.training,
                    bidirectional=self.bidirectional,
                    dropout_state=self.dropout_state,
                )

            # Initialize descriptors
            fn.datatype = cudnn._typemap[any_param.type()]
            fn.x_descs = cudnn.descriptor(any_param.new(1, self.input_size), 1)
            fn.rnn_desc = rnn.init_rnn_descriptor(fn, handle)

            # Allocate buffer to hold the weights
            self._param_buf_size = rnn.get_num_weights(handle, fn.rnn_desc, fn.x_descs[0], fn.datatype)
            fn.weight_buf = any_param.new(self._param_buf_size).zero_()
            fn.w_desc = rnn.init_weight_descriptor(fn, fn.weight_buf)

            # Slice off views into weight_buf
            all_weights = [[p.data for p in l] for l in self.all_weights]
            params = rnn.get_parameters(fn, handle, fn.weight_buf)

            # Copy weights and update their storage
            rnn._copyParams(all_weights, params)
            for orig_layer_param, new_layer_param in zip(all_weights, params):
                for orig_param, new_param in zip(orig_layer_param, new_layer_param):
                    orig_param.set_(new_param.view_as(orig_param))

            self._data_ptrs = list(p.data.data_ptr() for p in self.parameters())

    def forward(self, input, initial_states=None):
        if initial_states is None:
            zeros = Variable(torch.zeros(input.size(0), self.hidden_size))
            if self.mode == 'LSTM':
                initial_states = [(zeros, zeros), ] * self.num_layers
            elif self.mode == 'LSTMP':
                zeros_h = Variable(torch.zeros(input.size(0), self.recurrent_size))
                initial_states = [(zeros_h, zeros), ] * self.num_layers
            else:
                initial_states = [zeros] * self.num_layers
        assert len(initial_states) == self.num_layers

        states = initial_states
        outputs = []

        time_steps = input.size(1)
        for t in range(time_steps):
            x = input[:, t, :]
            for l in range(self.num_layers):
                hx = getattr(self, 'cell{}'.format(l))(x, states[l])
                states[l] = hx
                if self.mode.startswith('LSTM'):
                    x = hx[0]
                else:
                    x = hx
            outputs.append(hx)

        if self.return_sequences:
            if self.mode.startswith('LSTM'):
                hs, cs = zip(*outputs)
                h = torch.stack(hs).transpose(0, 1)
                c = torch.stack(cs).transpose(0, 1)
                output = (h, c)
            else:
                output = torch.stack(outputs).transpose(0, 1)
        else:
            output = outputs[-1]
        return output


class RNN(RNNBase):
    def __init__(self, *args, **kwargs):
        super(RNN, self).__init__('RNN', *args, **kwargs)


class GRU(RNNBase):
    def __init__(self, *args, **kwargs):
        super(GRU, self).__init__('GRU', *args, **kwargs)


class MGRU(RNNBase):
    def __init__(self, *args, **kwargs):
        super(MGRU, self).__init__('MGRU', *args, **kwargs)


class LSTM(RNNBase):
    def __init__(self, *args, **kwargs):
        super(LSTM, self).__init__('LSTM', *args, **kwargs)


class LSTMP(RNNBase):
    def __init__(self, *args, **kwargs):
        super(LSTMP, self).__init__('LSTMP', *args, **kwargs)
