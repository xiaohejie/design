/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *IPsorce;
    QLabel *Portsorce;
    QTextEdit *sendmes;
    QPushButton *clientSend;
    QPushButton *clintConnect;
    QLineEdit *IP;
    QLineEdit *Port;
    QLabel *label;
    QLabel *label_4;
    QListWidget *messageList;
    QPushButton *getRecord;
    QPushButton *clearRecord;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(534, 761);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        IPsorce = new QLabel(centralwidget);
        IPsorce->setObjectName(QString::fromUtf8("IPsorce"));
        IPsorce->setGeometry(QRect(40, 20, 72, 15));
        Portsorce = new QLabel(centralwidget);
        Portsorce->setObjectName(QString::fromUtf8("Portsorce"));
        Portsorce->setGeometry(QRect(240, 20, 72, 15));
        sendmes = new QTextEdit(centralwidget);
        sendmes->setObjectName(QString::fromUtf8("sendmes"));
        sendmes->setGeometry(QRect(40, 590, 441, 41));
        clientSend = new QPushButton(centralwidget);
        clientSend->setObjectName(QString::fromUtf8("clientSend"));
        clientSend->setGeometry(QRect(380, 670, 93, 28));
        clintConnect = new QPushButton(centralwidget);
        clintConnect->setObjectName(QString::fromUtf8("clintConnect"));
        clintConnect->setGeometry(QRect(380, 20, 101, 28));
        IP = new QLineEdit(centralwidget);
        IP->setObjectName(QString::fromUtf8("IP"));
        IP->setGeometry(QRect(100, 20, 113, 21));
        Port = new QLineEdit(centralwidget);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(290, 20, 51, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 550, 121, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 50, 131, 31));
        messageList = new QListWidget(centralwidget);
        messageList->setObjectName(QString::fromUtf8("messageList"));
        messageList->setGeometry(QRect(40, 80, 441, 461));
        getRecord = new QPushButton(centralwidget);
        getRecord->setObjectName(QString::fromUtf8("getRecord"));
        getRecord->setGeometry(QRect(40, 670, 131, 28));
        clearRecord = new QPushButton(centralwidget);
        clearRecord->setObjectName(QString::fromUtf8("clearRecord"));
        clearRecord->setGeometry(QRect(190, 670, 131, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 534, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        IPsorce->setText(QCoreApplication::translate("MainWindow", "IP:", nullptr));
        Portsorce->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        clientSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        clintConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Client Send: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Chat record:", nullptr));
        getRecord->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
        clearRecord->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
