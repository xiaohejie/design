/********************************************************************************
** Form generated from reading UI file 'projectsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSETTING_H
#define UI_PROJECTSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectSetting
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *updateBtn;
    QPushButton *deleteBtn;
    QComboBox *comboBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ProjectSetting)
    {
        if (ProjectSetting->objectName().isEmpty())
            ProjectSetting->setObjectName(QString::fromUtf8("ProjectSetting"));
        ProjectSetting->resize(405, 314);
        gridLayout_2 = new QGridLayout(ProjectSetting);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ProjectSetting);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        updateBtn = new QPushButton(ProjectSetting);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));

        gridLayout->addWidget(updateBtn, 2, 1, 1, 1);

        deleteBtn = new QPushButton(ProjectSetting);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));

        gridLayout->addWidget(deleteBtn, 2, 2, 1, 1);

        comboBox = new QComboBox(ProjectSetting);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 2);

        tableWidget = new QTableWidget(ProjectSetting);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(comboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ProjectSetting);

        QMetaObject::connectSlotsByName(ProjectSetting);
    } // setupUi

    void retranslateUi(QDialog *ProjectSetting)
    {
        ProjectSetting->setWindowTitle(QCoreApplication::translate("ProjectSetting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ProjectSetting", "\351\200\211\346\213\251\351\241\271\347\233\256", nullptr));
        updateBtn->setText(QCoreApplication::translate("ProjectSetting", "\346\233\264\346\226\260\351\241\271\347\233\256", nullptr));
        deleteBtn->setText(QCoreApplication::translate("ProjectSetting", "\345\210\240\351\231\244\351\241\271\347\233\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectSetting: public Ui_ProjectSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSETTING_H
