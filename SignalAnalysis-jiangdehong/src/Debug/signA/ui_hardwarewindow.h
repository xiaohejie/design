/********************************************************************************
** Form generated from reading UI file 'hardwarewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREWINDOW_H
#define UI_HARDWAREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HardwareWindow
{
public:
    QCheckBox *HWCheckBox;
    QPushButton *initConnectButton;
    QPushButton *refindMacButton;
    QPlainTextEdit *HWTextEdit;
    QPushButton *initParaButton;

    void setupUi(QDialog *HardwareWindow)
    {
        if (HardwareWindow->objectName().isEmpty())
            HardwareWindow->setObjectName(QString::fromUtf8("HardwareWindow"));
        HardwareWindow->resize(503, 377);
        HWCheckBox = new QCheckBox(HardwareWindow);
        HWCheckBox->setObjectName(QString::fromUtf8("HWCheckBox"));
        HWCheckBox->setGeometry(QRect(30, 60, 111, 21));
        initConnectButton = new QPushButton(HardwareWindow);
        initConnectButton->setObjectName(QString::fromUtf8("initConnectButton"));
        initConnectButton->setGeometry(QRect(30, 100, 111, 31));
        refindMacButton = new QPushButton(HardwareWindow);
        refindMacButton->setObjectName(QString::fromUtf8("refindMacButton"));
        refindMacButton->setGeometry(QRect(30, 150, 111, 31));
        HWTextEdit = new QPlainTextEdit(HardwareWindow);
        HWTextEdit->setObjectName(QString::fromUtf8("HWTextEdit"));
        HWTextEdit->setGeometry(QRect(190, 60, 241, 261));
        initParaButton = new QPushButton(HardwareWindow);
        initParaButton->setObjectName(QString::fromUtf8("initParaButton"));
        initParaButton->setGeometry(QRect(30, 200, 111, 31));

        retranslateUi(HardwareWindow);

        QMetaObject::connectSlotsByName(HardwareWindow);
    } // setupUi

    void retranslateUi(QDialog *HardwareWindow)
    {
        HardwareWindow->setWindowTitle(QCoreApplication::translate("HardwareWindow", "\350\277\236\346\216\245\347\241\254\344\273\266", nullptr));
        HWCheckBox->setText(QCoreApplication::translate("HardwareWindow", "\346\230\257\345\220\246\350\277\236\346\216\245\351\207\207\351\233\206\344\273\252", nullptr));
        initConnectButton->setText(QCoreApplication::translate("HardwareWindow", "\345\210\235\345\247\213\345\214\226\344\273\252\345\231\250\350\277\236\346\216\245", nullptr));
        refindMacButton->setText(QCoreApplication::translate("HardwareWindow", "\345\210\267\346\226\260\344\273\252\345\231\250", nullptr));
        initParaButton->setText(QCoreApplication::translate("HardwareWindow", "\345\210\235\345\247\213\345\214\226\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareWindow: public Ui_HardwareWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREWINDOW_H
