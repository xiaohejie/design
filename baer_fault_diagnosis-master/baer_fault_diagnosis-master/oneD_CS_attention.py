# 何捷
# 时间：2023/3/30 18:49
import torch
import torch.nn as nn
from keras import backend as K
import tensorflow as tf
from oneD_Meta_ACON import MetaAconC
# 注意力机制
class CoordAtt(nn.Module):
    def __init__(self, inp, oup, reduction=32):
        super(CoordAtt, self).__init__()
        # self.pool_w = nn.AdaptiveAvgPool1d(1)
        self.pool_w = nn.AdaptiveMaxPool1d(1)
        mip = max(6, inp // reduction)
        self.conv1 = nn.Conv1d(inp, mip, kernel_size=1, stride=1, padding=0)
        self.bn1 = nn.BatchNorm1d(mip, track_running_stats=False)
        self.act = MetaAconC(mip)
        self.conv_w = nn.Conv1d(mip, oup, kernel_size=1, stride=1, padding=0)

    def forward(self, x):
        identity = x
        # print(x.shape)
        # print(x)
        n, c, w = K.int_shape(x)
        # n, c, w = x.size()
        # x1 = K.eval(x)
        if hasattr(x, 'numpy'):
            numpy_array = x.numpy()
        else:
            numpy_array = K.eval(x)
        pytorch_input = torch.from_numpy(numpy_array)
        print('4')
        x_w = self.pool_w(pytorch_input)
        print('5')
        y = torch.cat([identity, x_w], dim=2)
        y = self.conv1(y)
        y = self.bn1(y)
        y = self.act(y)
        x_ww, x_c = torch.split(y, [w, 1], dim=2)
        a_w = self.conv_w(x_ww)
        a_w = a_w.sigmoid()
        out = identity * a_w
        return out

