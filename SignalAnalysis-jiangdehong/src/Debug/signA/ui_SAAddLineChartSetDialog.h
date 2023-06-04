/********************************************************************************
** Form generated from reading UI file 'SAAddLineChartSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDLINECHARTSETDIALOG_H
#define UI_SAADDLINECHARTSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "SAUserDefineAxisDataWidget.h"
#include "SAValueSelectComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAAddLineChartSetDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxX;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonXNormal;
    QRadioButton *radioButtonXUseDef;
    QSpacerItem *horizontalSpacer_2;
    SAValueSelectComboBox *valueComboBoxX;
    SAUserDefineAxisDataWidget *userDefineXWidget;
    QGroupBox *groupBoxY;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonYNormal;
    QRadioButton *radioButtonYUseDef;
    QSpacerItem *horizontalSpacer_3;
    SAValueSelectComboBox *valueComboBoxY;
    SAUserDefineAxisDataWidget *userDefineYWidget;
    QGroupBox *groupBoxMore;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonInNewSubPlot;
    QLineEdit *lineEditTitle;
    QRadioButton *radioButtonNewFigure;
    QLabel *labelTitle;
    QRadioButton *radioButtonInCurrentChart;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutMain;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddLineChartSetDialog)
    {
        if (SAAddLineChartSetDialog->objectName().isEmpty())
            SAAddLineChartSetDialog->setObjectName(QString::fromUtf8("SAAddLineChartSetDialog"));
        SAAddLineChartSetDialog->resize(484, 364);
        verticalLayout_3 = new QVBoxLayout(SAAddLineChartSetDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxX = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxX->setObjectName(QString::fromUtf8("groupBoxX"));
        verticalLayout_2 = new QVBoxLayout(groupBoxX);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonXNormal = new QRadioButton(groupBoxX);
        radioButtonXNormal->setObjectName(QString::fromUtf8("radioButtonXNormal"));

        horizontalLayout_4->addWidget(radioButtonXNormal);

        radioButtonXUseDef = new QRadioButton(groupBoxX);
        radioButtonXUseDef->setObjectName(QString::fromUtf8("radioButtonXUseDef"));

        horizontalLayout_4->addWidget(radioButtonXUseDef);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        valueComboBoxX = new SAValueSelectComboBox(groupBoxX);
        valueComboBoxX->setObjectName(QString::fromUtf8("valueComboBoxX"));

        verticalLayout_2->addWidget(valueComboBoxX);

        userDefineXWidget = new SAUserDefineAxisDataWidget(groupBoxX);
        userDefineXWidget->setObjectName(QString::fromUtf8("userDefineXWidget"));

        verticalLayout_2->addWidget(userDefineXWidget);


        verticalLayout_3->addWidget(groupBoxX);

        groupBoxY = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxY->setObjectName(QString::fromUtf8("groupBoxY"));
        verticalLayout = new QVBoxLayout(groupBoxY);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButtonYNormal = new QRadioButton(groupBoxY);
        radioButtonYNormal->setObjectName(QString::fromUtf8("radioButtonYNormal"));

        horizontalLayout_5->addWidget(radioButtonYNormal);

        radioButtonYUseDef = new QRadioButton(groupBoxY);
        radioButtonYUseDef->setObjectName(QString::fromUtf8("radioButtonYUseDef"));

        horizontalLayout_5->addWidget(radioButtonYUseDef);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        valueComboBoxY = new SAValueSelectComboBox(groupBoxY);
        valueComboBoxY->setObjectName(QString::fromUtf8("valueComboBoxY"));

        verticalLayout->addWidget(valueComboBoxY);

        userDefineYWidget = new SAUserDefineAxisDataWidget(groupBoxY);
        userDefineYWidget->setObjectName(QString::fromUtf8("userDefineYWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userDefineYWidget->sizePolicy().hasHeightForWidth());
        userDefineYWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(userDefineYWidget);


        verticalLayout_3->addWidget(groupBoxY);

        groupBoxMore = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxMore->setObjectName(QString::fromUtf8("groupBoxMore"));
        gridLayout = new QGridLayout(groupBoxMore);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButtonInNewSubPlot = new QRadioButton(groupBoxMore);
        radioButtonInNewSubPlot->setObjectName(QString::fromUtf8("radioButtonInNewSubPlot"));

        gridLayout->addWidget(radioButtonInNewSubPlot, 4, 0, 1, 1);

        lineEditTitle = new QLineEdit(groupBoxMore);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 0, 1, 1, 2);

        radioButtonNewFigure = new QRadioButton(groupBoxMore);
        radioButtonNewFigure->setObjectName(QString::fromUtf8("radioButtonNewFigure"));
        radioButtonNewFigure->setChecked(true);

        gridLayout->addWidget(radioButtonNewFigure, 2, 0, 1, 1);

        labelTitle = new QLabel(groupBoxMore);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        gridLayout->addWidget(labelTitle, 0, 0, 1, 1);

        radioButtonInCurrentChart = new QRadioButton(groupBoxMore);
        radioButtonInCurrentChart->setObjectName(QString::fromUtf8("radioButtonInCurrentChart"));

        gridLayout->addWidget(radioButtonInCurrentChart, 3, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxMore);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayoutMain = new QHBoxLayout();
        horizontalLayoutMain->setObjectName(QString::fromUtf8("horizontalLayoutMain"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutMain->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddLineChartSetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutMain->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayoutMain);


        retranslateUi(SAAddLineChartSetDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddLineChartSetDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddLineChartSetDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SAAddLineChartSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddLineChartSetDialog)
    {
        SAAddLineChartSetDialog->setWindowTitle(QCoreApplication::translate("SAAddLineChartSetDialog", "Add Line Chart Set", nullptr));
#if QT_CONFIG(whatsthis)
        SAAddLineChartSetDialog->setWhatsThis(QCoreApplication::translate("SAAddLineChartSetDialog", "<html><head/><body><p>This dialog box is used to set the line graph</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        groupBoxX->setTitle(QCoreApplication::translate("SAAddLineChartSetDialog", "X", nullptr));
        radioButtonXNormal->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "normal", nullptr));
        radioButtonXUseDef->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "user define", nullptr));
        groupBoxY->setTitle(QCoreApplication::translate("SAAddLineChartSetDialog", "Y", nullptr));
        radioButtonYNormal->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "normal", nullptr));
        radioButtonYUseDef->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "user define", nullptr));
        groupBoxMore->setTitle(QCoreApplication::translate("SAAddLineChartSetDialog", "other set", nullptr));
        radioButtonInNewSubPlot->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "Add In New SubPlot Chart", nullptr));
        radioButtonNewFigure->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "Add In New Figure", nullptr));
        labelTitle->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "title", nullptr));
        radioButtonInCurrentChart->setText(QCoreApplication::translate("SAAddLineChartSetDialog", "Add In Current Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SAAddLineChartSetDialog: public Ui_SAAddLineChartSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDLINECHARTSETDIALOG_H
