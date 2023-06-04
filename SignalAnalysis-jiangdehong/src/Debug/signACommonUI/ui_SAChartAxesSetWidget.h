/********************************************************************************
** Form generated from reading UI file 'SAChartAxesSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SACHARTAXESSETWIDGET_H
#define UI_SACHARTAXESSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SACollapsibleGroupBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAChartAxesSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    SACollapsibleGroupBox *groupBoxXBottom;
    SACollapsibleGroupBox *groupBoxYLeft;
    SACollapsibleGroupBox *groupBoxXTop;
    SACollapsibleGroupBox *groupBoxYRight;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SAChartAxesSetWidget)
    {
        if (SAChartAxesSetWidget->objectName().isEmpty())
            SAChartAxesSetWidget->setObjectName(QString::fromUtf8("SAChartAxesSetWidget"));
        SAChartAxesSetWidget->resize(218, 255);
        verticalLayout = new QVBoxLayout(SAChartAxesSetWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBoxXBottom = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxXBottom->setObjectName(QString::fromUtf8("groupBoxXBottom"));

        verticalLayout->addWidget(groupBoxXBottom);

        groupBoxYLeft = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxYLeft->setObjectName(QString::fromUtf8("groupBoxYLeft"));

        verticalLayout->addWidget(groupBoxYLeft);

        groupBoxXTop = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxXTop->setObjectName(QString::fromUtf8("groupBoxXTop"));

        verticalLayout->addWidget(groupBoxXTop);

        groupBoxYRight = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxYRight->setObjectName(QString::fromUtf8("groupBoxYRight"));

        verticalLayout->addWidget(groupBoxYRight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SAChartAxesSetWidget);

        QMetaObject::connectSlotsByName(SAChartAxesSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAChartAxesSetWidget)
    {
        SAChartAxesSetWidget->setWindowTitle(QCoreApplication::translate("SAChartAxesSetWidget", "Chart Axes Set", nullptr));
        groupBoxXBottom->setTitle(QCoreApplication::translate("SAChartAxesSetWidget", "X Bottom", nullptr));
        groupBoxYLeft->setTitle(QCoreApplication::translate("SAChartAxesSetWidget", "Y Left", nullptr));
        groupBoxXTop->setTitle(QCoreApplication::translate("SAChartAxesSetWidget", "X Top", nullptr));
        groupBoxYRight->setTitle(QCoreApplication::translate("SAChartAxesSetWidget", "Y Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SAChartAxesSetWidget: public Ui_SAChartAxesSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SACHARTAXESSETWIDGET_H
