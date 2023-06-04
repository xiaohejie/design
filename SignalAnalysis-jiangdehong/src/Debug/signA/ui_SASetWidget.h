/********************************************************************************
** Form generated from reading UI file 'SASetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SASETWIDGET_H
#define UI_SASETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SASetWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SASetWidget
{
public:
    QVBoxLayout *verticalLayout;
    SASetWidgetTab *tabWidget;

    void setupUi(QWidget *SASetWidget)
    {
        if (SASetWidget->objectName().isEmpty())
            SASetWidget->setObjectName(QString::fromUtf8("SASetWidget"));
        SASetWidget->resize(289, 380);
        verticalLayout = new QVBoxLayout(SASetWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new SASetWidgetTab(SASetWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(18, 18));
        tabWidget->setElideMode(Qt::ElideRight);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabBarAutoHide(false);

        verticalLayout->addWidget(tabWidget);


        retranslateUi(SASetWidget);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SASetWidget);
    } // setupUi

    void retranslateUi(QWidget *SASetWidget)
    {
        SASetWidget->setWindowTitle(QCoreApplication::translate("SASetWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SASetWidget: public Ui_SASetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SASETWIDGET_H
