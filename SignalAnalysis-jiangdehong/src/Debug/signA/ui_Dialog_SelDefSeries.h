/********************************************************************************
** Form generated from reading UI file 'Dialog_SelDefSeries.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELDEFSERIES_H
#define UI_DIALOG_SELDEFSERIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_SelDefSeries
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_Start;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Detal;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cannel;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *Dialog_SelDefSeries)
    {
        if (Dialog_SelDefSeries->objectName().isEmpty())
            Dialog_SelDefSeries->setObjectName(QString::fromUtf8("Dialog_SelDefSeries"));
        Dialog_SelDefSeries->resize(422, 323);
        verticalLayout_2 = new QVBoxLayout(Dialog_SelDefSeries);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(Dialog_SelDefSeries);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        splitter->addWidget(tableView);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBox_Start = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Start->setObjectName(QString::fromUtf8("doubleSpinBox_Start"));
        doubleSpinBox_Start->setDecimals(10);
        doubleSpinBox_Start->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Start->setMaximum(999999999.000000000000000);
        doubleSpinBox_Start->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(doubleSpinBox_Start);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox_Detal = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Detal->setObjectName(QString::fromUtf8("doubleSpinBox_Detal"));
        doubleSpinBox_Detal->setDecimals(10);
        doubleSpinBox_Detal->setMinimum(-999999999.000000000000000);
        doubleSpinBox_Detal->setMaximum(999999999.000000000000000);
        doubleSpinBox_Detal->setSingleStep(0.100000000000000);
        doubleSpinBox_Detal->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_Detal);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Cannel = new QPushButton(layoutWidget);
        pushButton_Cannel->setObjectName(QString::fromUtf8("pushButton_Cannel"));

        horizontalLayout_3->addWidget(pushButton_Cannel);

        pushButton_OK = new QPushButton(layoutWidget);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        horizontalLayout_3->addWidget(pushButton_OK);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(Dialog_SelDefSeries);
        QObject::connect(pushButton_OK, SIGNAL(clicked()), Dialog_SelDefSeries, SLOT(accept()));
        QObject::connect(pushButton_Cannel, SIGNAL(clicked()), Dialog_SelDefSeries, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_SelDefSeries);
    } // setupUi

    void retranslateUi(QDialog *Dialog_SelDefSeries)
    {
        Dialog_SelDefSeries->setWindowTitle(QCoreApplication::translate("Dialog_SelDefSeries", "Select Define Series", nullptr));
        label->setText(QCoreApplication::translate("Dialog_SelDefSeries", "\345\272\217\345\210\227\350\265\267\345\247\213\345\200\274:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_SelDefSeries", "\345\272\217\345\210\227\345\242\236\345\200\274", nullptr));
        pushButton_Cannel->setText(QCoreApplication::translate("Dialog_SelDefSeries", "\345\217\226\346\266\210", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog_SelDefSeries", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_SelDefSeries: public Ui_Dialog_SelDefSeries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELDEFSERIES_H
