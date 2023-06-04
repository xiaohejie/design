/********************************************************************************
** Form generated from reading UI file 'PickCurveDataModeSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKCURVEDATAMODESETDIALOG_H
#define UI_PICKCURVEDATAMODESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PickCurveDataModeSetDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_range;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_viewRange;
    QRadioButton *radioButton_allRange;
    QGroupBox *groupBox_type;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_xOnly;
    QRadioButton *radioButton_yOnly;
    QRadioButton *radioButton_point;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PickCurveDataModeSetDialog)
    {
        if (PickCurveDataModeSetDialog->objectName().isEmpty())
            PickCurveDataModeSetDialog->setObjectName(QString::fromUtf8("PickCurveDataModeSetDialog"));
        PickCurveDataModeSetDialog->resize(294, 266);
        verticalLayout_3 = new QVBoxLayout(PickCurveDataModeSetDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_range = new QGroupBox(PickCurveDataModeSetDialog);
        groupBox_range->setObjectName(QString::fromUtf8("groupBox_range"));
        verticalLayout_2 = new QVBoxLayout(groupBox_range);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_viewRange = new QRadioButton(groupBox_range);
        radioButton_viewRange->setObjectName(QString::fromUtf8("radioButton_viewRange"));

        verticalLayout_2->addWidget(radioButton_viewRange);

        radioButton_allRange = new QRadioButton(groupBox_range);
        radioButton_allRange->setObjectName(QString::fromUtf8("radioButton_allRange"));

        verticalLayout_2->addWidget(radioButton_allRange);


        verticalLayout_3->addWidget(groupBox_range);

        groupBox_type = new QGroupBox(PickCurveDataModeSetDialog);
        groupBox_type->setObjectName(QString::fromUtf8("groupBox_type"));
        verticalLayout = new QVBoxLayout(groupBox_type);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_xOnly = new QRadioButton(groupBox_type);
        radioButton_xOnly->setObjectName(QString::fromUtf8("radioButton_xOnly"));

        verticalLayout->addWidget(radioButton_xOnly);

        radioButton_yOnly = new QRadioButton(groupBox_type);
        radioButton_yOnly->setObjectName(QString::fromUtf8("radioButton_yOnly"));

        verticalLayout->addWidget(radioButton_yOnly);

        radioButton_point = new QRadioButton(groupBox_type);
        radioButton_point->setObjectName(QString::fromUtf8("radioButton_point"));

        verticalLayout->addWidget(radioButton_point);


        verticalLayout_3->addWidget(groupBox_type);

        buttonBox = new QDialogButtonBox(PickCurveDataModeSetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PickCurveDataModeSetDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PickCurveDataModeSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PickCurveDataModeSetDialog);
    } // setupUi

    void retranslateUi(QDialog *PickCurveDataModeSetDialog)
    {
        PickCurveDataModeSetDialog->setWindowTitle(QCoreApplication::translate("PickCurveDataModeSetDialog", "Pick Curve Data Mode Set", nullptr));
        groupBox_range->setTitle(QCoreApplication::translate("PickCurveDataModeSetDialog", "select export datas range", nullptr));
        radioButton_viewRange->setText(QCoreApplication::translate("PickCurveDataModeSetDialog", "export current select region datas", nullptr));
        radioButton_allRange->setText(QCoreApplication::translate("PickCurveDataModeSetDialog", "export all datas", nullptr));
        groupBox_type->setTitle(QCoreApplication::translate("PickCurveDataModeSetDialog", "choose export data type", nullptr));
        radioButton_xOnly->setText(QCoreApplication::translate("PickCurveDataModeSetDialog", "export x value", nullptr));
        radioButton_yOnly->setText(QCoreApplication::translate("PickCurveDataModeSetDialog", "export y value", nullptr));
        radioButton_point->setText(QCoreApplication::translate("PickCurveDataModeSetDialog", "export (x,y) value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PickCurveDataModeSetDialog: public Ui_PickCurveDataModeSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKCURVEDATAMODESETDIALOG_H
