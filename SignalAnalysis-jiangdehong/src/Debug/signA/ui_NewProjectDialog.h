/********************************************************************************
** Form generated from reading UI file 'NewProjectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTDIALOG_H
#define UI_NEWPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectDialog
{
public:
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QComboBox *projuctComboBox;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *nextbtn;
    QComboBox *frequencyComboBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *okbtn;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *previousbtn;
    QTableWidget *tableWidget;

    void setupUi(QDialog *NewProjectDialog)
    {
        if (NewProjectDialog->objectName().isEmpty())
            NewProjectDialog->setObjectName(QString::fromUtf8("NewProjectDialog"));
        NewProjectDialog->resize(596, 337);
        gridLayout_5 = new QGridLayout(NewProjectDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tabWidget = new QTabWidget(NewProjectDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        projuctComboBox = new QComboBox(tab);
        projuctComboBox->setObjectName(QString::fromUtf8("projuctComboBox"));

        gridLayout->addWidget(projuctComboBox, 0, 1, 1, 2);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nextbtn = new QPushButton(tab);
        nextbtn->setObjectName(QString::fromUtf8("nextbtn"));

        gridLayout->addWidget(nextbtn, 3, 2, 1, 1);

        frequencyComboBox = new QComboBox(tab);
        frequencyComboBox->setObjectName(QString::fromUtf8("frequencyComboBox"));

        gridLayout->addWidget(frequencyComboBox, 2, 1, 1, 2);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okbtn = new QPushButton(tab_2);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));

        gridLayout_2->addWidget(okbtn, 2, 3, 1, 1);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 0, 1, 1, 3);

        previousbtn = new QPushButton(tab_2);
        previousbtn->setObjectName(QString::fromUtf8("previousbtn"));

        gridLayout_2->addWidget(previousbtn, 2, 2, 1, 1);

        tableWidget = new QTableWidget(tab_2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 4);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(projuctComboBox);
        label_2->setBuddy(lineEdit);
        label_4->setBuddy(lineEdit_3);
#endif // QT_CONFIG(shortcut)

        retranslateUi(NewProjectDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectDialog)
    {
        NewProjectDialog->setWindowTitle(QCoreApplication::translate("NewProjectDialog", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        label->setText(QCoreApplication::translate("NewProjectDialog", "\344\272\247\345\223\201\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("NewProjectDialog", "\351\207\207\346\240\267\351\242\221\347\216\207", nullptr));
        label_2->setText(QCoreApplication::translate("NewProjectDialog", "\351\241\271\347\233\256\345\220\215", nullptr));
        nextbtn->setText(QCoreApplication::translate("NewProjectDialog", "\344\270\213\344\270\200\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("NewProjectDialog", "\351\241\271\347\233\256\350\256\276\347\275\256", nullptr));
        okbtn->setText(QCoreApplication::translate("NewProjectDialog", "\345\256\214\346\210\220", nullptr));
        label_4->setText(QCoreApplication::translate("NewProjectDialog", "\351\200\232\351\201\223\346\225\260", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QString());
        previousbtn->setText(QCoreApplication::translate("NewProjectDialog", "\344\270\212\344\270\200\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("NewProjectDialog", "\351\200\232\351\201\223\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProjectDialog: public Ui_NewProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTDIALOG_H
