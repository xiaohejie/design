#ifndef FAULTDIAGNOSIS_H
#define FAULTDIAGNOSIS_H

#include <QMainWindow>
#include <QMenuBar>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QAction>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class FaultDiagnosis;
}

class FaultDiagnosis : public QMainWindow
{
    Q_OBJECT

public:
    explicit FaultDiagnosis(QWidget *parent = nullptr);
    ~FaultDiagnosis();
    //发送文件
    void sendfile(QString path);

private slots:
    void on_pushButton_return_clicked();
    void m_connServerBtn();

    void on_pushButton_chooseFile_clicked();

    void on_pushButton_sendFile_clicked();

    void on_pushButton_startDiagnosis_clicked();

private:
    Ui::FaultDiagnosis *ui;
    void closeEvent(QCloseEvent *){ //重写关闭按钮事件
        emit subClose();        //发出关闭信号，父窗口接收信号显示窗体
    }

    QMenuBar *connectSerbar;
    QMenu *connectSerMenu;
    QDialog *dlg_connSer;       //连接服务器对话框
    QLabel *lab_connSerPort;
    QLabel *lab_connSerIp;
    QPushButton *btn_connSerTcp;
    QLineEdit *le_connSerPort;
    QLineEdit *le_connSerIp;
    QAction *connectSerQAction;
    QAction *disConnSerQAction;
    QTcpSocket *mp_Socket;

signals:
    void subClose();
    void curPercent(int num);
};

#endif // FAULTDIAGNOSIS_H
