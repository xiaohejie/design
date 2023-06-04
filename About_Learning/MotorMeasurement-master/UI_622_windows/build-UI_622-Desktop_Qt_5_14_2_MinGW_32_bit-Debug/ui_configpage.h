/********************************************************************************
** Form generated from reading UI file 'configpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGPAGE_H
#define UI_CONFIGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "mybutton.h"
#include "mycombobox.h"
#include "myspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigPage
{
public:
    QLabel *label;
    QLabel *label_2;
    myComboBox *comboBox_2;
    mySpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QLabel *label_6;
    myButton *okButton;
    myButton *cancelButton;
    mySpinBox *doubleSpinBox;
    QLabel *label_7;
    QLabel *ret;
    myButton *setzerobutton;
    mySpinBox *torsion_max_edit;

    void setupUi(QWidget *ConfigPage)
    {
        if (ConfigPage->objectName().isEmpty())
            ConfigPage->setObjectName(QString::fromUtf8("ConfigPage"));
        ConfigPage->resize(800, 450);
        QFont font;
        font.setPointSize(20);
        ConfigPage->setFont(font);
        ConfigPage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(ConfigPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 60, 121, 71));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(ConfigPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 200, 121, 71));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboBox_2 = new myComboBox(ConfigPage);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 200, 231, 71));
        QFont font2;
        font2.setPointSize(40);
        comboBox_2->setFont(font2);
        doubleSpinBox_2 = new mySpinBox(ConfigPage);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(420, 60, 231, 71));
        doubleSpinBox_2->setFont(font2);
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setMinimum(0.005000000000000);
        doubleSpinBox_2->setMaximum(2.500000000000000);
        doubleSpinBox_2->setSingleStep(0.001000000000000);
        doubleSpinBox_2->setValue(0.005000000000000);
        label_5 = new QLabel(ConfigPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(660, 60, 121, 71));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_6 = new QLabel(ConfigPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(420, 130, 231, 71));
        QFont font3;
        font3.setPointSize(25);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);
        okButton = new myButton(ConfigPage);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(150, 300, 151, 71));
        QFont font4;
        font4.setPointSize(35);
        okButton->setFont(font4);
        cancelButton = new myButton(ConfigPage);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(320, 300, 151, 71));
        cancelButton->setFont(font4);
        doubleSpinBox = new mySpinBox(ConfigPage);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(420, 200, 231, 71));
        doubleSpinBox->setFont(font2);
        doubleSpinBox->setDecimals(0);
        doubleSpinBox->setMinimum(0.000000000000000);
        doubleSpinBox->setMaximum(10000.000000000000000);
        doubleSpinBox->setSingleStep(1.000000000000000);
        doubleSpinBox->setValue(60.000000000000000);
        label_7 = new QLabel(ConfigPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(660, 200, 121, 71));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ret = new QLabel(ConfigPage);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(150, 380, 491, 61));
        QFont font5;
        font5.setPointSize(30);
        ret->setFont(font5);
        ret->setStyleSheet(QString::fromUtf8("color: rgb(241, 18, 18);"));
        ret->setAlignment(Qt::AlignCenter);
        setzerobutton = new myButton(ConfigPage);
        setzerobutton->setObjectName(QString::fromUtf8("setzerobutton"));
        setzerobutton->setGeometry(QRect(490, 300, 151, 71));
        setzerobutton->setFont(font4);
        torsion_max_edit = new mySpinBox(ConfigPage);
        torsion_max_edit->setObjectName(QString::fromUtf8("torsion_max_edit"));
        torsion_max_edit->setGeometry(QRect(20, 60, 231, 71));
        torsion_max_edit->setFont(font2);
        torsion_max_edit->setDecimals(1);
        torsion_max_edit->setMinimum(0.000000000000000);
        torsion_max_edit->setMaximum(1.000000000000000);
        torsion_max_edit->setSingleStep(0.100000000000000);
        torsion_max_edit->setValue(0.500000000000000);
        QWidget::setTabOrder(comboBox_2, doubleSpinBox_2);
        QWidget::setTabOrder(doubleSpinBox_2, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(ConfigPage);

        QMetaObject::connectSlotsByName(ConfigPage);
    } // setupUi

    void retranslateUi(QWidget *ConfigPage)
    {
        ConfigPage->setWindowTitle(QCoreApplication::translate("ConfigPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("ConfigPage", "\350\275\254\347\237\251\351\207\217\347\250\213", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigPage", "\350\275\254\351\200\237\351\207\217\347\250\213", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("ConfigPage", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("ConfigPage", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("ConfigPage", "5", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("ConfigPage", "10", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("ConfigPage", "20", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("ConfigPage", "50", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("ConfigPage", "100", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("ConfigPage", "200", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("ConfigPage", "500", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("ConfigPage", "1000", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("ConfigPage", "2000", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("ConfigPage", "5000", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("ConfigPage", "10000", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("ConfigPage", "20000", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("ConfigPage", "50000", nullptr));

        label_5->setText(QCoreApplication::translate("ConfigPage", "\351\207\207\346\240\267\345\221\250\346\234\237", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigPage", "\357\274\2100.02s\357\275\2362.50s\357\274\211", nullptr));
        okButton->setText(QCoreApplication::translate("ConfigPage", "\347\241\256\350\256\244\350\256\276\347\275\256", nullptr));
        cancelButton->setText(QCoreApplication::translate("ConfigPage", "\345\217\202\346\225\260\350\277\230\345\216\237", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigPage", "\346\257\217\345\234\210\350\204\211\345\206\262\346\225\260", nullptr));
        ret->setText(QString());
        setzerobutton->setText(QCoreApplication::translate("ConfigPage", "\350\275\254\347\237\251\350\260\203\351\233\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigPage: public Ui_ConfigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGPAGE_H
