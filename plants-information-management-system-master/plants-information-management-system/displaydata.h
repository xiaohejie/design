#ifndef DISPLAYDATA_H
#define DISPLAYDATA_H

#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTime>
#include <QStringList>
#include <QDateTime>
#include <QChartView>
#include <QtCharts>
#include <QValueAxis>
#include <QDateTimeAxis>
#include <QSplineSeries>
#include <QTabWidget>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <tempature.h>
#include <QMenuBar>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui { class DisplayData; }
QT_END_NAMESPACE

extern double Serial_T;                     //串口传输的温度数据
extern double Serial_H;                     //串口传输的湿度数据
extern double ESP8266_T;                    //ESP8266传输的温度数据
extern double ESP8266_H;                    //ESP8266传输的湿度数据

extern int Serial_Flag;                     //串口标志位
extern int ESP8266_Flag;                    //ESP8266标志位

class DisplayData : public QMainWindow
{
    Q_OBJECT

public:
    explicit DisplayData(QWidget *parent = nullptr);
    ~DisplayData();

private:
    Ui::DisplayData *ui;

    QSerialPort *SerialPort;    //串口
    QChart *chart;
    QDateTimeAxis *mAxisX;
    QValueAxis *mAxisYT;        //温度坐标
    QValueAxis *mAxisYH;        //湿度坐标
    QSplineSeries *mSeriesH;
    QSplineSeries *mSeriesT;
    QDateTime curDateTIme;
    QChartView *chartView;
    QTimer* mtimer;
    QMenuBar *bar;
    QPushButton *btn_ConnectSerial;
    QPushButton *btn_CloseSerial;
    QLabel *lab_Port;
    QLabel *lab_Buad;
    QComboBox *cb_Port;
    QComboBox *cb_Buad;
    QMenu *setMenu;
    QAction *serialSet;
    QAction *tcpSetQAction;
    QMenu *DataMenu;
    QAction *DataCollection;
    QAction *DataClear;
    QAction *TableSave;
    QAction *TableClear;
    QDialog *dlg_Serial;
    QDialog *dlg_Tcp;
    QLabel *lab_TcpPort;
    QLabel *lab_TcpIp;
    QPushButton *btn_ConnectTcp;
    QLineEdit *le_TcpPort;
    QLineEdit *le_TcpIp;
    QTcpSocket *mp_clientSocket;
    int pointCount;
    int flag;

    void insert_table(QString date, QString t, QString h);  //将传输的数据添加到表格中

    //重写关闭按钮事件
    void closeEvent(QCloseEvent *){
            emit subClose();//发出关闭信号，父窗体接收信号后显示窗体
    }

private slots:
    void find_port();           //查找可用串口
    void sleep(int msec);       //延时函数
    void open_port();           //打开串口
    void close_port();          //关闭串口
    void Read_Date();           //读取串口数据
    void slotBtnClear();        //清除图像上的数据
    void slotBtnStartAndStop(); //采集数据到图像
    void slotTimeout();         //更新图像上的数据
    void btnFileClear();        //清除文件数据
    void btnFileSave();         //保存数据到文件
    void m_connectServerBtn();  //ESP8266连接
    void ClientRecvData();      //接收ESP8266的数据

signals:
    void subClose();        //关闭按钮返回上一级信号
};

#endif // DISPLAYDATA_H
