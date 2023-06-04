/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_Port;
    QPushButton *btn_connect;
    QLabel *label_2;
    QLabel *label_status;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(707, 403);
        Client->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"/*background-color: rgb(107, 144, 212);*/\n"
"/*background-color: rgb(255, 255, 255);*/\n"
""));
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 60, 181, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 206, 115);\n"
"font: 87 15pt \"Arial Black\";"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit_IP = new QLineEdit(Client);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(270, 140, 171, 31));
        lineEdit_IP->setStyleSheet(QString::fromUtf8("/*background-color: rgb(255, 255, 255);*/\n"
"background-color: rgb(225, 225, 225);\n"
"border-radius:10px;\n"
"font: 9pt \"Century Gothic\";"));
        lineEdit_Port = new QLineEdit(Client);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(270, 180, 171, 31));
        lineEdit_Port->setStyleSheet(QString::fromUtf8("/*background-color: rgb(255, 255, 255);*/\n"
"background-color: rgb(225, 225, 225);\n"
"border-radius:10px;\n"
"font: 9pt \"Century Gothic\";"));
        btn_connect = new QPushButton(Client);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(300, 230, 101, 31));
        btn_connect->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 71, 169);\n"
"color: rgb(255, 206, 115);\n"
"font: 75 9pt \"Arial\";"));
        label_2 = new QLabel(Client);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 270, 201, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(127, 127, 127);\n"
"font: 9pt \"Century Gothic\";"));
        label_status = new QLabel(Client);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(310, 290, 101, 21));
        label_status->setStyleSheet(QString::fromUtf8("color: rgb(255, 206, 115);\n"
"text-decoration: underline;\n"
"font: 75 9pt \"Agency FB\";\n"
"font: 87 9pt \"Arial Black\";"));
        label_3 = new QLabel(Client);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 0, 451, 331));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/cloud.png);"));
        pushButton = new QPushButton(Client);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 80, 31, 21));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 206, 115);\n"
"font: 87 10pt \"Arial Black\";"));
        label_3->raise();
        label->raise();
        lineEdit_IP->raise();
        lineEdit_Port->raise();
        btn_connect->raise();
        label_2->raise();
        label_status->raise();
        pushButton->raise();

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Form", nullptr));
        label->setText(QCoreApplication::translate("Client", "Network", nullptr));
        lineEdit_IP->setPlaceholderText(QCoreApplication::translate("Client", "Pleace input IP", nullptr));
        lineEdit_Port->setPlaceholderText(QCoreApplication::translate("Client", "Pleace input Port", nullptr));
        btn_connect->setText(QCoreApplication::translate("Client", "BLINK", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "Current connection status is:", nullptr));
        label_status->setText(QCoreApplication::translate("Client", "disconnect", nullptr));
        label_3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Client", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
