/********************************************************************************
** Form generated from reading UI file 'SAUserDefineAxisDataWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAUSERDEFINEAXISDATAWIDGET_H
#define UI_SAUSERDEFINEAXISDATAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAUserDefineAxisDataWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStart;
    QDoubleSpinBox *doubleSpinBoxStart;
    QLabel *labelDetal;
    QDoubleSpinBox *doubleSpinBoxIncrease;
    QLabel *labelExample;

    void setupUi(QWidget *SAUserDefineAxisDataWidget)
    {
        if (SAUserDefineAxisDataWidget->objectName().isEmpty())
            SAUserDefineAxisDataWidget->setObjectName(QString::fromUtf8("SAUserDefineAxisDataWidget"));
        SAUserDefineAxisDataWidget->resize(400, 60);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAUserDefineAxisDataWidget->sizePolicy().hasHeightForWidth());
        SAUserDefineAxisDataWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SAUserDefineAxisDataWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelStart = new QLabel(SAUserDefineAxisDataWidget);
        labelStart->setObjectName(QString::fromUtf8("labelStart"));

        horizontalLayout->addWidget(labelStart);

        doubleSpinBoxStart = new QDoubleSpinBox(SAUserDefineAxisDataWidget);
        doubleSpinBoxStart->setObjectName(QString::fromUtf8("doubleSpinBoxStart"));
        doubleSpinBoxStart->setMinimum(-1000000000000000072531436381529235126158374409646521955518210155479040.000000000000000);
        doubleSpinBoxStart->setMaximum(100000000000000004188152556421145795899143386664033828314342771180699648.000000000000000);

        horizontalLayout->addWidget(doubleSpinBoxStart);

        labelDetal = new QLabel(SAUserDefineAxisDataWidget);
        labelDetal->setObjectName(QString::fromUtf8("labelDetal"));

        horizontalLayout->addWidget(labelDetal);

        doubleSpinBoxIncrease = new QDoubleSpinBox(SAUserDefineAxisDataWidget);
        doubleSpinBoxIncrease->setObjectName(QString::fromUtf8("doubleSpinBoxIncrease"));
        doubleSpinBoxIncrease->setDecimals(5);
        doubleSpinBoxIncrease->setMinimum(-10000000000000000102350670204085511496304388135324745728.000000000000000);
        doubleSpinBoxIncrease->setMaximum(99999999999999995280522225138166806691251291352861698530421623488512.000000000000000);

        horizontalLayout->addWidget(doubleSpinBoxIncrease);


        verticalLayout->addLayout(horizontalLayout);

        labelExample = new QLabel(SAUserDefineAxisDataWidget);
        labelExample->setObjectName(QString::fromUtf8("labelExample"));

        verticalLayout->addWidget(labelExample);


        retranslateUi(SAUserDefineAxisDataWidget);

        QMetaObject::connectSlotsByName(SAUserDefineAxisDataWidget);
    } // setupUi

    void retranslateUi(QWidget *SAUserDefineAxisDataWidget)
    {
        SAUserDefineAxisDataWidget->setWindowTitle(QCoreApplication::translate("SAUserDefineAxisDataWidget", "User Define Axis Data", nullptr));
        labelStart->setText(QCoreApplication::translate("SAUserDefineAxisDataWidget", "start:", nullptr));
        labelDetal->setText(QCoreApplication::translate("SAUserDefineAxisDataWidget", "increase:", nullptr));
        labelExample->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAUserDefineAxisDataWidget: public Ui_SAUserDefineAxisDataWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAUSERDEFINEAXISDATAWIDGET_H
