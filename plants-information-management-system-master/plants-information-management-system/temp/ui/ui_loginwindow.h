/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLabel *label_Topic;
    QLineEdit *lineEdit_Password;
    QLabel *label_Password;
    QLabel *label_UserID;
    QPushButton *btn_login;
    QLineEdit *lineEdit_UserID;
    QPushButton *btn_Clear;
    QLabel *label_Tips;
    QLabel *label_Copyright;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(800, 494);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginWindow->sizePolicy().hasHeightForWidth());
        LoginWindow->setSizePolicy(sizePolicy);
        LoginWindow->setMinimumSize(QSize(800, 494));
        LoginWindow->setMaximumSize(QSize(800, 494));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginWindow->setWindowIcon(icon);
        LoginWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/image/_loginPage.jpg);"));
        label_Topic = new QLabel(LoginWindow);
        label_Topic->setObjectName(QString::fromUtf8("label_Topic"));
        label_Topic->setGeometry(QRect(120, 130, 600, 30));
        sizePolicy.setHeightForWidth(label_Topic->sizePolicy().hasHeightForWidth());
        label_Topic->setSizePolicy(sizePolicy);
        label_Topic->setMinimumSize(QSize(600, 30));
        label_Topic->setMaximumSize(QSize(300, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_Topic->setFont(font);
        label_Topic->setLayoutDirection(Qt::LeftToRight);
        label_Topic->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\245\267\344\275\223\";\n"
"background: transparent;\n"
"color: white;"));
        lineEdit_Password = new QLineEdit(LoginWindow);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(340, 260, 150, 25));
        sizePolicy.setHeightForWidth(lineEdit_Password->sizePolicy().hasHeightForWidth());
        lineEdit_Password->setSizePolicy(sizePolicy);
        lineEdit_Password->setMinimumSize(QSize(150, 25));
        lineEdit_Password->setMaximumSize(QSize(150, 25));
        lineEdit_Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:2px solid #7b7b7b;\n"
"	border-radius:8px;\n"
"	background: rgb(170, 170, 255);\n"
"}\n"
""));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        label_Password = new QLabel(LoginWindow);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setGeometry(QRect(270, 260, 61, 25));
        label_Password->setMinimumSize(QSize(30, 25));
        label_Password->setMaximumSize(QSize(100, 25));
        label_Password->setStyleSheet(QString::fromUtf8("font: 20 14pt \"\346\245\267\344\275\223\";\n"
"background: transparent;\n"
"color: white;"));
        label_UserID = new QLabel(LoginWindow);
        label_UserID->setObjectName(QString::fromUtf8("label_UserID"));
        label_UserID->setGeometry(QRect(270, 210, 61, 25));
        label_UserID->setMinimumSize(QSize(30, 25));
        label_UserID->setMaximumSize(QSize(100, 25));
        label_UserID->setStyleSheet(QString::fromUtf8("font: 20 14pt \"\346\245\267\344\275\223\";\n"
"background: transparent;\n"
"color: white;"));
        btn_login = new QPushButton(LoginWindow);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(420, 330, 60, 25));
        btn_login->setMinimumSize(QSize(60, 25));
        btn_login->setMaximumSize(QSize(60, 25));
        btn_login->setStyleSheet(QString::fromUtf8("color: white;background: rgb(170, 170, 255);border:1px groove gray;border-radius:4px;font: 20 14pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"QPushButton:hover{background-color:\n"
"rgb(170, 85, 255); color: white;}\n"
"QPushButton:pressed{background-color:\n"
"rgb(170, 85, 255);border-style: inset;\n"
"\n"
""));
        btn_login->setCheckable(false);
        btn_login->setChecked(false);
        lineEdit_UserID = new QLineEdit(LoginWindow);
        lineEdit_UserID->setObjectName(QString::fromUtf8("lineEdit_UserID"));
        lineEdit_UserID->setGeometry(QRect(340, 210, 150, 25));
        sizePolicy.setHeightForWidth(lineEdit_UserID->sizePolicy().hasHeightForWidth());
        lineEdit_UserID->setSizePolicy(sizePolicy);
        lineEdit_UserID->setMinimumSize(QSize(150, 25));
        lineEdit_UserID->setMaximumSize(QSize(150, 25));
        lineEdit_UserID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:2px solid #7b7b7b;\n"
"	border-radius:8px;\n"
"	background: rgb(170, 170, 255);\n"
"}\n"
""));
        btn_Clear = new QPushButton(LoginWindow);
        btn_Clear->setObjectName(QString::fromUtf8("btn_Clear"));
        btn_Clear->setGeometry(QRect(310, 330, 60, 25));
        btn_Clear->setMinimumSize(QSize(60, 25));
        btn_Clear->setMaximumSize(QSize(60, 25));
        btn_Clear->setStyleSheet(QString::fromUtf8("color: white;background: rgb(170, 170, 255);border:1px groove gray;border-radius:4px;font: 20 14pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"QPushButton:hover{background-color:\n"
"rgb(170, 85, 255); color: white;}\n"
"QPushButton:pressed{background-color:\n"
"rgb(170, 85, 255);border-style: inset;\n"
"\n"
""));
        label_Tips = new QLabel(LoginWindow);
        label_Tips->setObjectName(QString::fromUtf8("label_Tips"));
        label_Tips->setGeometry(QRect(550, 160, 161, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\235\216\346\227\255\347\247\221\346\274\253\347\224\273\344\275\223v1.0"));
        font1.setPointSize(14);
        label_Tips->setFont(font1);
        label_Tips->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;"));
        label_Copyright = new QLabel(LoginWindow);
        label_Copyright->setObjectName(QString::fromUtf8("label_Copyright"));
        label_Copyright->setGeometry(QRect(350, 460, 441, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font2.setPointSize(12);
        label_Copyright->setFont(font2);
        label_Copyright->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: white;"));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        label_Topic->setText(QCoreApplication::translate("LoginWindow", "\342\200\234\347\271\201\350\212\261\344\274\274\351\224\246\342\200\235\342\200\224\342\200\224\350\212\261\345\215\211\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_Password->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_UserID->setText(QCoreApplication::translate("LoginWindow", "\350\264\246\345\217\267:", nullptr));
        btn_login->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        btn_Clear->setText(QCoreApplication::translate("LoginWindow", "\351\207\215\347\275\256", nullptr));
        label_Tips->setText(QCoreApplication::translate("LoginWindow", "\345\237\272\344\272\216Qt 5.14.1", nullptr));
        label_Copyright->setText(QCoreApplication::translate("LoginWindow", "Copyright 2019\350\275\257\344\273\266\345\267\245\347\250\21302\347\217\255 All Rights Reserved.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
