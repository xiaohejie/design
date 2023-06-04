/********************************************************************************
** Form generated from reading UI file 'humidity.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUMIDITY_H
#define UI_HUMIDITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Humidity
{
public:

    void setupUi(QWidget *Humidity)
    {
        if (Humidity->objectName().isEmpty())
            Humidity->setObjectName(QString::fromUtf8("Humidity"));
        Humidity->resize(400, 300);

        retranslateUi(Humidity);

        QMetaObject::connectSlotsByName(Humidity);
    } // setupUi

    void retranslateUi(QWidget *Humidity)
    {
        Humidity->setWindowTitle(QCoreApplication::translate("Humidity", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Humidity: public Ui_Humidity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUMIDITY_H
