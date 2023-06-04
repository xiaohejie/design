/********************************************************************************
** Form generated from reading UI file 'SAProjectInfomationSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAPROJECTINFOMATIONSETDIALOG_H
#define UI_SAPROJECTINFOMATIONSETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SAProjectInfomationSetDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditProjectName;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEditProjectDescribe;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAProjectInfomationSetDialog)
    {
        if (SAProjectInfomationSetDialog->objectName().isEmpty())
            SAProjectInfomationSetDialog->setObjectName(QString::fromUtf8("SAProjectInfomationSetDialog"));
        SAProjectInfomationSetDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/project.png"), QSize(), QIcon::Normal, QIcon::Off);
        SAProjectInfomationSetDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SAProjectInfomationSetDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SAProjectInfomationSetDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditProjectName = new QLineEdit(SAProjectInfomationSetDialog);
        lineEditProjectName->setObjectName(QString::fromUtf8("lineEditProjectName"));

        horizontalLayout->addWidget(lineEditProjectName);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(SAProjectInfomationSetDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        textEditProjectDescribe = new QTextEdit(SAProjectInfomationSetDialog);
        textEditProjectDescribe->setObjectName(QString::fromUtf8("textEditProjectDescribe"));

        horizontalLayout_2->addWidget(textEditProjectDescribe);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(SAProjectInfomationSetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SAProjectInfomationSetDialog);

        QMetaObject::connectSlotsByName(SAProjectInfomationSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SAProjectInfomationSetDialog)
    {
        SAProjectInfomationSetDialog->setWindowTitle(QCoreApplication::translate("SAProjectInfomationSetDialog", "project infomation set dialog", nullptr));
#if QT_CONFIG(tooltip)
        SAProjectInfomationSetDialog->setToolTip(QCoreApplication::translate("SAProjectInfomationSetDialog", "set project information", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("SAProjectInfomationSetDialog", "project name:", nullptr));
        label_2->setText(QCoreApplication::translate("SAProjectInfomationSetDialog", "project describe:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SAProjectInfomationSetDialog: public Ui_SAProjectInfomationSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAPROJECTINFOMATIONSETDIALOG_H
