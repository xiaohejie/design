/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *sendStatusLabel_2;
    QProgressBar *sendProgressBar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openPushButton;
    QPushButton *sendPushButton;
    QLabel *sendStatusLabel_3;
    QLabel *sendStatusLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(542, 206);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        sendStatusLabel_2 = new QLabel(Widget);
        sendStatusLabel_2->setObjectName(QString::fromUtf8("sendStatusLabel_2"));
        sendStatusLabel_2->setGeometry(QRect(10, 79, 121, 31));
        sendStatusLabel_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        sendProgressBar = new QProgressBar(Widget);
        sendProgressBar->setObjectName(QString::fromUtf8("sendProgressBar"));
        sendProgressBar->setGeometry(QRect(130, 40, 401, 21));
        sendProgressBar->setStyleSheet(QString::fromUtf8("font: 10pt \"Times New Roman\";"));
        sendProgressBar->setValue(24);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 120, 241, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        openPushButton = new QPushButton(layoutWidget);
        openPushButton->setObjectName(QString::fromUtf8("openPushButton"));
        openPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));

        horizontalLayout->addWidget(openPushButton);

        sendPushButton = new QPushButton(layoutWidget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));
        sendPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));

        horizontalLayout->addWidget(sendPushButton);

        sendStatusLabel_3 = new QLabel(Widget);
        sendStatusLabel_3->setObjectName(QString::fromUtf8("sendStatusLabel_3"));
        sendStatusLabel_3->setGeometry(QRect(10, 30, 121, 31));
        sendStatusLabel_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        sendStatusLabel = new QLabel(Widget);
        sendStatusLabel->setObjectName(QString::fromUtf8("sendStatusLabel"));
        sendStatusLabel->setGeometry(QRect(140, 79, 411, 31));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 130, 141, 28));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sendStatusLabel_2->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\344\274\240\350\276\223\347\212\266\346\200\201\357\274\232", nullptr));
        openPushButton->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        sendPushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        sendStatusLabel_3->setText(QCoreApplication::translate("Widget", "\346\226\207\344\273\266\344\274\240\350\276\223\350\277\233\345\272\246\357\274\232", nullptr));
        sendStatusLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
