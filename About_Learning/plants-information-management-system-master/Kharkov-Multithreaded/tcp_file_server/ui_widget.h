/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *progressLabel_2;
    QLabel *progressLabel_3;
    QProgressBar *receivedProgressBar;
    QLabel *receivedStatusLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(611, 310);
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/_bkPage.jpg);"));
        progressLabel_2 = new QLabel(Widget);
        progressLabel_2->setObjectName(QString::fromUtf8("progressLabel_2"));
        progressLabel_2->setGeometry(QRect(20, 110, 131, 20));
        progressLabel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"background: transparent;\n"
"color: red;"));
        progressLabel_3 = new QLabel(Widget);
        progressLabel_3->setObjectName(QString::fromUtf8("progressLabel_3"));
        progressLabel_3->setGeometry(QRect(20, 60, 131, 20));
        progressLabel_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"background: transparent;\n"
"color: blue;"));
        receivedProgressBar = new QProgressBar(Widget);
        receivedProgressBar->setObjectName(QString::fromUtf8("receivedProgressBar"));
        receivedProgressBar->setGeometry(QRect(170, 60, 411, 23));
        receivedProgressBar->setStyleSheet(QString::fromUtf8("color: white;"));
        receivedProgressBar->setValue(24);
        receivedStatusLabel = new QLabel(Widget);
        receivedStatusLabel->setObjectName(QString::fromUtf8("receivedStatusLabel"));
        receivedStatusLabel->setGeometry(QRect(160, 110, 401, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        receivedStatusLabel->setFont(font);
        receivedStatusLabel->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: bold;\n"
"background: rgb(170, 85, 255);\n"
"border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
""));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 220, 93, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(2);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(170, 170, 255);border-style: inset;"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        progressLabel_2->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\344\274\240\350\276\223\347\212\266\346\200\201\357\274\232", nullptr));
        progressLabel_3->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\344\274\240\350\276\223\350\277\233\345\272\246\357\274\232", nullptr));
        receivedStatusLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
