/********************************************************************************
** Form generated from reading UI file 'formdb.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDB_H
#define UI_FORMDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formdb
{
public:
    QPushButton *btn_add;
    QPushButton *btn_del;
    QPushButton *btn_fre;
    QTableView *tableView;
    QLineEdit *lineEdit_passwd;
    QLineEdit *lineEdit_id;

    void setupUi(QWidget *Formdb)
    {
        if (Formdb->objectName().isEmpty())
            Formdb->setObjectName(QString::fromUtf8("Formdb"));
        Formdb->resize(630, 452);
        btn_add = new QPushButton(Formdb);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(520, 90, 75, 23));
        btn_del = new QPushButton(Formdb);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setGeometry(QRect(520, 140, 75, 23));
        btn_fre = new QPushButton(Formdb);
        btn_fre->setObjectName(QString::fromUtf8("btn_fre"));
        btn_fre->setGeometry(QRect(520, 190, 75, 23));
        tableView = new QTableView(Formdb);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 441, 301));
        lineEdit_passwd = new QLineEdit(Formdb);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setGeometry(QRect(350, 370, 161, 41));
        lineEdit_id = new QLineEdit(Formdb);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(90, 370, 171, 41));

        retranslateUi(Formdb);

        QMetaObject::connectSlotsByName(Formdb);
    } // setupUi

    void retranslateUi(QWidget *Formdb)
    {
        Formdb->setWindowTitle(QCoreApplication::translate("Formdb", "Form", nullptr));
        btn_add->setText(QCoreApplication::translate("Formdb", "Add", nullptr));
        btn_del->setText(QCoreApplication::translate("Formdb", "Delete", nullptr));
        btn_fre->setText(QCoreApplication::translate("Formdb", "freash", nullptr));
        lineEdit_passwd->setPlaceholderText(QCoreApplication::translate("Formdb", "pleace input passwrd", nullptr));
        lineEdit_id->setPlaceholderText(QCoreApplication::translate("Formdb", "pleace input Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formdb: public Ui_Formdb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDB_H
