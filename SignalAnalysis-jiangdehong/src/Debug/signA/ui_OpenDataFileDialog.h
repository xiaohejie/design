/********************************************************************************
** Form generated from reading UI file 'OpenDataFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENDATAFILEDIALOG_H
#define UI_OPENDATAFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OpenDataFileDialog
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSearch;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButtonOpen;

    void setupUi(QDialog *OpenDataFileDialog)
    {
        if (OpenDataFileDialog->objectName().isEmpty())
            OpenDataFileDialog->setObjectName(QString::fromUtf8("OpenDataFileDialog"));
        OpenDataFileDialog->resize(441, 400);
        gridLayout_2 = new QGridLayout(OpenDataFileDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonSearch = new QPushButton(OpenDataFileDialog);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));

        gridLayout_2->addWidget(pushButtonSearch, 0, 1, 1, 1);

        tableView = new QTableView(OpenDataFileDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 3);

        lineEdit = new QLineEdit(OpenDataFileDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        pushButtonOpen = new QPushButton(OpenDataFileDialog);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));

        gridLayout_2->addWidget(pushButtonOpen, 0, 2, 1, 1);


        retranslateUi(OpenDataFileDialog);

        QMetaObject::connectSlotsByName(OpenDataFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenDataFileDialog)
    {
        OpenDataFileDialog->setWindowTitle(QCoreApplication::translate("OpenDataFileDialog", "\351\200\211\346\213\251\345\233\236\346\224\276\346\226\207\344\273\266", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("OpenDataFileDialog", "\346\220\234\347\264\242", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("OpenDataFileDialog", "\346\220\234\347\264\242", nullptr));
        pushButtonOpen->setText(QCoreApplication::translate("OpenDataFileDialog", "\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenDataFileDialog: public Ui_OpenDataFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENDATAFILEDIALOG_H
