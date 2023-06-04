/********************************************************************************
** Form generated from reading UI file 'picture.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_H
#define UI_PICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Picture
{
public:
    myComboBox *y1Property;
    myComboBox *xRange;

    void setupUi(QWidget *Picture)
    {
        if (Picture->objectName().isEmpty())
            Picture->setObjectName(QString::fromUtf8("Picture"));
        Picture->resize(720, 450);
        Picture->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        y1Property = new myComboBox(Picture);
        y1Property->setObjectName(QString::fromUtf8("y1Property"));
        y1Property->setGeometry(QRect(20, 150, 71, 30));
        y1Property->setFocusPolicy(Qt::TabFocus);
        xRange = new myComboBox(Picture);
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->addItem(QString());
        xRange->setObjectName(QString::fromUtf8("xRange"));
        xRange->setGeometry(QRect(20, 300, 71, 30));
        QWidget::setTabOrder(y1Property, xRange);

        retranslateUi(Picture);

        QMetaObject::connectSlotsByName(Picture);
    } // setupUi

    void retranslateUi(QWidget *Picture)
    {
        Picture->setWindowTitle(QCoreApplication::translate("Picture", "Form", nullptr));
        xRange->setItemText(0, QCoreApplication::translate("Picture", "10", nullptr));
        xRange->setItemText(1, QCoreApplication::translate("Picture", "20", nullptr));
        xRange->setItemText(2, QCoreApplication::translate("Picture", "50", nullptr));
        xRange->setItemText(3, QCoreApplication::translate("Picture", "100", nullptr));
        xRange->setItemText(4, QCoreApplication::translate("Picture", "200", nullptr));
        xRange->setItemText(5, QCoreApplication::translate("Picture", "500", nullptr));
        xRange->setItemText(6, QCoreApplication::translate("Picture", "1000", nullptr));
        xRange->setItemText(7, QCoreApplication::translate("Picture", "2000", nullptr));
        xRange->setItemText(8, QCoreApplication::translate("Picture", "5000", nullptr));
        xRange->setItemText(9, QCoreApplication::translate("Picture", "10000", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Picture: public Ui_Picture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_H
