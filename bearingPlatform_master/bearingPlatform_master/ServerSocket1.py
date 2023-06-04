# 何捷
# 时间：2023/3/27 16:12
import sys
import json
import logging
import socket
from MsgProtol import MsgCmd,MsgProtol
from main import MainWindow
from PySide2.QtWidgets import QApplication

logging.basicConfig(level=logging.INFO) # 定义日志输出的水平
logger = logging.getLogger("server")
exitInstruct = b'EXIT'
infromInstruct = b'INFORM'
paramInstruct = b'PARAM'
requestInstruct = b'REQUEST'

class ServerSocket(object):
    def __init__(self, ip="127.0.0.1", port=5006):
        self.ip = ip  # ip地址
        self.port = port  # 端口号
        self._buffer_size = 12000  # 接收客户端消息的内存大小
        self._is_init_socket = False  # 套接字是否初始化
        self._recv_init_msg = False  # 是否接收到客户端连接发送来的初始化参数
        self.msg_protol = MsgProtol() # 网络消息，为了调用其打包和解包功能
        self._init_socket() # 初始化套接字
        self._socket.settimeout(30)  # 设置套接字的监听时间
        self._conn_client() # 连接客户端

# 初始化套接字
    def _init_socket(self):
        """初始化套接字"""
        try:
            # 初始化Socket
            self._socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM) # 创建Socket对象
            self._socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1) # 设置Socket对象
            ip_port = (self.ip, self.port) # 定义IP地址和端口号
            logging.info("服务端的IP地址是 {}:{}".format(self.ip,self.port))
            self._socket.bind(ip_port)# 绑定IP地址
            self._socket.setblocking(False)# 设置阻塞模式为False
            self._is_init_socket = True
        except socket.error:
            self._is_init_socket = True
            self.close()
            raise socket.error("无法初始化服务端套接字 ")

# 连接客户端
    def _conn_client(self):
        """连接客户端"""
        try:
            try:
                self._socket.listen(1)# 开启侦听
                self._client_socket, addr = self._socket.accept()# 接收到请求
                logging.info('接收到客户端连接')
                self._client_socket.settimeout(30) # 设置客户端套接字的连接时长
            except socket.timeout as e:
                raise socket.error("客户端连接超时")

            self._recv_bytes() # 接收消息
        except socket.error:
            logging.debug("连接客户端出错")
            self.close()
            raise

# 接受客户端的字节信息，按照消息长度切分成一个完整的字符串
    def _recv_bytes(self):
        """接收客户端的字节消息，按照消息长度切分成一个完整的字符串"""
        try:
            flag = True
            logger.info("开始接收消息...")
            while True and self._is_init_socket:
                # print("执行到这一步0")
                msg = self._client_socket.recv(self._buffer_size)# 接收消息
                # print(‘客户端传过来的消息：’, msg)
                cmd = msg
                # 需要先判断以下传过来的是否是文件
                # if infromInstruct == msg[0:5]:
                #     cmd = msg[0:5]
                # 检查消息类型
                if cmd == exitInstruct:             # 与客户端断开连接
                    print('EXIT')
                    self.close()
                    return
                elif cmd == infromInstruct:         # 用于接收客户端传过来的文件
                    print('INFORM')
                elif cmd == paramInstruct:
                    # print('接收到指令')
                    self._recv_init_msg = True      # 现在没用到
                    # 启动故障检测界面
                    app = QApplication(sys.argv)
                    main = MainWindow()
                    main.show()
                    sys.exit(app.exec_())
                elif cmd == requestInstruct:        # 该请求的功能：？
                    print('REQUEST')
                else:
                    logging.error("\n未知的cmd:{0}".format(cmd))
            logger.info("接收消息结束...")
        except socket.timeout as e:
            logging.debug("客户端发送消息超时, 即将关闭客户端套接字")
            self.close()

# 分类处理接收到的消息字符串

# 发送消息字符串
    def _send(self,cmd,data,is_recv=0):
        """发送一个消息字符串"""
        try:
            #obj = {"type": MsgType.REQUEST.name, "msg":msg,"time": time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(time.time()))}
            msg = self.msg_protol.pack(cmd, data,is_recv)
            self._client_socket.send(msg)  # 发送消息
            logger.info("发送1个数据包->cmd:" + MsgCmd(cmd).name + " body：" + str(data))
        except socket.error:
            raise

# 关闭服务端
    def close(self):
        logger.info("服务端套接字正在关闭..._loaded:" + str(self._recv_init_msg) + " _open_socket:" + str(self._is_init_socket))
        # 当服务端套接字被初始化过并且连接到了客户端连接则关闭客户端套接字
        if self._recv_init_msg & self._is_init_socket:
            self._client_socket.send(b"EXIT") # 通知客户端关闭连接
            self._client_socket.close() #关闭客户端调节
            self._recv_init_msg = False
        # 当服务套接字被初始化过
        if self._is_init_socket:
            self._socket.close() # 关闭服务端套接字
            self._is_init_socket = False
        else:
            raise socket.error("无法关闭服务端套接字，因为没有初始化")

if __name__=='__main__':
    server = ServerSocket()

