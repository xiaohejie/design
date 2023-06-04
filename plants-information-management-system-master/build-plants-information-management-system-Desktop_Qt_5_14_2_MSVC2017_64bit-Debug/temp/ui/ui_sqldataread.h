/********************************************************************************
** Form generated from reading UI file 'sqldataread.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDATAREAD_H
#define UI_SQLDATAREAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qchartview.h>
//#include <qtcharts_qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_sqldataread
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QtCharts::QChartView *graphicsView;
    QtCharts::QChartView *graphicsView_2;
    QtCharts::QChartView *graphicsView_3;
    QtCharts::QChartView *graphicsView_4;
    QtCharts::QChartView *graphicsView_5;
    QtCharts::QChartView *graphicsView_6;
    QtCharts::QChartView *graphicsView_7;
    QtCharts::QChartView *graphicsView_8;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *sqldataread)
    {
        if (sqldataread->objectName().isEmpty())
            sqldataread->setObjectName(QString::fromUtf8("sqldataread"));
        sqldataread->resize(1581, 929);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        sqldataread->setWindowIcon(icon);
        centralwidget = new QWidget(sqldataread);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1360, 640, 181, 28));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1170, 820, 201, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1170, 640, 171, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        graphicsView = new QtCharts::QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 10, 711, 271));
        QBrush brush(QColor(190, 182, 157, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        graphicsView_2 = new QtCharts::QChartView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(20, 300, 711, 271));
        graphicsView_3 = new QtCharts::QChartView(centralwidget);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(20, 590, 711, 271));
        graphicsView_4 = new QtCharts::QChartView(centralwidget);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(750, 10, 381, 271));
        graphicsView_5 = new QtCharts::QChartView(centralwidget);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(1150, 10, 391, 271));
        graphicsView_6 = new QtCharts::QChartView(centralwidget);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(750, 300, 381, 271));
        graphicsView_7 = new QtCharts::QChartView(centralwidget);
        graphicsView_7->setObjectName(QString::fromUtf8("graphicsView_7"));
        graphicsView_7->setGeometry(QRect(1150, 300, 391, 271));
        graphicsView_8 = new QtCharts::QChartView(centralwidget);
        graphicsView_8->setObjectName(QString::fromUtf8("graphicsView_8"));
        graphicsView_8->setGeometry(QRect(750, 590, 381, 271));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1160, 690, 411, 121));
        groupBox->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 30, 181, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 70, 71, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(100, 70, 61, 28));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(170, 70, 61, 28));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(250, 70, 61, 28));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(330, 70, 61, 28));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(210, 30, 181, 28));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(1170, 600, 171, 28));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(1360, 600, 181, 28));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        sqldataread->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sqldataread);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1581, 26));
        sqldataread->setMenuBar(menubar);
        statusbar = new QStatusBar(sqldataread);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sqldataread->setStatusBar(statusbar);
        toolBar = new QToolBar(sqldataread);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        sqldataread->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(sqldataread);

        QMetaObject::connectSlotsByName(sqldataread);
    } // setupUi

    void retranslateUi(QMainWindow *sqldataread)
    {
        sqldataread->setWindowTitle(QCoreApplication::translate("sqldataread", "sqldataread", nullptr));
        pushButton->setText(QCoreApplication::translate("sqldataread", "\350\212\261\345\215\211\346\226\275\350\202\245\346\203\205\345\206\265\347\273\237\350\256\241", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sqldataread", "\350\212\261\345\215\211\346\225\260\351\207\217\345\205\267\344\275\223\345\210\206\345\270\203\345\233\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("sqldataread", "\350\212\261\345\215\211\346\265\207\346\260\264\346\203\205\345\206\265\347\273\237\350\256\241", nullptr));
        groupBox->setTitle(QCoreApplication::translate("sqldataread", " \350\212\261\345\215\211\347\224\237\351\225\277\347\212\266\345\206\265\347\273\237\350\256\241", nullptr));
        pushButton_4->setText(QCoreApplication::translate("sqldataread", "\350\212\261\345\215\211\347\224\237\351\225\277\346\203\205\345\206\265\346\237\261\347\212\266\345\233\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("sqldataread", "\345\272\267\344\271\203\351\246\250", nullptr));
        pushButton_6->setText(QCoreApplication::translate("sqldataread", "\347\231\276\345\220\210", nullptr));
        pushButton_7->setText(QCoreApplication::translate("sqldataread", "\346\260\264\344\273\231", nullptr));
        pushButton_8->setText(QCoreApplication::translate("sqldataread", "\347\216\253\347\221\260", nullptr));
        pushButton_9->setText(QCoreApplication::translate("sqldataread", "\351\203\201\351\207\221\351\246\231", nullptr));
        pushButton_12->setText(QCoreApplication::translate("sqldataread", "\350\212\261\345\215\211\347\224\237\351\225\277\346\203\205\345\206\265\351\245\274\345\233\276", nullptr));
        pushButton_10->setText(QCoreApplication::translate("sqldataread", "\344\270\200\351\224\256\345\261\225\347\244\272\345\233\276\350\241\250", nullptr));
        pushButton_11->setText(QCoreApplication::translate("sqldataread", "\344\270\200\351\224\256\346\270\205\347\251\272\345\233\276\350\241\250", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("sqldataread", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sqldataread: public Ui_sqldataread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDATAREAD_H
