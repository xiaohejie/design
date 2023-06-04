/********************************************************************************
** Form generated from reading UI file 'productdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDIALOG_H
#define UI_PRODUCTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *openBtn;
    QPushButton *searchBtn;
    QPushButton *changeBtn;
    QPushButton *newBtn;
    QTableWidget *tableWidget;
    QPushButton *deleteBtn;
    QLineEdit *searchEdit;

    void setupUi(QDialog *ProductDialog)
    {
        if (ProductDialog->objectName().isEmpty())
            ProductDialog->setObjectName(QString::fromUtf8("ProductDialog"));
        ProductDialog->resize(472, 399);
        gridLayout_2 = new QGridLayout(ProductDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        openBtn = new QPushButton(ProductDialog);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));

        gridLayout->addWidget(openBtn, 1, 3, 1, 1);

        searchBtn = new QPushButton(ProductDialog);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));

        gridLayout->addWidget(searchBtn, 1, 2, 1, 1);

        changeBtn = new QPushButton(ProductDialog);
        changeBtn->setObjectName(QString::fromUtf8("changeBtn"));

        gridLayout->addWidget(changeBtn, 3, 2, 1, 1);

        newBtn = new QPushButton(ProductDialog);
        newBtn->setObjectName(QString::fromUtf8("newBtn"));

        gridLayout->addWidget(newBtn, 3, 3, 1, 1);

        tableWidget = new QTableWidget(ProductDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 4);

        deleteBtn = new QPushButton(ProductDialog);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        gridLayout->addWidget(deleteBtn, 3, 1, 1, 1);

        searchEdit = new QLineEdit(ProductDialog);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        gridLayout->addWidget(searchEdit, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ProductDialog);

        QMetaObject::connectSlotsByName(ProductDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductDialog)
    {
        ProductDialog->setWindowTitle(QCoreApplication::translate("ProductDialog", "Dialog", nullptr));
        openBtn->setText(QCoreApplication::translate("ProductDialog", "\346\211\223\345\274\200", nullptr));
        searchBtn->setText(QCoreApplication::translate("ProductDialog", "\346\220\234\347\264\242", nullptr));
        changeBtn->setText(QCoreApplication::translate("ProductDialog", "\344\277\256\346\224\271", nullptr));
        newBtn->setText(QCoreApplication::translate("ProductDialog", "\346\226\260\345\242\236", nullptr));
        deleteBtn->setText(QCoreApplication::translate("ProductDialog", "\345\210\240\351\231\244", nullptr));
        searchEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProductDialog: public Ui_ProductDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDIALOG_H
