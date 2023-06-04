/********************************************************************************
** Form generated from reading UI file 'outputconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTCONFIG_H
#define UI_OUTPUTCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "mybutton.h"
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OutPutConfig
{
public:
    myButton *okbutton;
    myComboBox *output_1;
    myComboBox *output_2;
    QLabel *label_2;
    QLabel *label_1;

    void setupUi(QWidget *OutPutConfig)
    {
        if (OutPutConfig->objectName().isEmpty())
            OutPutConfig->setObjectName(QString::fromUtf8("OutPutConfig"));
        OutPutConfig->resize(800, 450);
        okbutton = new myButton(OutPutConfig);
        okbutton->setObjectName(QString::fromUtf8("okbutton"));
        okbutton->setGeometry(QRect(330, 310, 151, 61));
        output_1 = new myComboBox(OutPutConfig);
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->addItem(QString());
        output_1->setObjectName(QString::fromUtf8("output_1"));
        output_1->setGeometry(QRect(110, 80, 401, 71));
        QFont font;
        font.setPointSize(40);
        output_1->setFont(font);
        output_1->setEditable(false);
        output_2 = new myComboBox(OutPutConfig);
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->addItem(QString());
        output_2->setObjectName(QString::fromUtf8("output_2"));
        output_2->setGeometry(QRect(110, 180, 401, 71));
        output_2->setFont(font);
        output_2->setEditable(false);
        label_2 = new QLabel(OutPutConfig);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(520, 180, 181, 71));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_1 = new QLabel(OutPutConfig);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(520, 80, 181, 71));
        label_1->setFont(font1);
        label_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(OutPutConfig);

        QMetaObject::connectSlotsByName(OutPutConfig);
    } // setupUi

    void retranslateUi(QWidget *OutPutConfig)
    {
        OutPutConfig->setWindowTitle(QCoreApplication::translate("OutPutConfig", "Form", nullptr));
        okbutton->setText(QCoreApplication::translate("OutPutConfig", "ok", nullptr));
        output_1->setItemText(0, QString());
        output_1->setItemText(1, QCoreApplication::translate("OutPutConfig", "4.1", nullptr));
        output_1->setItemText(2, QCoreApplication::translate("OutPutConfig", "4.2", nullptr));
        output_1->setItemText(3, QCoreApplication::translate("OutPutConfig", "4.3", nullptr));
        output_1->setItemText(4, QCoreApplication::translate("OutPutConfig", "4.4", nullptr));
        output_1->setItemText(5, QCoreApplication::translate("OutPutConfig", "4.5", nullptr));
        output_1->setItemText(6, QCoreApplication::translate("OutPutConfig", "4.6", nullptr));
        output_1->setItemText(7, QCoreApplication::translate("OutPutConfig", "4.7", nullptr));
        output_1->setItemText(8, QCoreApplication::translate("OutPutConfig", "4.8", nullptr));
        output_1->setItemText(9, QCoreApplication::translate("OutPutConfig", "4.9", nullptr));
        output_1->setItemText(10, QCoreApplication::translate("OutPutConfig", "5.0", nullptr));
        output_1->setItemText(11, QCoreApplication::translate("OutPutConfig", "5.1", nullptr));
        output_1->setItemText(12, QCoreApplication::translate("OutPutConfig", "5.1", nullptr));
        output_1->setItemText(13, QCoreApplication::translate("OutPutConfig", "5.3", nullptr));
        output_1->setItemText(14, QCoreApplication::translate("OutPutConfig", "5.4", nullptr));
        output_1->setItemText(15, QCoreApplication::translate("OutPutConfig", "5.5", nullptr));
        output_1->setItemText(16, QCoreApplication::translate("OutPutConfig", "5.6", nullptr));
        output_1->setItemText(17, QCoreApplication::translate("OutPutConfig", "5.7", nullptr));
        output_1->setItemText(18, QCoreApplication::translate("OutPutConfig", "5.8", nullptr));
        output_1->setItemText(19, QCoreApplication::translate("OutPutConfig", "5.9", nullptr));
        output_1->setItemText(20, QCoreApplication::translate("OutPutConfig", "6.0", nullptr));

        output_2->setItemText(0, QString());
        output_2->setItemText(1, QCoreApplication::translate("OutPutConfig", "4.1", nullptr));
        output_2->setItemText(2, QCoreApplication::translate("OutPutConfig", "4.2", nullptr));
        output_2->setItemText(3, QCoreApplication::translate("OutPutConfig", "4.3", nullptr));
        output_2->setItemText(4, QCoreApplication::translate("OutPutConfig", "4.4", nullptr));
        output_2->setItemText(5, QCoreApplication::translate("OutPutConfig", "4.5", nullptr));
        output_2->setItemText(6, QCoreApplication::translate("OutPutConfig", "4.6", nullptr));
        output_2->setItemText(7, QCoreApplication::translate("OutPutConfig", "4.7", nullptr));
        output_2->setItemText(8, QCoreApplication::translate("OutPutConfig", "4.8", nullptr));
        output_2->setItemText(9, QCoreApplication::translate("OutPutConfig", "4.9", nullptr));
        output_2->setItemText(10, QCoreApplication::translate("OutPutConfig", "5.0", nullptr));
        output_2->setItemText(11, QCoreApplication::translate("OutPutConfig", "5.1", nullptr));
        output_2->setItemText(12, QCoreApplication::translate("OutPutConfig", "5.2", nullptr));
        output_2->setItemText(13, QCoreApplication::translate("OutPutConfig", "5.3", nullptr));
        output_2->setItemText(14, QCoreApplication::translate("OutPutConfig", "5.4", nullptr));
        output_2->setItemText(15, QCoreApplication::translate("OutPutConfig", "5.5", nullptr));
        output_2->setItemText(16, QCoreApplication::translate("OutPutConfig", "5.6", nullptr));
        output_2->setItemText(17, QCoreApplication::translate("OutPutConfig", "5.7", nullptr));
        output_2->setItemText(18, QCoreApplication::translate("OutPutConfig", "5.8", nullptr));
        output_2->setItemText(19, QCoreApplication::translate("OutPutConfig", "5.9", nullptr));
        output_2->setItemText(20, QCoreApplication::translate("OutPutConfig", "6.0", nullptr));

        label_2->setText(QCoreApplication::translate("OutPutConfig", "\346\250\241\346\213\237\350\276\223\345\207\2722\351\200\211\346\213\251(mA)", nullptr));
        label_1->setText(QCoreApplication::translate("OutPutConfig", "\346\250\241\346\213\237\350\276\223\345\207\2721\351\200\211\346\213\251(mA)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutPutConfig: public Ui_OutPutConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTCONFIG_H
