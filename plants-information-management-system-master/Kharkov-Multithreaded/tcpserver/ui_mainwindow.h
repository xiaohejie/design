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
    QPushButton *Listen;
    QPushButton *serverSend;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLineEdit *port;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *messageList;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(497, 726);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/image/_bkPage.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Listen = new QPushButton(centralwidget);
        Listen->setObjectName(QString::fromUtf8("Listen"));
        Listen->setGeometry(QRect(390, 20, 91, 28));
        Listen->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 14pt \"Times New Roman\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: yellow;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        serverSend = new QPushButton(centralwidget);
        serverSend->setObjectName(QString::fromUtf8("serverSend"));
        serverSend->setGeometry(QRect(380, 650, 93, 28));
        serverSend->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 14pt \"Times New Roman\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: yellow;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 570, 431, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(11);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background: rgb(170, 170, 255);\n"
"selection-background-color: darkgray;\n"
"   "));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 350, 431, 171));
        textEdit_2->setFont(font);
        textEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background: rgb(170, 170, 255);\n"
"selection-background-color: darkgray;\n"
"   "));
        port = new QLineEdit(centralwidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(60, 20, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font1.setPointSize(10);
        port->setFont(font1);
        port->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
" \n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:8px;\n"
"	background: rgb(170, 170, 255);\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 14, 61, 31));
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;\n"
"font: 14pt \"\346\245\267\344\275\223\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 540, 141, 16));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;\n"
"font: 75 14pt \"Times New Roman\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 310, 161, 16));
        label_3->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;\n"
"font: 75 14pt \"Times New Roman\";"));
        messageList = new QListWidget(centralwidget);
        messageList->setObjectName(QString::fromUtf8("messageList"));
        messageList->setGeometry(QRect(10, 110, 431, 181));
        messageList->setFont(font);
        messageList->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"background: rgb(170, 170, 255);\n"
"selection-background-color: darkgray;\n"
"   "));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 65, 121, 21));
        label_4->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;\n"
"font: 14pt \"\346\245\267\344\275\223\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 497, 26));
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
        Listen->setText(QCoreApplication::translate("MainWindow", "Monitor", nullptr));
        serverSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Server Send:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Server Receive:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\350\256\260\345\275\225\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
