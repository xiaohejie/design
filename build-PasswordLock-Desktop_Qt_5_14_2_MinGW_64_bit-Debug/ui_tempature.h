/********************************************************************************
** Form generated from reading UI file 'tempature.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPATURE_H
#define UI_TEMPATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tempature
{
public:

    void setupUi(QWidget *tempature)
    {
        if (tempature->objectName().isEmpty())
            tempature->setObjectName(QString::fromUtf8("tempature"));
        tempature->resize(400, 300);

        retranslateUi(tempature);

        QMetaObject::connectSlotsByName(tempature);
    } // setupUi

    void retranslateUi(QWidget *tempature)
    {
        tempature->setWindowTitle(QCoreApplication::translate("tempature", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tempature: public Ui_tempature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPATURE_H
