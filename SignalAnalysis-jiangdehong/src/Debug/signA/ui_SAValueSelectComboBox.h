/********************************************************************************
** Form generated from reading UI file 'SAValueSelectComboBox.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVALUESELECTCOMBOBOX_H
#define UI_SAVALUESELECTCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAValueSelectComboBox
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QToolButton *toolButton;

    void setupUi(QWidget *SAValueSelectComboBox)
    {
        if (SAValueSelectComboBox->objectName().isEmpty())
            SAValueSelectComboBox->setObjectName(QString::fromUtf8("SAValueSelectComboBox"));
        SAValueSelectComboBox->resize(292, 24);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAValueSelectComboBox->sizePolicy().hasHeightForWidth());
        SAValueSelectComboBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SAValueSelectComboBox);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(SAValueSelectComboBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(SAValueSelectComboBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);

        toolButton = new QToolButton(SAValueSelectComboBox);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);


        retranslateUi(SAValueSelectComboBox);

        QMetaObject::connectSlotsByName(SAValueSelectComboBox);
    } // setupUi

    void retranslateUi(QWidget *SAValueSelectComboBox)
    {
        SAValueSelectComboBox->setWindowTitle(QCoreApplication::translate("SAValueSelectComboBox", "Value Select ComboBox", nullptr));
        label->setText(QCoreApplication::translate("SAValueSelectComboBox", "select value:", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAValueSelectComboBox: public Ui_SAValueSelectComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVALUESELECTCOMBOBOX_H
