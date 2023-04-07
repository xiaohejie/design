#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "function.h"
#include "signup.h"
#include "displaydata.h"
#include "selectfunction.h"
//数据库相关
#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>
#include <QVariant>



QString passwd;
QString Currentname;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置窗体透明
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    //设置无边框
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    //实例阴影shadow
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    //设置阴影距离
    shadow->setOffset(-3, 0);
    //设置阴影颜色
    shadow->setColor(QColor("#888888"));
    //设置阴影圆角
    shadow->setBlurRadius(30);
    //给嵌套QWidget设置阴影
    ui->label->setGraphicsEffect(shadow);
    //给垂直布局器设置边距(此步很重要, 设置宽度为阴影的宽度)
    ui->label->setContentsMargins(1,1,1,1);
    //输入焦点
    ui->lineEdit_username->setFocus();

    //连接数据库
    sqlite_Init();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//连接数据库
void sqlite_Init()
{
    //选择数据源
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //设置MySql服务器名称
    db.setHostName("localhost");
    //设置端口号
    db.setPort(3306);
    //设置数据库名
    db.setDatabaseName("xdg");
    //设置用户名密码
    db.setUserName("root");
    db.setPassword("hejie");
    bool ok = db.open();
    if (ok){
        qDebug() << QString("数据库打开成功");
    }
    else{
        qDebug() << "数据库打开失败";
    }
    /*
    //create excle建表
    QString createsql=QString("create table if not exists user(id integer primary key autoincrement,"
                        "username ntext unique not NULL,"
                        "password ntext not NULL)");
    QSqlQuery query;
    if(!query.exec(createsql)){
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }*/
}

//关闭
void MainWindow::on_pushButton_clicked()
{
    this->close();
}

//注册（改为退出）
void MainWindow::on_btn_new_clicked()
{
    this->close();
}

//登录
void MainWindow::on_btn_login_clicked()
{
      sqlite_Init();
      QString username = ui->lineEdit_username->text();
      QString password = ui->lineEdit_password->text();
      QString sql=QString("select * from user where username='%1' and password='%2'")
              .arg(username).arg(password);
      //创建执行语句对象
      QSqlQuery query(sql);
      //判断执行结果
      if(!query.next())
      {
          qDebug()<<"Login error";
          QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");
      }
      else
      {
          Currentname = ui->lineEdit_username->text();
          qDebug()<<"Login success";
          QMessageBox::information(this,"登录认证","登录成功");

          //进入功能选择界面：1、数据采集  2、故障诊断
          s->show();        //显示子界面
          this->hide();     //关闭主界面
      }
}

//鼠标按下
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    last = event->globalPos();
}
//鼠标移动
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->globalX() - last.x();
    int dy = event->globalY() - last.y();

    last = event->globalPos();
    move(x()+dx, y()+dy);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    int dx = event->globalX() - last.x();
    int dy = event->globalY() - last.y();
    move(x()+dx, y()+dy);
}
