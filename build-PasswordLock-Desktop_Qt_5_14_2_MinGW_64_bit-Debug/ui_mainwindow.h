/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QPushButton *btn_login;
    QLineEdit *lineEdit_username;
    QPushButton *btn_new;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(780, 520);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 0, 410, 530));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/blue.png);\n"
"border-radius:7px;padding:2px 4px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 271, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 20pt \"Arial Black\";"));
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(40, 260, 261, 41));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        btn_login = new QPushButton(centralWidget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(50, 340, 101, 41));
        btn_login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(64, 145, 252, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        lineEdit_username = new QLineEdit(centralWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(40, 210, 261, 41));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_username->setEchoMode(QLineEdit::Normal);
        lineEdit_username->setReadOnly(false);
        btn_new = new QPushButton(centralWidget);
        btn_new->setObjectName(QString::fromUtf8("btn_new"));
        btn_new->setGeometry(QRect(220, 340, 101, 41));
        btn_new->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, stop:0.0112994 rgba(64, 145, 252, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 20, 141, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(41, 155, 255);\n"
"font: 10pt \"Arial\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(740, 10, 34, 34));
        pushButton->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Angsana New\";\n"
"background-image: url(:/exit.png);\n"
"color: rgb(255, 255, 255);"));
        pushButton->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\351\275\277\350\275\256\346\225\205\351\232\234\346\243\200\346\265\213\347\273\210\347\253\257", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        btn_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\264\246\345\217\267", nullptr));
        btn_new->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\275\277\350\275\256\346\225\205\351\232\234\346\243\200\346\265\213\347\273\210\347\253\257", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
