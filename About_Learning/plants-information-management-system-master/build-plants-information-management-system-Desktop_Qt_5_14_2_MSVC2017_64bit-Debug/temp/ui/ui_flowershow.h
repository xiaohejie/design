/********************************************************************************
** Form generated from reading UI file 'flowershow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWERSHOW_H
#define UI_FLOWERSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flowershow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;

    void setupUi(QWidget *flowershow)
    {
        if (flowershow->objectName().isEmpty())
            flowershow->setObjectName(QString::fromUtf8("flowershow"));
        flowershow->resize(1789, 832);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        flowershow->setWindowIcon(icon);
        flowershow->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 229, 229);"));
        pushButton = new QPushButton(flowershow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 80, 321, 241));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/\345\272\267\344\271\203\351\246\2501.jfif);"));
        pushButton_2 = new QPushButton(flowershow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 80, 321, 241));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Lilium.jpg);"));
        label = new QLabel(flowershow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 30, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(231, 231, 231);"));
        label_2 = new QLabel(flowershow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 30, 131, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(231, 231, 231);"));
        pushButton_3 = new QPushButton(flowershow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 80, 321, 241));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/narc2221.jpg);"));
        label_3 = new QLabel(flowershow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(890, 30, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(231, 231, 231);"));
        pushButton_4 = new QPushButton(flowershow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1090, 80, 321, 241));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/rose.jpg);"));
        label_4 = new QLabel(flowershow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1240, 30, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(231, 231, 231);"));
        pushButton_5 = new QPushButton(flowershow);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1440, 80, 321, 241));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/tulip.jpg);"));
        label_5 = new QLabel(flowershow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1590, 30, 101, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";\n"
"background-color: rgb(231, 231, 231);"));
        textEdit = new QTextEdit(flowershow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 360, 321, 421));
        textEdit_2 = new QTextEdit(flowershow);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(390, 360, 321, 421));
        textEdit_3 = new QTextEdit(flowershow);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(740, 360, 321, 421));
        textEdit_4 = new QTextEdit(flowershow);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setGeometry(QRect(1090, 360, 321, 421));
        textEdit_5 = new QTextEdit(flowershow);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(1440, 360, 321, 421));

        retranslateUi(flowershow);

        QMetaObject::connectSlotsByName(flowershow);
    } // setupUi

    void retranslateUi(QWidget *flowershow)
    {
        flowershow->setWindowTitle(QCoreApplication::translate("flowershow", "flowershow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("flowershow", "\345\272\267\344\271\203\351\246\250", nullptr));
        label_2->setText(QCoreApplication::translate("flowershow", "\346\260\264\344\273\231", nullptr));
        pushButton_3->setText(QString());
        label_3->setText(QCoreApplication::translate("flowershow", "\347\231\276\345\220\210", nullptr));
        pushButton_4->setText(QString());
        label_4->setText(QCoreApplication::translate("flowershow", "\347\216\253\347\221\260", nullptr));
        pushButton_5->setText(QString());
        label_5->setText(QCoreApplication::translate("flowershow", "\351\203\201\351\207\221\351\246\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flowershow: public Ui_flowershow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWERSHOW_H
