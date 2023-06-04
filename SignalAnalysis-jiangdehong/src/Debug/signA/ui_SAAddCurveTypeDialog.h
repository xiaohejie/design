/********************************************************************************
** Form generated from reading UI file 'SAAddCurveTypeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDCURVETYPEDIALOG_H
#define UI_SAADDCURVETYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SAAddCurveTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonNewFig;
    QRadioButton *radioButtonCurFig;
    QRadioButton *radioButtonCurFigInSubplot;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonMore;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddCurveTypeDialog)
    {
        if (SAAddCurveTypeDialog->objectName().isEmpty())
            SAAddCurveTypeDialog->setObjectName(QString::fromUtf8("SAAddCurveTypeDialog"));
        SAAddCurveTypeDialog->resize(284, 135);
        verticalLayout = new QVBoxLayout(SAAddCurveTypeDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        radioButtonNewFig = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonNewFig->setObjectName(QString::fromUtf8("radioButtonNewFig"));

        verticalLayout->addWidget(radioButtonNewFig);

        radioButtonCurFig = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonCurFig->setObjectName(QString::fromUtf8("radioButtonCurFig"));

        verticalLayout->addWidget(radioButtonCurFig);

        radioButtonCurFigInSubplot = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonCurFigInSubplot->setObjectName(QString::fromUtf8("radioButtonCurFigInSubplot"));

        verticalLayout->addWidget(radioButtonCurFigInSubplot);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButtonMore = new QToolButton(SAAddCurveTypeDialog);
        toolButtonMore->setObjectName(QString::fromUtf8("toolButtonMore"));
        toolButtonMore->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(toolButtonMore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddCurveTypeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SAAddCurveTypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddCurveTypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddCurveTypeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SAAddCurveTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddCurveTypeDialog)
    {
        SAAddCurveTypeDialog->setWindowTitle(QCoreApplication::translate("SAAddCurveTypeDialog", "Add Curve Type", nullptr));
        radioButtonNewFig->setText(QCoreApplication::translate("SAAddCurveTypeDialog", "add in new figure", nullptr));
        radioButtonCurFig->setText(QCoreApplication::translate("SAAddCurveTypeDialog", "add in current figure", nullptr));
        radioButtonCurFigInSubplot->setText(QCoreApplication::translate("SAAddCurveTypeDialog", "add in current figure with subplot", nullptr));
        toolButtonMore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAAddCurveTypeDialog: public Ui_SAAddCurveTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDCURVETYPEDIALOG_H
