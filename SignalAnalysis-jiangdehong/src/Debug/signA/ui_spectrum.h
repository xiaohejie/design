/********************************************************************************
** Form generated from reading UI file 'spectrum.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUM_H
#define UI_SPECTRUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spectrum
{
public:

    void setupUi(QWidget *Spectrum)
    {
        if (Spectrum->objectName().isEmpty())
            Spectrum->setObjectName(QString::fromUtf8("Spectrum"));
        Spectrum->resize(464, 375);

        retranslateUi(Spectrum);

        QMetaObject::connectSlotsByName(Spectrum);
    } // setupUi

    void retranslateUi(QWidget *Spectrum)
    {
        Spectrum->setWindowTitle(QCoreApplication::translate("Spectrum", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Spectrum: public Ui_Spectrum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUM_H
