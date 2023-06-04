import scipy.io as sio
from torch.ao.sparsity import scheduler
from torch.utils.data import TensorDataset, DataLoader
import numpy as np
import torch
import torch.nn as nn
from torch.autograd import Variable
import torch.nn.functional as F
import matplotlib.pyplot as plt
import math
import time
import torch
from torch import nn
from torch.autograd import Variable
import numpy as np
import matplotlib.pyplot as plt
import scipy.io as sio
from torch.utils.data import TensorDataset, DataLoader
import numpy as np
import torch
import torch.nn as nn
from torch.autograd import Variable
import torch.nn.functional as F
import matplotlib.pyplot as plt
import math
import time
# import hdf5storage
import os

from tqdm import tqdm
from models.model import *

os.environ["CUDA_VISIBLE_DEVICES"] = "0"

# 定义残差网络
# net = ResNet(BasicBlock, [1,1,1,1], num_classes=5)
net = ResNet(BasicBlock, [2,2,2,2], num_classes=5)
print(net)

# 读取数据
x_train = np.loadtxt(r'D:\0_大型机械设备故障检测\参考代码\代码\修改\0use_MCDSData\Bearing_Fault_recognition-main\MCDS_Data300_VMD_MCKD\x_train')
y_train = np.loadtxt(r'D:\0_大型机械设备故障检测\参考代码\代码\修改\0use_MCDSData\Bearing_Fault_recognition-main\MCDS_Data300_VMD_MCKD\y_train')
x_test = np.loadtxt(r'D:\0_大型机械设备故障检测\参考代码\代码\修改\0use_MCDSData\Bearing_Fault_recognition-main\MCDS_Data300_VMD_MCKD\x_test')
y_test = np.loadtxt(r'D:\0_大型机械设备故障检测\参考代码\代码\修改\0use_MCDSData\Bearing_Fault_recognition-main\MCDS_Data300_VMD_MCKD\y_test')

x_train = x_train[0:9600]
y_train = y_train[0:9600]
x_test = x_test[0:1070]
y_test = y_test[0:1070]

num_train_instances = len(x_train)  # 训练集长度
x_train = torch.from_numpy(x_train).type(torch.FloatTensor)
y_train = torch.from_numpy(y_train).type(torch.LongTensor)
x_train = x_train.view(num_train_instances, 1, -1)
y_train = y_train.view(num_train_instances, 1)
num_test_instances = len(x_test)    # 测试集长度
x_test = torch.from_numpy(x_test).type(torch.FloatTensor)
y_test = torch.from_numpy(y_test).type(torch.LongTensor)
x_test = x_test.view(num_test_instances, 1, -1)
y_test = y_test.view(num_test_instances, 1)
# 加载数据集
# train_db = tf.data.Dataset.from_tensor_slices((x_train, y_train)).batch(512)
# test_db = tf.data.Dataset.from_tensor_slices((x_test, y_test)).batch(512)
train_dataset = TensorDataset(x_train, y_train)
test_dataset = TensorDataset(x_test, y_test)
train_db = DataLoader(dataset=train_dataset, batch_size=128, shuffle=True, num_workers=0)  # 将训练数据以每次32张图片的形式抽出进行训练
test_db = DataLoader(dataset=test_dataset, batch_size=128, shuffle=True, num_workers=0)  # 将训练数据以每次32张图片的形式抽出进行测试

# 打印训练集、验证集、测试集的长度
print([num_train_instances,num_test_instances])

num_epochs = 100
validation_label = []
prediction_label = []

device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
print("using {} device.".format(device))
criterion = nn.CrossEntropyLoss(size_average=False)
optimizer = torch.optim.Adam(net.parameters(), lr=0.0001)
# torch.optim.lr_scheduler.MultiStepLR：动态调整学习率函数
scheduler = torch.optim.lr_scheduler.MultiStepLR(optimizer, milestones=[20, 40, 60, 80, 250, 300], gamma=0.5)

train_loss = np.zeros([num_epochs, 1])
test_loss = np.zeros([num_epochs, 1])
train_acc = np.zeros([num_epochs, 1])
test_acc = np.zeros([num_epochs, 1])

for epoch in range(num_epochs):
    #print('SNR:',snr,'  Epoch:', epoch)
    # 训练
    net.train()
    scheduler.step()
    loss_x = 0
    for i, (samples, labels) in enumerate(train_db):
    # for (samples, labels) in tqdm(train_data_loader):
        samplesV = Variable(samples)
        labels = labels.squeeze()
        # print(labels)
        labelsV = Variable(labels)

        # Forward + Backward + Optimize
        optimizer.zero_grad()
        predict_label = net(samplesV)

        # predict_label = caspyra(samplesV)

        loss = criterion(predict_label[0], labelsV)
        # print(loss.item())

        loss_x += loss.item()

        loss.backward()
        optimizer.step()

        train_loss[epoch] = loss_x / num_train_instances

    net.eval()
    loss_x = 0
    correct_train = 0
    for i, (samples, labels) in enumerate(train_db):
        with torch.no_grad():
            samplesV = Variable(samples)
            labels = labels.squeeze()
            # print(labels)
            labelsV = Variable(labels)
            # labelsV = labelsV.view(-1)

            predict_label = net(samplesV)
            prediction = predict_label[0].data.max(1)[1]
            # print(prediction)
            correct_train += prediction.eq(labelsV.data.long()).sum()

            loss = criterion(predict_label[0], labelsV)
            loss_x += loss.item()

    print("Training accuracy:" + str(100*float(correct_train)/num_train_instances) + "Time:" + str(epoch))
    print("Training Loss:" + str(loss_x / num_train_instances) + "Time:" + str(epoch))

    train_loss[epoch] = loss_x / num_train_instances
    train_acc[epoch] = 100*float(correct_train)/num_train_instances

    trainacc = str(100*float(correct_train)/num_train_instances)[0:4]
    #
    #
    loss_x = 0
    correct_test = 0
    prediction_label = []
    for i, (samples, labels) in enumerate(test_db):
        with torch.no_grad():
            samplesV = Variable(samples)
            labels = labels.squeeze()
            labelsV = Variable(labels)
            # labelsV = labelsV.view(-1)

        predict_label = net(samplesV)
        prediction = predict_label[0].data.max(1)[1]

        prediction_label.append(prediction.cpu().numpy())
        correct_test += prediction.eq(labelsV.data.long()).sum()

    # a = []
    for batch in range(len(prediction_label)):
        if batch==0:
            a = prediction_label[0]
        else:
            a = np.concatenate((a, prediction_label[batch]))

    #test_label_matrix[k,epoch,:] = a

    testacc = str(100 * float(correct_test) / num_test_instances)[0:4]
    # sio.savemat('matfiles/still_prediction'+testacc +'.mat', {'prediction_label': prediction_label})

    loss = criterion(predict_label[0], labelsV)
    loss_x += loss.item()

    print("Test accuracy:" + str(100 * float(correct_test) / num_test_instances) + "Time:" + str(epoch))
    print("Test Loss:" + str(loss_x / num_test_instances) + "Time:" + str(epoch))

    test_loss[epoch] = loss_x / num_test_instances
    test_acc[epoch] = 100 * float(correct_test) / num_test_instances

    testacc = str(100 * float(correct_test) / num_test_instances)[0:4]
# 下面的是画图过程，将上述存放的列表  画出来即可
def acc_line():
    # 绘制acc和loss曲线
    epochs = range(len(test_acc))  # Get number of epochs
    # train_acc
    plt.plot(epochs, train_acc, 'r', linestyle='-.')
    plt.title('Training Accuracy')
    plt.xlabel("Epochs")
    plt.ylabel("Accuracy")
    plt.legend(["Accuracy"])
    plt.figure()
    # test_acc
    plt.plot(epochs, test_acc, 'r', linestyle='-.')
    plt.title('Test Accuracy')
    plt.xlabel("Epochs")
    plt.ylabel("Accuracy")
    plt.legend(["Accuracy"])
    plt.figure()

    # train_loss
    plt.plot(epochs, train_loss, 'b', linestyle='-.')
    plt.title('Train Loss')
    plt.xlabel("Epochs")
    plt.ylabel("Loss")
    plt.legend(["Loss"])
    plt.figure()
    # tets_loss
    plt.plot(epochs, test_loss, 'b', linestyle='-.')
    plt.title('Test Loss')
    plt.xlabel("Epochs")
    plt.ylabel("Loss")
    plt.legend(["Loss"])
    plt.show()
acc_line()
