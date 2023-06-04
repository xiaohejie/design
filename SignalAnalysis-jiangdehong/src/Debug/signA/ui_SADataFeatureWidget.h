/********************************************************************************
** Form generated from reading UI file 'SADataFeatureWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SADATAFEATUREWIDGET_H
#define UI_SADATAFEATUREWIDGET_H

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

class Ui_SADataFeatureWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_clearDataFeature;
    QToolButton *toolButton_expandAll;
    QToolButton *toolButton_requestCalc;
    QSpacerItem *horizontalSpacer;
    QTreeView *treeView;

    void setupUi(QWidget *SADataFeatureWidget)
    {
        if (SADataFeatureWidget->objectName().isEmpty())
            SADataFeatureWidget->setObjectName(QString::fromUtf8("SADataFeatureWidget"));
        SADataFeatureWidget->resize(220, 300);
        verticalLayout = new QVBoxLayout(SADataFeatureWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_clearDataFeature = new QToolButton(SADataFeatureWidget);
        toolButton_clearDataFeature->setObjectName(QString::fromUtf8("toolButton_clearDataFeature"));
        toolButton_clearDataFeature->setMinimumSize(QSize(16, 16));
        toolButton_clearDataFeature->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/clearMarked.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_clearDataFeature->setIcon(icon);
        toolButton_clearDataFeature->setCheckable(false);
        toolButton_clearDataFeature->setChecked(false);
        toolButton_clearDataFeature->setAutoRepeat(false);
        toolButton_clearDataFeature->setAutoExclusive(false);
        toolButton_clearDataFeature->setPopupMode(QToolButton::DelayedPopup);
        toolButton_clearDataFeature->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_clearDataFeature->setAutoRaise(true);
        toolButton_clearDataFeature->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_clearDataFeature);

        toolButton_expandAll = new QToolButton(SADataFeatureWidget);
        toolButton_expandAll->setObjectName(QString::fromUtf8("toolButton_expandAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/expandAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_expandAll->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_expandAll);

        toolButton_requestCalc = new QToolButton(SADataFeatureWidget);
        toolButton_requestCalc->setObjectName(QString::fromUtf8("toolButton_requestCalc"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_requestCalc->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_requestCalc);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(SADataFeatureWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(treeView);


        retranslateUi(SADataFeatureWidget);

        QMetaObject::connectSlotsByName(SADataFeatureWidget);
    } // setupUi

    void retranslateUi(QWidget *SADataFeatureWidget)
    {
        SADataFeatureWidget->setWindowTitle(QCoreApplication::translate("SADataFeatureWidget", "Data Feature", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_clearDataFeature->setToolTip(QCoreApplication::translate("SADataFeatureWidget", "clear all marker in chart", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_clearDataFeature->setText(QCoreApplication::translate("SADataFeatureWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_expandAll->setToolTip(QCoreApplication::translate("SADataFeatureWidget", "expand all", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_expandAll->setText(QString());
        toolButton_requestCalc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SADataFeatureWidget: public Ui_SADataFeatureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SADATAFEATUREWIDGET_H
