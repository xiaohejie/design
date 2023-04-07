# 何捷
# 时间：2023/2/27 19:57

import numpy as np

# 读取存储为txt文件的数据
from matplotlib import pyplot as plt


def data_read(dir_path):
    with open(dir_path, "r") as f:
        raw_data = f.read()
        data = raw_data[1:-1].split(", ")   # [-1:1]是为了去除文件中的前后中括号"[]"

    return np.asfarray(data, float)


if __name__ == "__main__":
    train_loss_path = r"D:\0_大型机械设备故障检测\参考代码\代码\0\ResNet_BearingDiagnosis\MCDS_300_RESULT\VMD_MCKD\结果_300\train_loss.txt"  # 存储文件路径
    test_loss_path = r"D:\0_大型机械设备故障检测\参考代码\代码\0\ResNet_BearingDiagnosis\MCDS_300_RESULT\VMD_MCKD\结果_300\test_loss.txt"  # 存储文件路径

    y_train_loss = data_read(train_loss_path)  # loss值，即y轴
    x_train_loss = range(len(y_train_loss))  # loss的数量，即x轴
    y_test_loss = data_read(test_loss_path)  # loss值，即y轴
    x_test_loss = range(len(y_test_loss))  # loss的数量，即x轴

    plt.figure()

    # 去除顶部和右边框框
ax = plt.axes()
ax.spines['top'].set_visible(False)
ax.spines['right'].set_visible(False)

plt.xlabel('iters')  # x轴标签
# plt.ylabel('accuracy(%)')  # y轴标签
plt.ylabel('loss')  # y轴标签

# 以x_train_loss为横坐标，y_train_loss为纵坐标，曲线宽度为1，实线，增加标签，训练损失，
# 默认颜色，如果想更改颜色，可以增加参数color='red',这是红色。
plt.plot(x_train_loss, y_train_loss, linewidth=2, linestyle="-.", label="train loss")
plt.plot(x_test_loss, y_test_loss, linewidth=2, linestyle="-.", label="test loss", color = 'red')
plt.legend()
plt.title('Loss curve')
# plt.title('Accuracy curve')
plt.show()

