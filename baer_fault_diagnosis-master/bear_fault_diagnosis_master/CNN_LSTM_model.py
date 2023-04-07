# 何捷
# 时间：2023/3/31 10:29
import torch
import torch.nn as nn
import numpy as np
from generate_data import Data
# from generate_data import train_loader, test_loader
from sklearn.preprocessing import LabelBinarizer
from sklearn.model_selection import train_test_split
import scipy.signal
import torch.optim as optim
from torchsummary import summary
import torch.nn.functional as F
# class CNN(nn.Module):
#     # 定义神经网络的各个层
#     def __init__(self):
#         super(CNN, self).__init__()
#         self.p1_1 = nn.Sequential(nn.Conv1d(1, 50, kernel_size=20, stride=2,padding='valid')
#                                   )
#         self.p1_2 = nn.Sequential(nn.Conv1d(50, 30, kernel_size=10, stride=2, padding='valid')
#                                   )
#         self.p1_3 = nn.MaxPool1d()
# class Net(nn.Module):
#     # 定义神经网络的各个层
#     def __init__(self):
#         super(Net, self).__init__()

# 构建模型
class Model(nn.Module):
    def __init__(self):
        super(Model, self).__init__()

        self.conv1d_1 = nn.Conv1d(in_channels=1, out_channels=50, kernel_size=20, stride=2, padding=0)
        self.tanh_1 = nn.Tanh()
        self.conv1d_2 = nn.Conv1d(in_channels=50, out_channels=30, kernel_size=10, stride=2, padding=0)
        self.maxpool_1 = nn.MaxPool1d(kernel_size=2, stride=None)

        self.conv1d_3 = nn.Conv1d(in_channels=1, out_channels=50, kernel_size=6, stride=1, padding=0)
        self.tanh_2 = nn.Tanh()
        self.conv1d_4 = nn.Conv1d(in_channels=50, out_channels=40, kernel_size=6, stride=1, padding=0)
        self.maxpool_2 = nn.MaxPool1d(kernel_size=2, stride=None)
        self.conv1d_5 = nn.Conv1d(in_channels=40, out_channels=30, kernel_size=6, stride=1, padding=0)
        self.tanh_3 = nn.Tanh()
        self.conv1d_6 = nn.Conv1d(in_channels=30, out_channels=30, kernel_size=6, stride=2, padding=0)
        self.maxpool_3 = nn.MaxPool1d(kernel_size=2, stride=None)

        self.lstm_1 = nn.LSTM(input_size=30*27, hidden_size=60, batch_first=True, num_layers=1, dropout=0.5)
        self.dropout = nn.Dropout(p=0.5)
        self.fc = nn.Linear(in_features=60, out_features=10)
        self.softmax = nn.Softmax(dim=1)

    def forward(self, x):
        x = x.unsqueeze(1)
        # batch_size, channels, height, width = x.size()
        # x = x.view(batch_size, channels, width)
        # encoder1 CNN1
        x1 = self.conv1d_1(x)
        x1 = self.tanh_1(x1)
        x1 = self.conv1d_2(x1)
        x1 = self.tanh_1(x1)
        x1 = self.maxpool_1(x1)

        # encoder2 CNN2
        x2 = self.conv1d_3(x)
        x2 = self.tanh_2(x2)
        x2 = self.conv1d_4(x2)
        x2 = self.tanh_3(x2)
        x2 = self.maxpool_2(x2)
        x2 = self.conv1d_5(x2)
        x2 = self.tanh_1(x2)
        x2 = self.conv1d_6(x2)
        x2 = self.tanh_3(x2)
        x2 = self.maxpool_3(x2)

        # encoder
        encoder = torch.mul(x1, x2)

        # LSTM，分类器，用于故障识别
        lstm_output, _ = self.lstm_1(encoder.view(-1, 1, 30*27))
        lstm_output = self.dropout(lstm_output[:, -1, :])
        fc_output = self.fc(lstm_output)
        output = self.softmax(fc_output)
        return output

# # 模型训练
# def train(model, X_train, y_train, X_test, y_test, lr=0.0006, batch_size=100, epochs=400):
#     optimizer = optim.Adam(model.parameters(), lr=lr)
#     criterion = nn.MSELoss()
#     train_losses = []
#     train_accs = []
#     test_losses = []
#     test_accs = []
#     for epoch in range(epochs):
#         model.train()
#         for i in range(0, X_train.shape[0], batch_size):
#             inputs = torch.tensor(X_train[i:i+batch_size], dtype=torch.float32)
#             targets = torch.tensor(y_train[i:i+batch_size], dtype=torch.float32).unsqueeze(1)
#             optimizer.zero_grad()
#             outputs = model(inputs)
#             loss = criterion(outputs, targets)
#             loss.backward()
#             optimizer.step()
#         train_loss, train_acc = evaluate(model, X_train, y_train, criterion)
#         test_loss, test_acc = evaluate(model, X_test, y_test, criterion)
#         train_losses.append(train_loss)
#         train_accs.append(train_acc)
#         test_losses.append(test_loss)
#         test_accs.append(test_acc)
#         if (epoch+1) % 10 == 0:
#             print(f"Epoch {epoch+1}, Train Loss: {train_loss:.4f}, Train Acc: {train_acc:.4f}, Test Loss: {test_loss:.4f}, Test Acc: {test_acc:.4f}")
#     return train_losses, train_accs, test_losses, test_accs
#
# def evaluate(model, X, y, criterion):
#     model.eval()
#     with torch.no_grad():
#         inputs = torch.tensor(X, dtype=torch.float32)
#         targets = torch.tensor(y, dtype=torch.float32).unsqueeze(1)
#         outputs = model(inputs)
#         loss = criterion(outputs, targets)
#         preds = (outputs > 0.5).float()
#         acc = (preds == targets).float().mean()
#     return loss.item(), acc.item()
#
device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
model = Model().to(device)

# 制作数据集
Data = Data()
data = Data.data        # 数据
label = Data.label      # 标签
lb = LabelBinarizer()   # 将标签性数据转换为0或1，对于二类以上的数据抓换位对应的onehot向量
y = lb.fit_transform(label)

# Wiener filtering      维纳滤波
data_wiener = scipy.signal.wiener(data, mysize=3, noise=None)

# downsampling 下采样
index = np.arange(0,2000, 8)        # 下标0-2000，每隔8个选取一个下标
# print(index)
data_samp = data_wiener[:, index]
print(data_samp.shape)    # 打印数据的个数和大小（600组，每组250个点）

import time
begain_time = time.time()       # 开始时间
# 定义优化器
opt = optim.Adam(model.parameters(), lr=0.0006)
# 定义损失函数
criterion = nn.MSELoss()
# 打印模型结构
print(model)

# 训练集和测试集
X_train, X_test, y_train, y_test = train_test_split(data_samp, y, test_size=0.3)
# 训练模型
losses = []
acces = []
eval_losses = []
eval_acces = []
for epoch in range(400):
    train_loss = 0
    train_acc = 0
    for i in range(0, X_train.shape[0], 100):
        inputs = torch.from_numpy(X_train[i:i+100]).float()
        targets = torch.from_numpy(y_train[i:i+100]).float()
        # 前向传播
        outputs = model(inputs)
        # 计算分类的准确率
        _, pred = outputs.max(1)
        _,trueTarget = targets.max(1)
        loss = criterion(outputs, targets)
        # print(pred.size())
        # print(outputs.size())
        # print(targets.size())
        # print(trueTarget.size())
        num_correct = (pred == trueTarget).sum().item()
        acc = num_correct / X_train.shape[0]
        # print(X_train.shape[0])
        train_acc += acc
        train_loss = loss.item()
        # 反向传播和优化
        opt.zero_grad()
        loss.backward()
        opt.step()
    # 打印训练过程, ACC: {acc}
    # if epoch % 10 == 0:
    print(f"Epoch: {epoch}, Loss: {loss.item()}, Train Acc: {train_acc}")
    losses.append(train_loss)
    acces.append(train_acc)

    # 测试模型
    model.eval()
    with torch.no_grad():
        inputs = torch.from_numpy(X_test).float()
        targets = torch.from_numpy(y_test).float()
        outputs = model(inputs)
        _, pred = outputs.max(1)
        _,trueTarget = targets.max(1)
        test_loss = criterion(outputs, targets)
        test_correct = (pred == trueTarget).sum().item()
        test_acc = test_correct / X_test.shape[0]
        print(f"Test Loss: {test_loss.item()}, Test Acc: {test_acc}")
        eval_losses.append(test_loss)
        eval_acces.append(test_acc)

# 计算训练时间
end_time = time.time()
time = end_time - begain_time
print('time:', time)

# losses = []
# acces = []
# eval_losses = []
# eval_acces = []
# starttime = time.time()
# for epoch in range(400):
#     train_loss = 0
#     train_acc = 0
#     model.train()
#     for img, label in train_loader:
#         img = img.float()
#         img = img.to(device)
#         label = label.to(device)
#         label = label.float()
#         # label = label.long()
#         # 前向传播
#         out = model(img)
#         out = torch.squeeze(out).float()  # 去掉out中维数是1的维度
#         # 反向传播和优化
#         loss = criterion(out, label)
#         opt.zero_grad()
#         loss.backward()
#         opt.step()
#
#         train_loss += loss.item()
#         # 计算分类的准确率
#         _, pred = out.max(1)
#         num_correct = (pred == label).sum().item()
#         acc = num_correct / img.shape[0]
#         train_acc += acc
#     losses.append(train_loss / len(train_loader))
#     acces.append(train_acc / len(train_loader))
#
#     # 测试集
#     eval_loss = 0
#     eval_acc = 0  # 将模型改为预测模式
#     model.eval()
#     # model.apply(reset_bn)
#     for img, label in test_loader:
#         img = img.type(torch.FloatTensor)
#         img = img.to(device)
#         label = label.to(device)
#         label = label.long()
#         # img = img.view(img.size(0), -1)
#         out = model(img)
#         out = torch.squeeze(out).float()
#         loss = criterion(out, label)
#         # 记录误差
#         eval_loss += loss.item()
#         # 记录准确率
#         _, pred = out.max(1)
#         num_correct = (pred == label).sum().item()
#         # print(pred, '\n\n', label)
#         acc = num_correct / img.shape[0]
#         eval_acc += acc
#     eval_losses.append(eval_loss / len(test_loader))
#     eval_acces.append(eval_acc / len(test_loader))
#     # 打印结果
#     print('epoch: {}, Train Loss: {:.4f}, Train Acc: {:.4f}, Test Loss: {:.4f}, Test Acc: {:.4f}'
#           .format(epoch, train_loss / len(train_loader), train_acc / len(train_loader),
#                   eval_loss / len(test_loader), eval_acc / len(test_loader)))
# # 计算训练时间
# end_time = time.time()
# time = end_time - begain_time
# print('time:', time)