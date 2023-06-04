/********************************************************************************
** Form generated from reading UI file 'SAQwtSymbolSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAQWTSYMBOLSETWIDGET_H
#define UI_SAQWTSYMBOLSETWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAColorPickerButton.h"
#include "SAPenSetWidget.h"
#include "SAQwtSymbolComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAQwtSymbolSetWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    SAQwtSymbolComboBox *comboBoxSymbolStyle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QToolButton *toolButtonFixWidthHeight;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBoxSizeX;
    QSpinBox *spinBoxSizeY;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    SAPenSetWidget *edgetPenSet;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    SAColorPickerButton *colorPushButtonBrush;
    QSlider *horizontalSliderBrushAlpha;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *labelPreview;

    void setupUi(QWidget *SAQwtSymbolSetWidget)
    {
        if (SAQwtSymbolSetWidget->objectName().isEmpty())
            SAQwtSymbolSetWidget->setObjectName(QString::fromUtf8("SAQwtSymbolSetWidget"));
        SAQwtSymbolSetWidget->resize(200, 308);
        verticalLayout_5 = new QVBoxLayout(SAQwtSymbolSetWidget);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SAQwtSymbolSetWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxSymbolStyle = new SAQwtSymbolComboBox(SAQwtSymbolSetWidget);
        comboBoxSymbolStyle->setObjectName(QString::fromUtf8("comboBoxSymbolStyle"));

        horizontalLayout->addWidget(comboBoxSymbolStyle);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        label_2 = new QLabel(SAQwtSymbolSetWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        toolButtonFixWidthHeight = new QToolButton(SAQwtSymbolSetWidget);
        toolButtonFixWidthHeight->setObjectName(QString::fromUtf8("toolButtonFixWidthHeight"));
        toolButtonFixWidthHeight->setMinimumSize(QSize(12, 22));
        toolButtonFixWidthHeight->setMaximumSize(QSize(12, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icons/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonFixWidthHeight->setIcon(icon);
        toolButtonFixWidthHeight->setIconSize(QSize(12, 22));
        toolButtonFixWidthHeight->setCheckable(true);
        toolButtonFixWidthHeight->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonFixWidthHeight);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spinBoxSizeX = new QSpinBox(SAQwtSymbolSetWidget);
        spinBoxSizeX->setObjectName(QString::fromUtf8("spinBoxSizeX"));
        spinBoxSizeX->setMaximum(999);

        verticalLayout->addWidget(spinBoxSizeX);

        spinBoxSizeY = new QSpinBox(SAQwtSymbolSetWidget);
        spinBoxSizeY->setObjectName(QString::fromUtf8("spinBoxSizeY"));
        spinBoxSizeY->setMaximum(999);

        verticalLayout->addWidget(spinBoxSizeY);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(SAQwtSymbolSetWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        edgetPenSet = new SAPenSetWidget(groupBox);
        edgetPenSet->setObjectName(QString::fromUtf8("edgetPenSet"));
        edgetPenSet->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(edgetPenSet);


        verticalLayout_5->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(SAQwtSymbolSetWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        colorPushButtonBrush = new SAColorPickerButton(SAQwtSymbolSetWidget);
        colorPushButtonBrush->setObjectName(QString::fromUtf8("colorPushButtonBrush"));

        verticalLayout_3->addWidget(colorPushButtonBrush);

        horizontalSliderBrushAlpha = new QSlider(SAQwtSymbolSetWidget);
        horizontalSliderBrushAlpha->setObjectName(QString::fromUtf8("horizontalSliderBrushAlpha"));
        horizontalSliderBrushAlpha->setMaximum(255);
        horizontalSliderBrushAlpha->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSliderBrushAlpha);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(SAQwtSymbolSetWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        labelPreview = new QLabel(SAQwtSymbolSetWidget);
        labelPreview->setObjectName(QString::fromUtf8("labelPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPreview->sizePolicy().hasHeightForWidth());
        labelPreview->setSizePolicy(sizePolicy1);
        labelPreview->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(labelPreview);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(SAQwtSymbolSetWidget);

        QMetaObject::connectSlotsByName(SAQwtSymbolSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAQwtSymbolSetWidget)
    {
        SAQwtSymbolSetWidget->setWindowTitle(QCoreApplication::translate("SAQwtSymbolSetWidget", "Symbol Set Widget", nullptr));
        label->setText(QCoreApplication::translate("SAQwtSymbolSetWidget", "style:", nullptr));
        label_2->setText(QCoreApplication::translate("SAQwtSymbolSetWidget", "size:", nullptr));
        toolButtonFixWidthHeight->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("SAQwtSymbolSetWidget", "Edge", nullptr));
        label_4->setText(QCoreApplication::translate("SAQwtSymbolSetWidget", "Fill", nullptr));
        colorPushButtonBrush->setText(QString());
        label_5->setText(QCoreApplication::translate("SAQwtSymbolSetWidget", "preview:", nullptr));
        labelPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAQwtSymbolSetWidget: public Ui_SAQwtSymbolSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAQWTSYMBOLSETWIDGET_H
