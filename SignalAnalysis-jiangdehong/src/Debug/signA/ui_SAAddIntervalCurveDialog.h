/********************************************************************************
** Form generated from reading UI file 'SAAddIntervalCurveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDINTERVALCURVEDIALOG_H
#define UI_SAADDINTERVALCURVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "SAValueSelectComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAAddIntervalCurveDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxValue;
    QVBoxLayout *verticalLayout_2;
    SAValueSelectComboBox *valueComboBoxValue;
    QGroupBox *groupBoxMin;
    QVBoxLayout *verticalLayout;
    SAValueSelectComboBox *valueComboBoxMin;
    QGroupBox *groupBoxMax;
    QVBoxLayout *verticalLayout_3;
    SAValueSelectComboBox *valueComboBoxMax;
    QGroupBox *groupBoxMore;
    QGridLayout *gridLayout;
    QLineEdit *lineEditTitle;
    QLabel *labelTitle;
    QLabel *labelAddInCurrentChart;
    QCheckBox *checkBoxAddInCur;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutMain;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddIntervalCurveDialog)
    {
        if (SAAddIntervalCurveDialog->objectName().isEmpty())
            SAAddIntervalCurveDialog->setObjectName(QString::fromUtf8("SAAddIntervalCurveDialog"));
        SAAddIntervalCurveDialog->resize(576, 403);
        verticalLayout_4 = new QVBoxLayout(SAAddIntervalCurveDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBoxValue = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxValue->setObjectName(QString::fromUtf8("groupBoxValue"));
        verticalLayout_2 = new QVBoxLayout(groupBoxValue);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        valueComboBoxValue = new SAValueSelectComboBox(groupBoxValue);
        valueComboBoxValue->setObjectName(QString::fromUtf8("valueComboBoxValue"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(valueComboBoxValue->sizePolicy().hasHeightForWidth());
        valueComboBoxValue->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(valueComboBoxValue);


        verticalLayout_4->addWidget(groupBoxValue);

        groupBoxMin = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMin->setObjectName(QString::fromUtf8("groupBoxMin"));
        verticalLayout = new QVBoxLayout(groupBoxMin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        valueComboBoxMin = new SAValueSelectComboBox(groupBoxMin);
        valueComboBoxMin->setObjectName(QString::fromUtf8("valueComboBoxMin"));
        sizePolicy.setHeightForWidth(valueComboBoxMin->sizePolicy().hasHeightForWidth());
        valueComboBoxMin->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(valueComboBoxMin);


        verticalLayout_4->addWidget(groupBoxMin);

        groupBoxMax = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMax->setObjectName(QString::fromUtf8("groupBoxMax"));
        verticalLayout_3 = new QVBoxLayout(groupBoxMax);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        valueComboBoxMax = new SAValueSelectComboBox(groupBoxMax);
        valueComboBoxMax->setObjectName(QString::fromUtf8("valueComboBoxMax"));
        sizePolicy.setHeightForWidth(valueComboBoxMax->sizePolicy().hasHeightForWidth());
        valueComboBoxMax->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(valueComboBoxMax);


        verticalLayout_4->addWidget(groupBoxMax);

        groupBoxMore = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMore->setObjectName(QString::fromUtf8("groupBoxMore"));
        gridLayout = new QGridLayout(groupBoxMore);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditTitle = new QLineEdit(groupBoxMore);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 0, 1, 1, 3);

        labelTitle = new QLabel(groupBoxMore);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        gridLayout->addWidget(labelTitle, 0, 0, 1, 1);

        labelAddInCurrentChart = new QLabel(groupBoxMore);
        labelAddInCurrentChart->setObjectName(QString::fromUtf8("labelAddInCurrentChart"));

        gridLayout->addWidget(labelAddInCurrentChart, 1, 0, 1, 1);

        checkBoxAddInCur = new QCheckBox(groupBoxMore);
        checkBoxAddInCur->setObjectName(QString::fromUtf8("checkBoxAddInCur"));

        gridLayout->addWidget(checkBoxAddInCur, 1, 1, 1, 3);


        verticalLayout_4->addWidget(groupBoxMore);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayoutMain = new QHBoxLayout();
        horizontalLayoutMain->setObjectName(QString::fromUtf8("horizontalLayoutMain"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutMain->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddIntervalCurveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutMain->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayoutMain);


        retranslateUi(SAAddIntervalCurveDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddIntervalCurveDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddIntervalCurveDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SAAddIntervalCurveDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddIntervalCurveDialog)
    {
        SAAddIntervalCurveDialog->setWindowTitle(QCoreApplication::translate("SAAddIntervalCurveDialog", "Dialog", nullptr));
        groupBoxValue->setTitle(QCoreApplication::translate("SAAddIntervalCurveDialog", "Value", nullptr));
        groupBoxMin->setTitle(QCoreApplication::translate("SAAddIntervalCurveDialog", "Max", nullptr));
        groupBoxMax->setTitle(QCoreApplication::translate("SAAddIntervalCurveDialog", "Max", nullptr));
        groupBoxMore->setTitle(QCoreApplication::translate("SAAddIntervalCurveDialog", "other set", nullptr));
        labelTitle->setText(QCoreApplication::translate("SAAddIntervalCurveDialog", "title", nullptr));
        labelAddInCurrentChart->setText(QCoreApplication::translate("SAAddIntervalCurveDialog", "Add in current chart", nullptr));
        checkBoxAddInCur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAAddIntervalCurveDialog: public Ui_SAAddIntervalCurveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDINTERVALCURVEDIALOG_H
