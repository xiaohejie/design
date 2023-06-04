#include "displaydata.h"
#include "ui_displaydata.h"
#include <QMessageBox>
#include <qdebug.h>
#include "mainwindow.h"
//数据库相关
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QVariant>
//#pragma execution_character_set("utf-8")        //解决中文乱码问题

//接收串口和ESP8266传过来的数据和标志位
double Serial_T;
double Serial_H;
double ESP8266_H;
double ESP8266_T;
int Serial_Flag;
int ESP8266_Flag;

//数据采集界面设置
DisplayData::DisplayData(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DisplayData)
{
    ui->setupUi(this);
    setWindowTitle("信息采集");
    this->resize(1200,800);         //设置窗口大小

    //变量初始化
    SerialPort=new QSerialPort;
    dlg_Serial=new QDialog(this);
    dlg_Tcp=new QDialog(this);
    mSeriesH = new QSplineSeries();
    mSeriesT = new QSplineSeries();
    chart = new QChart();
    curDateTIme = QDateTime::currentDateTime();
    mtimer = new QTimer(this);
    mAxisX = new QDateTimeAxis();
    chartView = new QChartView(chart);
    bar=menuBar();
    btn_ConnectSerial=new QPushButton(dlg_Serial);
    mAxisYT = new QValueAxis();
    mAxisYH = new QValueAxis();
    btn_CloseSerial=new QPushButton(dlg_Serial);
    lab_Port=new QLabel(dlg_Serial);
    lab_Buad=new QLabel(dlg_Serial);
    cb_Port=new QComboBox(dlg_Serial);
    cb_Buad=new QComboBox(dlg_Serial);
    lab_TcpPort=new QLabel(dlg_Tcp);
    lab_TcpIp=new QLabel(dlg_Tcp);
    btn_ConnectTcp=new QPushButton(dlg_Tcp);
    le_TcpPort=new QLineEdit(dlg_Tcp);
    le_TcpIp=new QLineEdit(dlg_Tcp);
    QStringList header;

    //连接数据库
    //sqlite_Init();
    //数据表格初始化
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setAlternatingRowColors(true);                     //设置隔行变颜色
    //设置表头
    header<<tr("电压")<<tr("时间")<<tr("加速度");
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->setColumnWidth(0,80);
    ui->tableWidget->setColumnWidth(1,120);
    ui->tableWidget->setColumnWidth(2,80);
    ui->tableWidget->verticalHeader()->setVisible(false);
    // x轴(时间轴方式)
    mAxisX->setTitleText("时间(时:分:秒)");                              // x轴显示标题
    QFont FontX_T("Times",18,2,false);                                 //设置YL轴字体样式
    mAxisX->setTitleFont(FontX_T);
    mAxisX->setGridLineVisible(true);                                  // 隐藏背景网格X轴框线
    mAxisX->setFormat("hh:mm:ss");                                     // x轴格式
    mAxisX->setLabelsAngle(45);                                        // x轴显示的文字倾斜角度
    mAxisX->setTickCount(31);                                          // 轴上点的个数
    QFont FontX("Times",6,2,false);                                   //设置X轴字体样式
    mAxisX->setLabelsFont(FontX);
    mAxisX->setRange(curDateTIme, curDateTIme.addSecs(120));            //X轴范围
    // y轴电压
    mAxisYT->setTitleText(tr("电压/mv"));                               // y轴显示标题
    QFont FontYL_T("Times",18,2,false);                                //设置YL轴字体样式
    mAxisYT->setTitleFont(FontYL_T);
    mAxisYT->setRange(0, 3300);                                          // 范围
    mAxisYT->setTickCount(11);                                         // 轴上点的个数
    QFont FontYL("Times",12,2,false);                                  //设置YL轴字体样式
    mAxisYT->setLabelsFont(FontYL);
    mAxisYT->setLabelsColor(Qt::red);
    mAxisYT->setGridLineVisible(true);                                 // 隐藏背景网格Y轴框线
    // y轴加速度
    mAxisYH->setTitleText(tr("加速度/mm/s^2"));                           // y轴显示标题
    QFont FontYR_T("Times",18,2,false);                                //设置YL轴字体样式
    mAxisYH->setTitleFont(FontYR_T);
    mAxisYH->setRange(-10,10);                                           // 范围
    mAxisYH->setTickCount(11);                                         // 轴上点的个数
    QFont FontYR("Times",12,2,false);                                  //设置YR轴字体样式
    mAxisYH->setLabelsFont(FontYR);
    mAxisYH->setLabelsColor(Qt::blue);
    mAxisYH->setGridLineVisible(true);                                 // 隐藏背景网格Y轴框线

    // 图表
    chart->setAnimationOptions(QChart::SeriesAnimations);              // 动画方式
    // 图表视图
    chartView->setRenderHint(QPainter::Antialiasing);                  // 反锯齿绘制
    chartView->chart()->addSeries(mSeriesH);                           // 添加电压线段
    chartView->chart()->addSeries(mSeriesT);                           // 添加加速度线段
    chartView->chart()->setTheme(QChart::ChartThemeHighContrast);      // 设置主题
    chartView->chart()->setTitle(tr("振动信号采集"));                    // 设置标题
    QFont Font_Title("Times",20,2,false);
    chartView->chart()->setTitleFont(Font_Title);
    chartView->chart()->addAxis(mAxisX, Qt::AlignBottom);              // 设置X轴位置
    chartView->chart()->addAxis(mAxisYT, Qt::AlignLeft);               // 设置YT轴位置
    chartView->chart()->addAxis(mAxisYH, Qt::AlignRight);              // 设置YH轴位置
    // 电压数据线段
    mSeriesH->setPen(QPen(Qt::red, 2, Qt::SolidLine));                 // 设置线段pen
    mSeriesH->attachAxis(mAxisX);                                      // 线段依附的X轴
    mSeriesH->attachAxis(mAxisYT);                                     // 线段依附的YT轴
    mSeriesH->setName(tr("电压"));                                      // 线段名称，在图例会显示
    mSeriesH->setPointsVisible(true);
    // 加速度数据线段
    mSeriesT->setPen(QPen(Qt::blue, 2, Qt::DashDotLine));
    mSeriesT->attachAxis(mAxisYH);
    mSeriesT->attachAxis(mAxisX);
    mSeriesT->setName(tr("加速度"));
    mSeriesT->setPointsVisible(true);
    // 图例
    chart->legend()->setVisible(true);                                  // 图例显示
    chart->legend()->setAlignment(Qt::AlignTop);                        // 图例向下居中

    // 将图表扔进QWidget
    ui->graphicsView->setChart(chart);                                  // 将图表对象设置到graphicsView上进行显示
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);            // 设置渲染：抗锯齿，如果不设置那么曲线就显得不平滑

    //菜单栏（连接方式和数据处理两个菜单栏）
    setMenuBar(bar);
    // 连接方式菜单栏按钮
    setMenu = bar->addMenu("连接方式");
    serialSet=setMenu->addAction("串口设置");
    setMenu->addSeparator();
    tcpSetQAction=setMenu->addAction("TCP设置");
    // 数据处理菜单栏按钮
    DataMenu=bar->addMenu("数据处理");
    DataCollection=DataMenu->addAction("开始采集数据");
    DataMenu->addSeparator();
    DataClear=DataMenu->addAction("清空绘图区");
    DataMenu->addSeparator();
    TableSave=DataMenu->addAction("保存表格数据");
    DataMenu->addSeparator();
    TableClear=DataMenu->addAction("清空表格数据");

    //串口设置对话框
    dlg_Serial->setWindowTitle("串口设置");
    btn_ConnectSerial->setGeometry(200,50,80,40);
    btn_ConnectSerial->setText("打开串口");
    btn_ConnectSerial->show();
    btn_CloseSerial->setGeometry(200,100,80,40);
    btn_CloseSerial->setText("关闭串口");
    btn_CloseSerial->show();
    lab_Port->setText("端口号：");
    lab_Port->setGeometry(20,60,50,20);
    lab_Port->show();
    lab_Buad->setText("波特率：");
    lab_Buad->setGeometry(20,110,50,20);
    lab_Buad->show();
    cb_Port->setGeometry(80,60,80,20);
    cb_Port->show();
    cb_Buad->setGeometry(80,110,80,20);
    QStringList QList;
    QList.clear();
    QList <<tr("1200")<<tr("2400")<<tr("4800")<<tr("9600")<<tr("14400")
         <<tr("19200")<<tr("28800")<<tr("38400")<<tr("57600")<<tr("115200");
    cb_Buad->clear();
    cb_Buad->addItems(QList);
    cb_Buad->setCurrentIndex(3);
    cb_Buad->show();

    //TCP设置对话框
    dlg_Tcp->setWindowTitle("TCP设置");
    lab_TcpPort->setText("服务端端口号：");
    lab_TcpPort->setGeometry(20,20,100,20);
    lab_TcpPort->show();
    lab_TcpIp->setText("服务端IP：");
    lab_TcpIp->setGeometry(20,60,80,20);
    lab_TcpIp->show();
    btn_ConnectTcp->setGeometry(110,130,80,40);
    btn_ConnectTcp->setText("连接服务端");
    btn_ConnectTcp->show();
    le_TcpPort->setGeometry(130,20,120,20);
    //设置服务器端口
    le_TcpPort->setText("8080");
    le_TcpPort->show();
    le_TcpIp->setGeometry(130,60,120,20);
    //设置服务器IP
    le_TcpIp->setText("192.168.4.1");
    le_TcpIp->show();

    //信号和槽连接
    //打开串口、关闭串口、数据采集按钮、清除数据按钮、保存表格按钮、清除表格按钮、连接TCP按钮
    connect(btn_ConnectSerial,&QPushButton::clicked,[=](){
        DisplayData::open_port();                            //打开串口按钮->打开串口
    });
    connect(btn_CloseSerial,&QPushButton::clicked,[=](){
        DisplayData::close_port();                           //关闭串口按钮->关闭串口
    });
    connect(DataCollection,&QAction::triggered,[=](){
        DisplayData::slotBtnStartAndStop();                  //数据采集按钮->开始或停止采集数据（图像）
    });
    connect(DataClear,&QAction::triggered,[=](){
        DisplayData::slotBtnClear();                         //清除数据按钮->清除数据（图像）
    });
    connect(TableSave,&QAction::triggered,[=](){
        DisplayData::btnFileSave();                          //保存表格按钮->保存表格到txt文件
    });
    connect(TableClear,&QAction::triggered,[=](){
        DisplayData::btnFileClear();                         //清除表格按钮->清除表格数据
    });
    connect(btn_ConnectTcp,&QPushButton::clicked,[=](){
        DisplayData::m_connectServerBtn();                   //连接TCP按钮->建立TCP连接
    });
    //定时器
    connect(mtimer, SIGNAL(timeout()), this, SLOT(slotTimeout()));
    //定时器设定时间结束->执行更新图像及采集数据
    connect(serialSet,&QAction::triggered,[=](){
        dlg_Serial->resize(300,200);
        dlg_Serial->exec();
    });                                                     //串口设置对话框
    connect(tcpSetQAction,&QAction::triggered,[=](){
        dlg_Tcp->resize(300,200);
        dlg_Tcp->exec();
    });                                                     //tcp设置对话框
    //查找串口
    find_port();
}

DisplayData::~DisplayData()
{
    delete ui;
}

//查找串口
void DisplayData::find_port()
{
    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);                           //设置串口
        if(serial.open(QIODevice::ReadWrite))
        {
            cb_Port->addItem(serial.portName());        //显示串口name
            serial.close();
        }
    }
}

//打开串口
void DisplayData::open_port()
{
    update();
    sleep(100);                                                         //延时100ms
    find_port();                                                        //查找com
    //初始化串口
    SerialPort->setPortName(cb_Port->currentText());                    //设置串口名
    if(SerialPort->open(QIODevice::ReadWrite))                          //打开串口成功
    {
        SerialPort->setBaudRate(cb_Buad->currentText().toInt());        //设置波特率
        SerialPort->setDataBits(QSerialPort::Data8);
        SerialPort->setParity(QSerialPort::NoParity);
        SerialPort->setStopBits(QSerialPort::OneStop);
        SerialPort->setFlowControl(QSerialPort::NoFlowControl);         //设置流控制
        QObject::connect(SerialPort, &QSerialPort::readyRead, this, &DisplayData::Read_Date);
        // 设置控件可否使用
        btn_CloseSerial->setEnabled(true);
        btn_ConnectSerial->setEnabled(false);
    }
    else                                                                //打开失败提示
    {
        sleep(100);
        QMessageBox::information(this,tr("Erro"),tr("Open the failure"),QMessageBox::Ok);
    }
}

//关闭串口
void DisplayData::close_port()
{
    SerialPort->clear();                        //清空缓存区
    SerialPort->close();                        //关闭串口

    btn_ConnectSerial->setEnabled(true);
    btn_CloseSerial->setEnabled(false);
}

//延时函数
void DisplayData::sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//窗口显示串口传来的数据
void DisplayData::Read_Date()
{
    Serial_Flag=1;              //标志位
    //串口数据、加速度信号、电压信号、
    QByteArray buf,
               buf_A,buf_hum_num,buf_hum_flag,
               buf_V,buf_temp_num,buf_temp_flag;
    bool ok;
    buf = SerialPort->readAll();    //串口读取数据(传上来的数据有问题)
    qDebug() << buf;
    if(!buf.isEmpty())              //数据成功传上来
    {
        //分割字符串
        buf_V = buf.mid(0,6);
        buf_A = buf.mid(6.12);

        QString A_hex=QString(buf_A);
        double A_dec = A_hex.toDouble();            //转换为double型小数
        QString V_hex=QString(buf_V);
        double V_dec = V_hex.toDouble();            //转换为double型小数

        Serial_H=A_dec;
        Serial_T=V_dec;

/*        qDebug() << humi_dec ;
        //湿度数据进行转化

        buf_hum=buf.mid(0,2);                                   //湿度+标志位
        buf_hum_num=buf_hum.mid(0,1);                           //湿度
        buf_hum_flag=buf_hum.mid(1,2);                          //标志位
        if(humi_dec > 10)
        {
            //转换部分
            QString humi_hex=QString(buf_hum_num.toHex());
            int humi_dec = humi_hex.toInt(&ok,16);              //转换为十进制
            Serial_H=humi_dec;
        }

        //温度数据进行转化

        buf_temp=buf.mid(2,4);                                  //温度+标志位
        buf_temp_num=buf_temp.mid(0,1);                         //温度
        buf_temp_flag=buf_temp.mid(1,2);                        //标志位
        if(humi_dec < 10)
        {
            //转换部分
            QString tempat_hex=QString(buf_temp_num.toHex());
            int temp_dec = tempat_hex.toInt(&ok,16);            //转换为十进制
            Serial_T=temp_dec;
            Serial_T=humi_dec;
        }*/
    }
    buf.clear();                                                //清空缓存区
    update();                                                   //刷新控件，会调用paintEvent函数
}

//清除图像上的数据
void DisplayData::slotBtnClear()
{
    mSeriesH->clear();          //清除电压数据线段
    mSeriesT->clear();
    mAxisX->setRange(curDateTIme, curDateTIme.addSecs(120));     //X轴重置
    pointCount = 0;             //点数置零
}

//采集数据到图像
void DisplayData::slotBtnStartAndStop()
{
    curDateTIme=QDateTime::currentDateTime();
    if(mtimer->isActive())
    {
        pointCount = 0;
        mAxisX->setMin(curDateTIme);
        mAxisX->setMax(curDateTIme.addSecs(120));              // 更新X轴范围
        mtimer->stop();
        DataCollection->setText("开始采集数据");
    }else
    {
        pointCount = 0;
        /*****这里的采集时间需要和单片机进行同步*****/
        mtimer->start(1000);                                    //每隔一秒更新一次图像
        DataCollection->setText("停止采集数据");
        mAxisX->setMin(curDateTIme);
        mAxisX->setMax(curDateTIme.addSecs(120));              // 更新X轴范围
    }
}

//更新图像上的数据
void DisplayData::slotTimeout()
{
    curDateTIme=QDateTime::currentDateTime();                   //获取当前时间
    static int pointCount=1;                                    //图像坐标点数量
    QString tempe,humi;
    if(flag==0)                                                 //第一次启动更新坐标轴X
    {
        mAxisX->setMin(curDateTIme);
        mAxisX->setMax(curDateTIme.addSecs(120));              // 更新X轴范围
        flag=!flag;
    }
    if(pointCount > 120)                                         //图像坐标点超过20个更新坐标轴X
    {
        //mSeriesH->remove(0,0);mSeriesT->remove(0);
        mAxisX->setMin(curDateTIme.addSecs(-119));
        mAxisX->setMax(curDateTIme.addSecs(0));                // 更新X轴范围
    }
    //串口传输的数据
    if(Serial_Flag)                                             //串口传输数据获取并显示
    {
        mSeriesH->append(curDateTIme.currentMSecsSinceEpoch(),Serial_T);
        mSeriesT->append(curDateTIme.currentMSecsSinceEpoch(),Serial_H);
        tempe = QString("%1").arg(Serial_T);            //温度
        humi =  QString("%1").arg(Serial_H);            //湿度
    }
    //ESP8266传输的数据
    if(ESP8266_Flag)                                            //ESP8266传输数据获取并显示
    {
        mSeriesH->append(curDateTIme.currentMSecsSinceEpoch(),ESP8266_T);
        mSeriesT->append(curDateTIme.currentMSecsSinceEpoch(),ESP8266_H);
        tempe = QString("%1").arg(ESP8266_T);           //温度
        humi =  QString("%1").arg(ESP8266_H);           //湿度
    }
    pointCount+=1;          //坐标点数量加1
    QDateTime time = QDateTime::currentDateTime();              //获取系统现在的时间
    QString date = time.toString("MM.dd hh:mm::ss");            //设置显示格式
    insert_table(date,tempe,humi);                  //将传输的数据添加到表格中
}

// 将传输的数据添加到表格中
void DisplayData::insert_table(QString date, QString t, QString h)
{
    update();
    int row_count = ui->tableWidget->rowCount();                //获取总行数
    ui->tableWidget->insertRow(row_count);                      //插入行
    QTableWidgetItem *item0 = new QTableWidgetItem();
    QTableWidgetItem *item1 = new QTableWidgetItem();
    QTableWidgetItem *item2 = new QTableWidgetItem();

    item0->setText(t);                                          //温度
    item1->setText(date);                                       //时间
    item2->setText(h);                                          //湿度

    item0->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    item1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    item2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    ui->tableWidget->setItem(row_count,0,item0);
    ui->tableWidget->setItem(row_count,1,item1);
    ui->tableWidget->setItem(row_count,2,item2);
    ui->tableWidget->scrollToBottom();
}

//清除文件数据
void DisplayData::btnFileClear()
{
    while(ui->tableWidget->rowCount())
    {
        ui->tableWidget->removeRow(0);
    }
}


//保存数据到文件
void DisplayData::btnFileSave()
{
    QString filename = QFileDialog::getExistingDirectory(this,tr("file dialog"),"D:");  // 获取文件目录
    QDateTime time = QDateTime::currentDateTime();                                      //获取系统现在的时间
    QString date = time.toString("MM.dd");                                              //设置显示格式
    filename += date;
    filename += ".txt";
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text))                                      //只写方式
    {
        QMessageBox::warning(this,tr("double file edit"),tr("no write ").arg(filename).arg(file.errorString()));
        return ;
    }
    QTextStream out(&file);
    out<<tr("时间                    ")<<tr("温度       ")<<tr("湿度")<<"\n";
    int romcount = ui->tableWidget->rowCount();                                         //获取总行数
    for(int i = 0; i < romcount; i++)
    {
        QString rowstring;
        for(int j = 1; j < 3; j++)
        {
            rowstring += ui->tableWidget->item(i,j)->text();
            rowstring += "    ";
            if(j==1)
            {
                rowstring += ui->tableWidget->item(i,0)->text();                        //温度
                rowstring += "          ";
            }
        }
        rowstring += "\n";
        out << rowstring;
    }
    file.close();
}

//ESP8266连接
void DisplayData::m_connectServerBtn()
{
    mp_clientSocket = new QTcpSocket();             //套接字
    QString ip = le_TcpIp->text();                  //服务器端的IP地址
    int port   = le_TcpPort->text().toInt();          //服务期端的端口
    //主动和服务器建立连接
    mp_clientSocket->connectToHost(ip, port);       //连接服务器
    if(!mp_clientSocket->waitForConnected(3000))    //等待3秒中
    {       //若还没有连接上，显示连接失败
        QMessageBox::information(this, "QT网络通信", "连接服务端失败！");
        return;
    }
    else
    {   //连接上显示连接成功
        QMessageBox::information(this, "QT网络通信", "连接服务端成功！");
    }
    //槽机制：前两个参数：发送信号的对象，发送信号的内容
    connect(mp_clientSocket, SIGNAL(readyRead()), this, SLOT(ClientRecvData()));
}

//接收ESP8266的数据
void DisplayData::ClientRecvData()
{
    bool ok;
    //ESP8266模块数据、
    //湿度+标志位、湿度值、标志位、
    //温度+标志位、温度值、标志位、
    QByteArray  ESP8266_buf,
            ESP8266_hum,ESP8266_hum_num,ESP8266_hum_flag,
            ESP8266_temp,ESP8266_temp_num,ESP8266_temp_flag;
    ESP8266_Flag=1;     //标志位
    //读取WiFi模块传过来的数据
    ESP8266_buf=mp_clientSocket->readAll();
    //转换湿度数据，字符串格式：湿度数值+'h'，同串口显示函数
    ESP8266_hum=ESP8266_buf.mid(0,2);
    ESP8266_hum_num=ESP8266_hum.mid(0,1);
    ESP8266_hum_flag=ESP8266_hum.mid(1,2);
    if(ESP8266_hum_flag=="h")
    {
        QString ESP8266_humi_hex=QString(ESP8266_hum_num.toHex());
        int ESP8266_humi_dec = ESP8266_humi_hex.toInt(&ok,16);
        ESP8266_H=ESP8266_humi_dec;
    }
    //转换温度数据，字符串格式：温度数值+'t'
    ESP8266_temp=ESP8266_buf.mid(2,4);
    ESP8266_temp_num=ESP8266_temp.mid(0,1);
    ESP8266_temp_flag=ESP8266_temp.mid(1,2);
    if(ESP8266_temp_flag=="t")
    {
        QString ESP8266_temp_hex=QString(ESP8266_temp_num.toHex());
        int ESP8266_temp_dec = ESP8266_temp_hex.toInt(&ok,16);
        ESP8266_T=ESP8266_temp_dec;
    }
}

