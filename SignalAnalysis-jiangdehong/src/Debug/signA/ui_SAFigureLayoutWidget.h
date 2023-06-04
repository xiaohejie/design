/********************************************************************************
** Form generated from reading UI file 'SAFigureLayoutWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFIGURELAYOUTWIDGET_H
#define UI_SAFIGURELAYOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAFigureLayoutWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonDelete;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SAFigureLayoutWidget)
    {
        if (SAFigureLayoutWidget->objectName().isEmpty())
            SAFigureLayoutWidget->setObjectName(QString::fromUtf8("SAFigureLayoutWidget"));
        SAFigureLayoutWidget->resize(386, 342);
        verticalLayout = new QVBoxLayout(SAFigureLayoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        treeView = new QTreeView(SAFigureLayoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        verticalLayout->addWidget(treeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButtonDelete = new QToolButton(SAFigureLayoutWidget);
        toolButtonDelete->setObjectName(QString::fromUtf8("toolButtonDelete"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonDelete->setIcon(icon);
        toolButtonDelete->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonDelete);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SAFigureLayoutWidget);

        QMetaObject::connectSlotsByName(SAFigureLayoutWidget);
    } // setupUi

    void retranslateUi(QWidget *SAFigureLayoutWidget)
    {
        SAFigureLayoutWidget->setWindowTitle(QCoreApplication::translate("SAFigureLayoutWidget", "Figure Layout", nullptr));
        toolButtonDelete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAFigureLayoutWidget: public Ui_SAFigureLayoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFIGURELAYOUTWIDGET_H
