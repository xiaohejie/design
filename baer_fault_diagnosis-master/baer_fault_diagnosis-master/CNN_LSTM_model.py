# 何捷
# 时间：2023/3/28 21:15
import torch
import numpy as np
from oneD_CS_attention import CoordAtt
import pandas as pd
import scipy.signal
from keras.models import Sequential,Model,load_model
from keras.optimizers import Adam
from sklearn.preprocessing import LabelBinarizer
from sklearn import preprocessing
from keras.layers import *
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
import itertools
from generate_data import Data
from sklearn.metrics import confusion_matrix
from keras.callbacks import ReduceLROnPlateau
from keras import backend as k
from keras.callbacks import ModelCheckpoint
from keras.layers import GlobalAveragePooling1D
from keras import backend as K

# 构建模型
def built_model():
    input_seq = Input(shape=(250,))
    # print(input_seq)
    X = Reshape((1, 250))(input_seq)    # 将原数组转换成1行250列的新数组
    # print(X)

    # encoder1 CNN1 （卷积核个数，卷积核的大小， 卷积步长，补零，激活函数，）
    # 卷积核大小等于kernel_size * 输入变量的维度（输入变量维度不用再这里显示设置，网络会自适应得出）
    ec1_layer1 = Conv1D(filters=50, kernel_size=20, strides=2,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(X)
    ec1_layer2 = Conv1D(filters=30, kernel_size=10, strides=2,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(ec1_layer1)
    # # 将一个Keras张量传递给一个要求PyTorch张量的函数
    ec1_outputs = MaxPooling1D(pool_size=2, strides=None, padding='valid',
                               data_format='channels_first')(ec1_layer2)

    # encoder2 CNN2
    ec2_layer1 = Conv1D(filters=50, kernel_size=6, strides=1,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(X)
    ec2_layer2 = Conv1D(filters=40, kernel_size=6, strides=1,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(ec2_layer1)
    ec2_layer3 = MaxPooling1D(pool_size=2, strides=None, padding='valid',
                              data_format='channels_first')(ec2_layer2)
    ec2_layer4 = Conv1D(filters=30, kernel_size=6, strides=1,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(ec2_layer3)
    ec2_layer5 = Conv1D(filters=30, kernel_size=6, strides=2,
                        padding='valid', activation='tanh',
                        data_format='channels_first')(ec2_layer4)
    ec2_outputs = MaxPooling1D(pool_size=2, strides=None, padding='valid',
                               data_format='channels_first')(ec2_layer5)

    encoder = multiply([ec1_outputs, ec2_outputs])          # 以上用于自动提取故障振动信号的特征表征。

    # LSTM，分类器，用于故障识别
    # 神经元数量，前面的特征提取器将1*250输入信号转换成30*27矩阵
    dc_layer1 = LSTM(60, return_sequences=True)(encoder)
    dc_layer2 = LSTM(60)(dc_layer1)
    dc_layer3 = Dropout(0.5)(dc_layer2)
    dc_layer4 = Dense(10, activation='softmax')(dc_layer3)

    model = Model(input_seq, dc_layer4)
    return model

# 画图
def plot_confusion_matrix(cm, classes, title='Confusion matrix', cmap=plt.cm.Blues, normalize=False):
    plt.imshow(cm , cmap=cmap)
    plt.title(title)
    plt.colorbar()
    tick_mark = np.arange(len(classes))
    plt.xticks(tick_mark, classes, rotation=40)
    plt.yticks(tick_mark, classes)
    if normalize:
        cm = cm.astype('float')/cm.sum(axis=1)[:,np.newaxis]
        cm = '%.2f'%cm
    thresh = cm.max()/2.0
    for i,j in itertools.product(range(cm.shape[0]), range(cm.shape[1])):
        plt.text(j,i,cm[i,j], horizontalalignment='center',color='black')
    plt.tight_layout()
    plt.ylabel('True label')
    plt.xlabel('Predict label')

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

# 训练集和测试集
X_train, X_test, y_train, y_test = train_test_split(data_samp, y, test_size=0.3)
# print('Xtrain,ytrain shape and type',X_train.shape,y_train.shape,type(X_train),type(y_train))
# print('Xtest,ytest shape and type',X_test.shape,y_test.shape,type(X_test),type(y_test))

import time
begain_time = time.time()       # 开始时间

# X_train, X_test, y_train, y_test = train_test_split(data_samp, y, test_size=0.3)
# 构建模型
model = built_model()
opt = Adam(lr=0.0006)
model.compile(optimizer=opt, loss='mean_squared_error', metrics=['accuracy'])
model.summary()     # 打印网络结构

history = model.fit(x=X_train, y=y_train, batch_size = 100, epochs=400,
                    verbose=2, validation_data=(X_test, y_test),
                    shuffle=True, initial_epoch=0)

end_time = time.time()      # 结束时间
time = end_time - begain_time
print('time:', time)

plt.figure(figsize=(12,9))
y_pre = model.predict(X_test)
label_pre = np.argmax(y_pre, axis=1)
label_true = np.argmax(y_test, axis=1)
confusion_mat = confusion_matrix(label_true, label_pre)
plot_confusion_matrix(confusion_mat, classes=range(10))