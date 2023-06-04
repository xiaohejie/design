/********************************************************************************
** Form generated from reading UI file 'SpectrumSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMSETDIALOG_H
#define UI_SPECTRUMSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SpectrumSetDialog
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_4;

    void setupUi(QDialog *SpectrumSetDialog)
    {
        if (SpectrumSetDialog->objectName().isEmpty())
            SpectrumSetDialog->setObjectName(QString::fromUtf8("SpectrumSetDialog"));
        SpectrumSetDialog->resize(526, 384);
        label = new QLabel(SpectrumSetDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 67, 17));
        spinBox = new QSpinBox(SpectrumSetDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(110, 30, 101, 26));
        label_2 = new QLabel(SpectrumSetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 67, 17));
        comboBox = new QComboBox(SpectrumSetDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 60, 191, 25));
        buttonBox = new QDialogButtonBox(SpectrumSetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(350, 350, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(SpectrumSetDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 110, 181, 101));
        spinBox_2 = new QSpinBox(SpectrumSetDialog);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(110, 0, 101, 26));
        label_4 = new QLabel(SpectrumSetDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 10, 67, 17));

        retranslateUi(SpectrumSetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SpectrumSetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SpectrumSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpectrumSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SpectrumSetDialog)
    {
        SpectrumSetDialog->setWindowTitle(QCoreApplication::translate("SpectrumSetDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SpectrumSetDialog", "fftSize", nullptr));
        label_2->setText(QCoreApplication::translate("SpectrumSetDialog", "Amplutude Type", nullptr));
        label_3->setText(QCoreApplication::translate("SpectrumSetDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("SpectrumSetDialog", "Fs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpectrumSetDialog: public Ui_SpectrumSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMSETDIALOG_H
