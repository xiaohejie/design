/********************************************************************************
** Form generated from reading UI file 'selectfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFUNCTION_H
#define UI_SELECTFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectFunction
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_faultDiagnosis;
    QPushButton *pushButton_datacollection;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *SelectFunction)
    {
        if (SelectFunction->objectName().isEmpty())
            SelectFunction->setObjectName(QString::fromUtf8("SelectFunction"));
        SelectFunction->resize(412, 287);
        horizontalLayout = new QHBoxLayout(SelectFunction);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_faultDiagnosis = new QPushButton(SelectFunction);
        pushButton_faultDiagnosis->setObjectName(QString::fromUtf8("pushButton_faultDiagnosis"));

        horizontalLayout->addWidget(pushButton_faultDiagnosis);

        pushButton_datacollection = new QPushButton(SelectFunction);
        pushButton_datacollection->setObjectName(QString::fromUtf8("pushButton_datacollection"));

        horizontalLayout->addWidget(pushButton_datacollection);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(SelectFunction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(SelectFunction);

        QMetaObject::connectSlotsByName(SelectFunction);
    } // setupUi

    void retranslateUi(QWidget *SelectFunction)
    {
        SelectFunction->setWindowTitle(QCoreApplication::translate("SelectFunction", "Form", nullptr));
        pushButton_faultDiagnosis->setText(QCoreApplication::translate("SelectFunction", "\346\225\205\351\232\234\346\243\200\346\265\213", nullptr));
        pushButton_datacollection->setText(QCoreApplication::translate("SelectFunction", "\346\225\260\346\215\256\351\207\207\351\233\206", nullptr));
        pushButton->setText(QCoreApplication::translate("SelectFunction", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectFunction: public Ui_SelectFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFUNCTION_H
