/********************************************************************************
** Form generated from reading UI file 'alalysisresultview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALALYSISRESULTVIEW_H
#define UI_ALALYSISRESULTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlalysisResultView
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AlalysisResultView)
    {
        if (AlalysisResultView->objectName().isEmpty())
            AlalysisResultView->setObjectName(QString::fromUtf8("AlalysisResultView"));
        AlalysisResultView->resize(482, 334);
        gridLayout_2 = new QGridLayout(AlalysisResultView);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox = new QComboBox(AlalysisResultView);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(AlalysisResultView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(AlalysisResultView);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AlalysisResultView);

        QMetaObject::connectSlotsByName(AlalysisResultView);
    } // setupUi

    void retranslateUi(QWidget *AlalysisResultView)
    {
        AlalysisResultView->setWindowTitle(QCoreApplication::translate("AlalysisResultView", "Form", nullptr));
        label->setText(QCoreApplication::translate("AlalysisResultView", "\345\210\207\346\215\242\351\200\232\351\201\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlalysisResultView: public Ui_AlalysisResultView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALALYSISRESULTVIEW_H
