/********************************************************************************
** Form generated from reading UI file 'SAQwtAxisSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAQWTAXISSETWIDGET_H
#define UI_SAQWTAXISSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAAligmentSetWidget.h"
#include "SAFontSetWidget.h"
#include "SATimeFormatSetWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SAQwtAxisSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxEnable;
    QHBoxLayout *horizontalLayoutTitle;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QHBoxLayout *horizontalLayoutFont;
    QLabel *labelFont;
    SAFontSetWidget *fontSetWidget;
    QHBoxLayout *horizontalLayoutAligment;
    QLabel *labelAligment;
    SAAligmentSetWidget *aligmentSetWidget;
    QGridLayout *gridLayout;
    QLabel *labelRotation;
    QDoubleSpinBox *doubleSpinBoxRotation;
    QLabel *labelMargin;
    QSpinBox *spinBoxMargin;
    QLabel *labelMinScale;
    QDoubleSpinBox *doubleSpinBoxMin;
    QLabel *labelMaxScale;
    QDoubleSpinBox *doubleSpinBoxMax;
    QRadioButton *radioButtonNormal;
    QRadioButton *radioButtonTimeScale;
    SATimeFormatSetWidget *dateTimeScaleSetWidget;

    void setupUi(QWidget *SAQwtAxisSetWidget)
    {
        if (SAQwtAxisSetWidget->objectName().isEmpty())
            SAQwtAxisSetWidget->setObjectName(QString::fromUtf8("SAQwtAxisSetWidget"));
        SAQwtAxisSetWidget->resize(245, 290);
        verticalLayout = new QVBoxLayout(SAQwtAxisSetWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        checkBoxEnable = new QCheckBox(SAQwtAxisSetWidget);
        checkBoxEnable->setObjectName(QString::fromUtf8("checkBoxEnable"));

        verticalLayout->addWidget(checkBoxEnable);

        horizontalLayoutTitle = new QHBoxLayout();
        horizontalLayoutTitle->setSpacing(4);
        horizontalLayoutTitle->setObjectName(QString::fromUtf8("horizontalLayoutTitle"));
        labelTitle = new QLabel(SAQwtAxisSetWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayoutTitle->addWidget(labelTitle);

        lineEditTitle = new QLineEdit(SAQwtAxisSetWidget);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        horizontalLayoutTitle->addWidget(lineEditTitle);


        verticalLayout->addLayout(horizontalLayoutTitle);

        horizontalLayoutFont = new QHBoxLayout();
        horizontalLayoutFont->setSpacing(4);
        horizontalLayoutFont->setObjectName(QString::fromUtf8("horizontalLayoutFont"));
        labelFont = new QLabel(SAQwtAxisSetWidget);
        labelFont->setObjectName(QString::fromUtf8("labelFont"));

        horizontalLayoutFont->addWidget(labelFont);

        fontSetWidget = new SAFontSetWidget(SAQwtAxisSetWidget);
        fontSetWidget->setObjectName(QString::fromUtf8("fontSetWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSetWidget->sizePolicy().hasHeightForWidth());
        fontSetWidget->setSizePolicy(sizePolicy);
        fontSetWidget->setMinimumSize(QSize(0, 20));

        horizontalLayoutFont->addWidget(fontSetWidget);


        verticalLayout->addLayout(horizontalLayoutFont);

        horizontalLayoutAligment = new QHBoxLayout();
        horizontalLayoutAligment->setSpacing(4);
        horizontalLayoutAligment->setObjectName(QString::fromUtf8("horizontalLayoutAligment"));
        labelAligment = new QLabel(SAQwtAxisSetWidget);
        labelAligment->setObjectName(QString::fromUtf8("labelAligment"));

        horizontalLayoutAligment->addWidget(labelAligment);

        aligmentSetWidget = new SAAligmentSetWidget(SAQwtAxisSetWidget);
        aligmentSetWidget->setObjectName(QString::fromUtf8("aligmentSetWidget"));

        horizontalLayoutAligment->addWidget(aligmentSetWidget);


        verticalLayout->addLayout(horizontalLayoutAligment);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelRotation = new QLabel(SAQwtAxisSetWidget);
        labelRotation->setObjectName(QString::fromUtf8("labelRotation"));

        gridLayout->addWidget(labelRotation, 0, 0, 1, 1);

        doubleSpinBoxRotation = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxRotation->setObjectName(QString::fromUtf8("doubleSpinBoxRotation"));

        gridLayout->addWidget(doubleSpinBoxRotation, 0, 1, 1, 1);

        labelMargin = new QLabel(SAQwtAxisSetWidget);
        labelMargin->setObjectName(QString::fromUtf8("labelMargin"));

        gridLayout->addWidget(labelMargin, 1, 0, 1, 1);

        spinBoxMargin = new QSpinBox(SAQwtAxisSetWidget);
        spinBoxMargin->setObjectName(QString::fromUtf8("spinBoxMargin"));
        spinBoxMargin->setMinimum(-10);

        gridLayout->addWidget(spinBoxMargin, 1, 1, 1, 1);

        labelMinScale = new QLabel(SAQwtAxisSetWidget);
        labelMinScale->setObjectName(QString::fromUtf8("labelMinScale"));

        gridLayout->addWidget(labelMinScale, 2, 0, 1, 1);

        doubleSpinBoxMin = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxMin->setObjectName(QString::fromUtf8("doubleSpinBoxMin"));
        doubleSpinBoxMin->setDecimals(5);
        doubleSpinBoxMin->setMinimum(-10000000000000000735758738477112498397576062152177456799245857901351759143802190202050679656153088.000000000000000);
        doubleSpinBoxMin->setMaximum(100000000000000001463069523067487303097004298786465505927861078716979636425114821591040.000000000000000);

        gridLayout->addWidget(doubleSpinBoxMin, 2, 1, 1, 1);

        labelMaxScale = new QLabel(SAQwtAxisSetWidget);
        labelMaxScale->setObjectName(QString::fromUtf8("labelMaxScale"));

        gridLayout->addWidget(labelMaxScale, 3, 0, 1, 1);

        doubleSpinBoxMax = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxMax->setObjectName(QString::fromUtf8("doubleSpinBoxMax"));
        doubleSpinBoxMax->setDecimals(5);
        doubleSpinBoxMax->setMinimum(-100000000000000004188152556421145795899143386664033828314342771180699648.000000000000000);
        doubleSpinBoxMax->setMaximum(999999999999999949387135297074018866963645011013410073083904.000000000000000);

        gridLayout->addWidget(doubleSpinBoxMax, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        radioButtonNormal = new QRadioButton(SAQwtAxisSetWidget);
        radioButtonNormal->setObjectName(QString::fromUtf8("radioButtonNormal"));

        verticalLayout->addWidget(radioButtonNormal);

        radioButtonTimeScale = new QRadioButton(SAQwtAxisSetWidget);
        radioButtonTimeScale->setObjectName(QString::fromUtf8("radioButtonTimeScale"));

        verticalLayout->addWidget(radioButtonTimeScale);

        dateTimeScaleSetWidget = new SATimeFormatSetWidget(SAQwtAxisSetWidget);
        dateTimeScaleSetWidget->setObjectName(QString::fromUtf8("dateTimeScaleSetWidget"));

        verticalLayout->addWidget(dateTimeScaleSetWidget);


        retranslateUi(SAQwtAxisSetWidget);
        QObject::connect(radioButtonTimeScale, SIGNAL(clicked(bool)), dateTimeScaleSetWidget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SAQwtAxisSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAQwtAxisSetWidget)
    {
        SAQwtAxisSetWidget->setWindowTitle(QCoreApplication::translate("SAQwtAxisSetWidget", "Axis Set", nullptr));
        checkBoxEnable->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "enable", nullptr));
        labelTitle->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "title", nullptr));
        labelFont->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "font", nullptr));
        labelAligment->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "label Aligment", nullptr));
        labelRotation->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "label Rotation", nullptr));
        labelMargin->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "margin", nullptr));
        labelMinScale->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "min scale", nullptr));
        labelMaxScale->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "max scale", nullptr));
        radioButtonNormal->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "normal", nullptr));
        radioButtonTimeScale->setText(QCoreApplication::translate("SAQwtAxisSetWidget", "Time Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SAQwtAxisSetWidget: public Ui_SAQwtAxisSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAQWTAXISSETWIDGET_H
