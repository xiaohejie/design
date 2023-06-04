#include "faultdiagnosis.h"
#include "ui_faultdiagnosis.h"
#include <QMessageBox>
#include <qfiledialog.h>
//数据库相关
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QVariant>

//故障诊断界面
FaultDiagnosis::FaultDiagnosis(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FaultDiagnosis)
{
    ui->setupUi(this);
    setWindowTitle("服务器连接");
    this->resize(300,200);         //设置窗口大小

    //变量初始化
    ui->progressBar->setRange(0, 100);//设置进度条
    ui->progressBar->setValue(0);
    connectSerbar = menuBar();
    dlg_connSer = new QDialog(this);
    lab_connSerPort = new QLabel(dlg_connSer);
    lab_connSerIp = new QLabel(dlg_connSer);
    btn_connSerTcp = new QPushButton(dlg_connSer);
    le_connSerPort = new QLineEdit(dlg_connSer);
    le_connSerIp = new QLineEdit(dlg_connSer);

    //设置菜单栏(连接服务器)
    setMenuBar(connectSerbar);
    //连接服务器菜单栏按钮
    connectSerMenu = connectSerbar->addMenu("菜单");
    connectSerQAction = connectSerMenu->addAction("服务器连接");
    disConnSerQAction = connectSerMenu->addAction("断开连接");
    //连接服务器设置对话框
    dlg_connSer->setWindowTitle("连接服务器");
    lab_connSerPort->setText("服务端端口号：");
    lab_connSerPort->setGeometry(20,20,100,20);
    lab_connSerPort->show();
    lab_connSerIp->setText("服务端IP：");
    lab_connSerIp->setGeometry(20,60,80,20);
    lab_connSerIp->show();
    btn_connSerTcp->setGeometry(110,130,80,40);
    btn_connSerTcp->setText("连接服务器");
    btn_connSerTcp->show();
    //设置服务器端口、IP
    le_connSerPort->setGeometry(130,20,120,20);
    le_connSerPort->setText("8080");
    le_connSerPort->show();
    le_connSerIp->setGeometry(130,60,120,20);
    le_connSerIp->setText("127.0.0.1");
    le_connSerIp->show();

    //信号和槽连接
    //连接服务器按钮
    connect(btn_connSerTcp, &QPushButton::clicked,[=](){        //连接服务器按钮，建立连接
        qDebug() << "连接服务器";
        FaultDiagnosis::m_connServerBtn();
    });
    //连接服务器设置对话框
    connect(connectSerQAction, &QAction::triggered, [=](){
        dlg_connSer->resize(300, 200);
        dlg_connSer->exec();
    });
    //断开连接设置
    connect(disConnSerQAction, &QAction::triggered,[=](){
        //发送exit关键字给服务器
        QByteArray eixtCode = "EXIT";
        mp_Socket->write(eixtCode);
        //断开连接后，服务器返回关键字
    });
    //发送文件进度条
//    connect(this, &FaultDiagnosis::curPercent, ui->progressBar, &QProgressBar::setValue);
}

FaultDiagnosis::~FaultDiagnosis()
{
    delete ui;
}


//连接服务器函数
void FaultDiagnosis::m_connServerBtn()
{
    mp_Socket = new QTcpSocket();             //套接字
    QString ip = le_connSerIp->text();                  //服务器端的IP地址
    int port   = le_connSerPort->text().toInt();          //服务期端的端口
    //主动和服务器建立连接
    mp_Socket->connectToHost(ip, port);       //连接服务器
    if(!mp_Socket->waitForConnected(3000))    //等待3秒中
    {       //若还没有连接上，显示连接失败
        QMessageBox::information(this, "QT网络通信", "连接服务端失败！");
        return;
    }
    else
    {   //连接上显示连接成功
        QMessageBox::information(this, "QT网络通信", "连接服务端成功！");
    }
    //槽机制：前两个参数：发送信号的对象，发送信号的内容
    //connect(mp_Socket, SIGNAL(readyRead()), this, SLOT(ClientRecvData()));
}

//选择文件信号槽
void FaultDiagnosis::on_pushButton_chooseFile_clicked()
{
    //弹出选择文件对话框，得到某个磁盘文件的绝对路径
    QString path = QFileDialog::getOpenFileName();
    //将路径设置到对话框中
    if(path.isEmpty()){
        QMessageBox::warning(this, "打开文件", "选择的文件不能为空！");
        return;
    }
    ui->filepath->setText(path);
}

//返回按钮
void FaultDiagnosis::on_pushButton_return_clicked()
{
}

//发送文件信号槽
void FaultDiagnosis::on_pushButton_sendFile_clicked()
{
    qDebug() << "发送文件" ;
    QByteArray infromInstruct = "INFROM";
    mp_Socket->write(infromInstruct);

    //没有链接服务器之前。这些要设置为不能点击
    emit sendfile(ui->filepath->text());
}
//发送文件函数
void FaultDiagnosis::sendfile(QString path){
    QFile file(path);
    //记录磁盘文件的大小
    QFileInfo info(path);
    int fileSize = info.size();

    file.open(QFile::ReadOnly); //打开文件
    //循环读文件
    while(!file.atEnd()){
        static int num = 0;
        if(num == 0){   //先发送文件大小
            mp_Socket->write((char*)&fileSize, 4);
        }
        QByteArray line = file.readLine();
        //记录进度
        num += line.size();
        int percent = ((num * 100) / fileSize);
        emit curPercent(percent);   //发送进度信号
        //读出来之后发送给服务器
        mp_Socket->write(line);
    }
}

//开始诊断页面信号槽
void FaultDiagnosis::on_pushButton_startDiagnosis_clicked()
{
    QByteArray instructuonCode = "PARAM";
    mp_Socket->write(instructuonCode);
}
