/********************************************************************************
** Form generated from reading UI file 'function.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_H
#define UI_FUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Function
{
public:
    QLabel *label;
    QPushButton *btn_lock;
    QPushButton *btn_unlock;
    QPushButton *btn_manage;
    QLabel *labe_image;
    QPushButton *btn_exit;
    QPushButton *btn_return;
    QLabel *label_2;

    void setupUi(QWidget *Function)
    {
        if (Function->objectName().isEmpty())
            Function->setObjectName(QString::fromUtf8("Function"));
        Function->resize(595, 370);
        Function->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(Function);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 230, 271, 141));
        label->setStyleSheet(QString::fromUtf8("font: 48pt \"Arial Rounded MT Bold\";\n"
"color: rgb(255, 206, 115);"));
        label->setAlignment(Qt::AlignCenter);
        btn_lock = new QPushButton(Function);
        btn_lock->setObjectName(QString::fromUtf8("btn_lock"));
        btn_lock->setGeometry(QRect(30, 140, 91, 41));
        btn_lock->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 71, 169);\n"
"color: rgb(255, 206, 115);\n"
"border-radius:7px;padding:2px 4px;\n"
"font: 15pt \"Candara\";"));
        btn_unlock = new QPushButton(Function);
        btn_unlock->setObjectName(QString::fromUtf8("btn_unlock"));
        btn_unlock->setGeometry(QRect(150, 140, 91, 41));
        btn_unlock->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 71, 169);\n"
"color: rgb(255, 206, 115);\n"
"border-radius:7px;padding:2px 4px;\n"
"font: 15pt \"Candara\";"));
        btn_manage = new QPushButton(Function);
        btn_manage->setObjectName(QString::fromUtf8("btn_manage"));
        btn_manage->setGeometry(QRect(30, 210, 211, 41));
        btn_manage->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 71, 169);\n"
"color: rgb(255, 206, 115);\n"
"border-radius:7px;padding:2px 4px;\n"
"font: 15pt \"Candara\";"));
        labe_image = new QLabel(Function);
        labe_image->setObjectName(QString::fromUtf8("labe_image"));
        labe_image->setGeometry(QRect(330, 50, 201, 201));
        labe_image->setStyleSheet(QString::fromUtf8("/*background-image: url(:/lock.png);*/"));
        btn_exit = new QPushButton(Function);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(530, 0, 51, 31));
        btn_exit->setStyleSheet(QString::fromUtf8("font: 18pt \"Arial Rounded MT Bold\";\n"
"color: rgb(255, 206, 115);"));
        btn_exit->setFlat(true);
        btn_return = new QPushButton(Function);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(20, 320, 131, 31));
        btn_return->setStyleSheet(QString::fromUtf8("color: rgb(29, 123, 255);\n"
"font: 25 9pt \"DIN Next LT Pro Light\";\n"
"font: 10pt \"Century Gothic\";\n"
"text-decoration: underline;"));
        btn_return->setFlat(true);
        label_2 = new QLabel(Function);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 151, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 25pt \"Arial Black\";"));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(Function);

        QMetaObject::connectSlotsByName(Function);
    } // setupUi

    void retranslateUi(QWidget *Function)
    {
        Function->setWindowTitle(QCoreApplication::translate("Function", "Form", nullptr));
        label->setText(QCoreApplication::translate("Function", "Lock", nullptr));
        btn_lock->setText(QCoreApplication::translate("Function", "Lock", nullptr));
        btn_unlock->setText(QCoreApplication::translate("Function", "UnLock", nullptr));
        btn_manage->setText(QCoreApplication::translate("Function", "Manage password", nullptr));
        labe_image->setText(QString());
        btn_exit->setText(QCoreApplication::translate("Function", "X", nullptr));
        btn_return->setText(QCoreApplication::translate("Function", "Return to Login", nullptr));
        label_2->setText(QCoreApplication::translate("Function", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Function: public Ui_Function {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_H
