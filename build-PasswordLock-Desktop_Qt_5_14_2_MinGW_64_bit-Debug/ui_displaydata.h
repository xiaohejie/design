/********************************************************************************
** Form generated from reading UI file 'displaydata.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYDATA_H
#define UI_DISPLAYDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "humidity.h"
#include "qchartview.h"
#include "tempature.h"

QT_BEGIN_NAMESPACE

class Ui_DisplayData
{
public:
    QAction *actionf;
    QAction *actiond;
    QAction *actionq;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    Humidity *widget_3;
    QTableWidget *tableWidget;
    tempature *widget_2;
    QtCharts::QChartView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DisplayData)
    {
        if (DisplayData->objectName().isEmpty())
            DisplayData->setObjectName(QString::fromUtf8("DisplayData"));
        DisplayData->resize(1428, 1011);
        actionf = new QAction(DisplayData);
        actionf->setObjectName(QString::fromUtf8("actionf"));
        actiond = new QAction(DisplayData);
        actiond->setObjectName(QString::fromUtf8("actiond"));
        actionq = new QAction(DisplayData);
        actionq->setObjectName(QString::fromUtf8("actionq"));
        centralwidget = new QWidget(DisplayData);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new Humidity(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(200, 200));
        widget_3->setMaximumSize(QSize(450, 450));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        widget_3->setFont(font);
        widget_3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(280, 450));
        tableWidget->setMaximumSize(QSize(280, 450));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::DashDotDotLine);

        gridLayout->addWidget(tableWidget, 0, 1, 1, 1);

        widget_2 = new tempature(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(200, 200));
        widget_2->setMaximumSize(QSize(450, 450));

        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        graphicsView = new QtCharts::QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(16777215, 16777215));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(graphicsView, 1, 0, 1, 3);

        DisplayData->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DisplayData);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1428, 23));
        DisplayData->setMenuBar(menubar);
        statusbar = new QStatusBar(DisplayData);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DisplayData->setStatusBar(statusbar);

        retranslateUi(DisplayData);

        QMetaObject::connectSlotsByName(DisplayData);
    } // setupUi

    void retranslateUi(QMainWindow *DisplayData)
    {
        DisplayData->setWindowTitle(QCoreApplication::translate("DisplayData", "MainWindow", nullptr));
        actionf->setText(QCoreApplication::translate("DisplayData", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        actiond->setText(QCoreApplication::translate("DisplayData", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        actionq->setText(QCoreApplication::translate("DisplayData", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayData: public Ui_DisplayData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYDATA_H
