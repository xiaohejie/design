/********************************************************************************
** Form generated from reading UI file 'uidemo18.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UIDEMO18_H
#define UI_UIDEMO18_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIDemo18
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widgetMain;
    QWidget *widgetTop;
    QPushButton *btnReturn;
    QPushButton *rili;
    QLabel *labTitle;
    QPushButton *help;
    QPushButton *btnMsg;
    QPushButton *btnQuit;
    QPushButton *whether;
    QLineEdit *lineEdit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QToolButton *btn_Product;
    QToolButton *btn_Map;
    QToolButton *btn_Settings;
    QToolButton *btn_Research;
    QToolButton *btn_Info;
    QToolButton *btn_Analysis;
    QToolButton *btn_QGIS;
    QWidget *page2;
    QLabel *label_6;
    QWidget *page3;
    QLabel *label_5;
    QPushButton *btn_AddFlower;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_11;
    QLineEdit *lineEdit_ContactPerson;
    QLineEdit *lineEdit_Farming;
    QLineEdit *lineEdit_Cost;
    QLineEdit *lineEdit_Remark;
    QLabel *label_13;
    QLineEdit *lineEdit_Location2;
    QLineEdit *lineEdit_Nongzi;
    QLabel *label_16;
    QLineEdit *lineEdit_Quantity;
    QLabel *label_18;
    QLabel *label_10;
    QLineEdit *lineEdit_Company;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_ContactNum;
    QLabel *label_9;
    QLineEdit *lineEdit_Location1;
    QLabel *label_17;
    QComboBox *comboBox;
    QLabel *label_15;
    QLabel *label_14;
    QLineEdit *lineEdit_Location4;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_7;
    QLineEdit *lineEdit_Location3;
    QPushButton *btn_cleartext;
    QWidget *page4;
    QLabel *label_4;
    QWidget *page5;
    QLabel *label_3;
    QWidget *page6;
    QLabel *label_2;
    QWidget *page7;
    QLabel *label;
    QPushButton *btn_AddAcount;
    QLabel *label_21;
    QLineEdit *lineEdit_ip;
    QPushButton *pushButton;
    QPushButton *pushButton_map;
    QLineEdit *lineEdit_mapurl;

    void setupUi(QWidget *UIDemo18)
    {
        if (UIDemo18->objectName().isEmpty())
            UIDemo18->setObjectName(QString::fromUtf8("UIDemo18"));
        UIDemo18->resize(1500, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UIDemo18->sizePolicy().hasHeightForWidth());
        UIDemo18->setSizePolicy(sizePolicy);
        UIDemo18->setMinimumSize(QSize(1500, 900));
        UIDemo18->setMaximumSize(QSize(1500, 900));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        UIDemo18->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(UIDemo18);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widgetMain = new QWidget(UIDemo18);
        widgetMain->setObjectName(QString::fromUtf8("widgetMain"));
        sizePolicy.setHeightForWidth(widgetMain->sizePolicy().hasHeightForWidth());
        widgetMain->setSizePolicy(sizePolicy);
        widgetMain->setMinimumSize(QSize(1500, 900));
        widgetMain->setMaximumSize(QSize(1500, 900));
        widgetTop = new QWidget(widgetMain);
        widgetTop->setObjectName(QString::fromUtf8("widgetTop"));
        widgetTop->setGeometry(QRect(0, 0, 1500, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widgetTop->sizePolicy().hasHeightForWidth());
        widgetTop->setSizePolicy(sizePolicy1);
        widgetTop->setMaximumSize(QSize(16777215, 45));
        btnReturn = new QPushButton(widgetTop);
        btnReturn->setObjectName(QString::fromUtf8("btnReturn"));
        btnReturn->setGeometry(QRect(10, 0, 41, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnReturn->sizePolicy().hasHeightForWidth());
        btnReturn->setSizePolicy(sizePolicy2);
        rili = new QPushButton(widgetTop);
        rili->setObjectName(QString::fromUtf8("rili"));
        rili->setGeometry(QRect(70, 0, 41, 41));
        sizePolicy2.setHeightForWidth(rili->sizePolicy().hasHeightForWidth());
        rili->setSizePolicy(sizePolicy2);
        labTitle = new QLabel(widgetTop);
        labTitle->setObjectName(QString::fromUtf8("labTitle"));
        labTitle->setGeometry(QRect(530, 0, 321, 31));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labTitle->sizePolicy().hasHeightForWidth());
        labTitle->setSizePolicy(sizePolicy3);
        labTitle->setAlignment(Qt::AlignCenter);
        help = new QPushButton(widgetTop);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(1320, 0, 41, 41));
        sizePolicy2.setHeightForWidth(help->sizePolicy().hasHeightForWidth());
        help->setSizePolicy(sizePolicy2);
        help->setCheckable(false);
        btnMsg = new QPushButton(widgetTop);
        btnMsg->setObjectName(QString::fromUtf8("btnMsg"));
        btnMsg->setGeometry(QRect(1380, 0, 41, 41));
        sizePolicy2.setHeightForWidth(btnMsg->sizePolicy().hasHeightForWidth());
        btnMsg->setSizePolicy(sizePolicy2);
        btnMsg->setCheckable(false);
        btnQuit = new QPushButton(widgetTop);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(1440, 0, 41, 41));
        sizePolicy2.setHeightForWidth(btnQuit->sizePolicy().hasHeightForWidth());
        btnQuit->setSizePolicy(sizePolicy2);
        btnQuit->setCheckable(false);
        whether = new QPushButton(widgetTop);
        whether->setObjectName(QString::fromUtf8("whether"));
        whether->setGeometry(QRect(130, 0, 41, 41));
        sizePolicy2.setHeightForWidth(whether->sizePolicy().hasHeightForWidth());
        whether->setSizePolicy(sizePolicy2);
        lineEdit = new QLineEdit(widgetTop);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(1120, 0, 181, 41));
        stackedWidget = new QStackedWidget(widgetMain);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 41, 1500, 900));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(1500, 900));
        stackedWidget->setMaximumSize(QSize(1500, 850));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        btn_Product = new QToolButton(page);
        btn_Product->setObjectName(QString::fromUtf8("btn_Product"));
        btn_Product->setGeometry(QRect(20, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Product->sizePolicy().hasHeightForWidth());
        btn_Product->setSizePolicy(sizePolicy);
        btn_Product->setMaximumSize(QSize(440, 400));
        btn_Product->setStyleSheet(QString::fromUtf8(""));
        btn_Product->setCheckable(false);
        btn_Product->setChecked(false);
        btn_Product->setAutoRepeat(false);
        btn_Product->setAutoExclusive(false);
        btn_Product->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Map = new QToolButton(page);
        btn_Map->setObjectName(QString::fromUtf8("btn_Map"));
        btn_Map->setGeometry(QRect(760, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Map->sizePolicy().hasHeightForWidth());
        btn_Map->setSizePolicy(sizePolicy);
        btn_Map->setMaximumSize(QSize(440, 400));
        btn_Map->setStyleSheet(QString::fromUtf8(""));
        btn_Map->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Settings = new QToolButton(page);
        btn_Settings->setObjectName(QString::fromUtf8("btn_Settings"));
        btn_Settings->setGeometry(QRect(1260, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Settings->sizePolicy().hasHeightForWidth());
        btn_Settings->setSizePolicy(sizePolicy);
        btn_Settings->setMaximumSize(QSize(440, 400));
        btn_Settings->setStyleSheet(QString::fromUtf8(""));
        btn_Settings->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Research = new QToolButton(page);
        btn_Research->setObjectName(QString::fromUtf8("btn_Research"));
        btn_Research->setGeometry(QRect(510, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Research->sizePolicy().hasHeightForWidth());
        btn_Research->setSizePolicy(sizePolicy);
        btn_Research->setMaximumSize(QSize(440, 400));
        btn_Research->setStyleSheet(QString::fromUtf8(""));
        btn_Research->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Info = new QToolButton(page);
        btn_Info->setObjectName(QString::fromUtf8("btn_Info"));
        btn_Info->setGeometry(QRect(267, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Info->sizePolicy().hasHeightForWidth());
        btn_Info->setSizePolicy(sizePolicy);
        btn_Info->setMaximumSize(QSize(440, 400));
        btn_Info->setStyleSheet(QString::fromUtf8(""));
        btn_Info->setCheckable(false);
        btn_Info->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Analysis = new QToolButton(page);
        btn_Analysis->setObjectName(QString::fromUtf8("btn_Analysis"));
        btn_Analysis->setGeometry(QRect(1010, 20, 200, 200));
        sizePolicy.setHeightForWidth(btn_Analysis->sizePolicy().hasHeightForWidth());
        btn_Analysis->setSizePolicy(sizePolicy);
        btn_Analysis->setMaximumSize(QSize(440, 400));
        btn_Analysis->setStyleSheet(QString::fromUtf8(""));
        btn_Analysis->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_QGIS = new QToolButton(page);
        btn_QGIS->setObjectName(QString::fromUtf8("btn_QGIS"));
        btn_QGIS->setGeometry(QRect(20, 250, 200, 200));
        sizePolicy.setHeightForWidth(btn_QGIS->sizePolicy().hasHeightForWidth());
        btn_QGIS->setSizePolicy(sizePolicy);
        btn_QGIS->setMaximumSize(QSize(440, 400));
        btn_QGIS->setStyleSheet(QString::fromUtf8(""));
        btn_QGIS->setCheckable(false);
        btn_QGIS->setChecked(false);
        btn_QGIS->setAutoRepeat(false);
        btn_QGIS->setAutoExclusive(false);
        btn_QGIS->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        stackedWidget->addWidget(page);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        label_6 = new QLabel(page2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(580, 280, 401, 191));
        QFont font;
        font.setPointSize(26);
        label_6->setFont(font);
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        label_5 = new QLabel(page3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(600, -50, 401, 191));
        label_5->setFont(font);
        btn_AddFlower = new QPushButton(page3);
        btn_AddFlower->setObjectName(QString::fromUtf8("btn_AddFlower"));
        btn_AddFlower->setGeometry(QRect(540, 750, 100, 50));
        sizePolicy.setHeightForWidth(btn_AddFlower->sizePolicy().hasHeightForWidth());
        btn_AddFlower->setSizePolicy(sizePolicy);
        btn_AddFlower->setMinimumSize(QSize(100, 50));
        btn_AddFlower->setMaximumSize(QSize(100, 50));
        btn_AddFlower->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 14pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;color: rgb(0, 0, 0);}\n"
"QPushButton:pressed{background-color:#ff855c;border-style: inset;"));
        label_19 = new QLabel(page3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(270, 650, 101, 31));
        QFont font1;
        font1.setPointSize(20);
        label_19->setFont(font1);
        label_20 = new QLabel(page3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(740, 650, 100, 31));
        label_20->setFont(font1);
        label_11 = new QLabel(page3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(740, 394, 151, 31));
        label_11->setFont(font1);
        lineEdit_ContactPerson = new QLineEdit(page3);
        lineEdit_ContactPerson->setObjectName(QString::fromUtf8("lineEdit_ContactPerson"));
        lineEdit_ContactPerson->setGeometry(QRect(910, 300, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_ContactPerson->sizePolicy().hasHeightForWidth());
        lineEdit_ContactPerson->setSizePolicy(sizePolicy);
        lineEdit_ContactPerson->setMinimumSize(QSize(160, 40));
        lineEdit_ContactPerson->setMaximumSize(QSize(160, 40));
        lineEdit_ContactPerson->setStyleSheet(QString::fromUtf8("color: #000000;"));
        lineEdit_Farming = new QLineEdit(page3);
        lineEdit_Farming->setObjectName(QString::fromUtf8("lineEdit_Farming"));
        lineEdit_Farming->setGeometry(QRect(410, 210, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Farming->sizePolicy().hasHeightForWidth());
        lineEdit_Farming->setSizePolicy(sizePolicy);
        lineEdit_Farming->setMinimumSize(QSize(160, 40));
        lineEdit_Farming->setMaximumSize(QSize(150, 25));
        lineEdit_Farming->setStyleSheet(QString::fromUtf8("color: #000000;"));
        lineEdit_Cost = new QLineEdit(page3);
        lineEdit_Cost->setObjectName(QString::fromUtf8("lineEdit_Cost"));
        lineEdit_Cost->setGeometry(QRect(910, 560, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Cost->sizePolicy().hasHeightForWidth());
        lineEdit_Cost->setSizePolicy(sizePolicy);
        lineEdit_Cost->setMinimumSize(QSize(160, 40));
        lineEdit_Cost->setMaximumSize(QSize(160, 40));
        lineEdit_Cost->setStyleSheet(QString::fromUtf8("color: #000000;"));
        lineEdit_Remark = new QLineEdit(page3);
        lineEdit_Remark->setObjectName(QString::fromUtf8("lineEdit_Remark"));
        lineEdit_Remark->setGeometry(QRect(910, 646, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Remark->sizePolicy().hasHeightForWidth());
        lineEdit_Remark->setSizePolicy(sizePolicy);
        lineEdit_Remark->setMinimumSize(QSize(160, 40));
        lineEdit_Remark->setMaximumSize(QSize(160, 40));
        lineEdit_Remark->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_13 = new QLabel(page3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(740, 564, 151, 31));
        label_13->setFont(font1);
        lineEdit_Location2 = new QLineEdit(page3);
        lineEdit_Location2->setObjectName(QString::fromUtf8("lineEdit_Location2"));
        lineEdit_Location2->setGeometry(QRect(410, 480, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Location2->sizePolicy().hasHeightForWidth());
        lineEdit_Location2->setSizePolicy(sizePolicy);
        lineEdit_Location2->setMinimumSize(QSize(160, 40));
        lineEdit_Location2->setMaximumSize(QSize(150, 25));
        lineEdit_Location2->setStyleSheet(QString::fromUtf8("color: #000000;"));
        lineEdit_Nongzi = new QLineEdit(page3);
        lineEdit_Nongzi->setObjectName(QString::fromUtf8("lineEdit_Nongzi"));
        lineEdit_Nongzi->setGeometry(QRect(410, 300, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Nongzi->sizePolicy().hasHeightForWidth());
        lineEdit_Nongzi->setSizePolicy(sizePolicy);
        lineEdit_Nongzi->setMinimumSize(QSize(160, 40));
        lineEdit_Nongzi->setMaximumSize(QSize(160, 40));
        lineEdit_Nongzi->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_16 = new QLabel(page3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(270, 304, 100, 31));
        label_16->setFont(font1);
        lineEdit_Quantity = new QLineEdit(page3);
        lineEdit_Quantity->setObjectName(QString::fromUtf8("lineEdit_Quantity"));
        lineEdit_Quantity->setGeometry(QRect(910, 480, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Quantity->sizePolicy().hasHeightForWidth());
        lineEdit_Quantity->setSizePolicy(sizePolicy);
        lineEdit_Quantity->setMinimumSize(QSize(160, 40));
        lineEdit_Quantity->setMaximumSize(QSize(150, 25));
        lineEdit_Quantity->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_18 = new QLabel(page3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(270, 214, 100, 31));
        label_18->setFont(font1);
        label_10 = new QLabel(page3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(740, 304, 121, 31));
        label_10->setFont(font1);
        lineEdit_Company = new QLineEdit(page3);
        lineEdit_Company->setObjectName(QString::fromUtf8("lineEdit_Company"));
        lineEdit_Company->setGeometry(QRect(910, 210, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Company->sizePolicy().hasHeightForWidth());
        lineEdit_Company->setSizePolicy(sizePolicy);
        lineEdit_Company->setMinimumSize(QSize(160, 40));
        lineEdit_Company->setMaximumSize(QSize(150, 25));
        lineEdit_Company->setStyleSheet(QString::fromUtf8("color: #000000;"));
        dateEdit = new QDateEdit(page3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(910, 120, 160, 40));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setMinimumSize(QSize(160, 40));
        dateEdit->setMaximumSize(QSize(160, 40));
        dateEdit->setStyleSheet(QString::fromUtf8("color: #000000;\n"
""));
        dateEdit->setDate(QDate(2021, 4, 26));
        lineEdit_ContactNum = new QLineEdit(page3);
        lineEdit_ContactNum->setObjectName(QString::fromUtf8("lineEdit_ContactNum"));
        lineEdit_ContactNum->setGeometry(QRect(910, 390, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_ContactNum->sizePolicy().hasHeightForWidth());
        lineEdit_ContactNum->setSizePolicy(sizePolicy);
        lineEdit_ContactNum->setMinimumSize(QSize(160, 40));
        lineEdit_ContactNum->setMaximumSize(QSize(150, 40));
        lineEdit_ContactNum->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_9 = new QLabel(page3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(740, 214, 151, 31));
        label_9->setFont(font1);
        lineEdit_Location1 = new QLineEdit(page3);
        lineEdit_Location1->setObjectName(QString::fromUtf8("lineEdit_Location1"));
        lineEdit_Location1->setGeometry(QRect(410, 390, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Location1->sizePolicy().hasHeightForWidth());
        lineEdit_Location1->setSizePolicy(sizePolicy);
        lineEdit_Location1->setMinimumSize(QSize(160, 40));
        lineEdit_Location1->setMaximumSize(QSize(160, 40));
        lineEdit_Location1->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_17 = new QLabel(page3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 564, 100, 31));
        label_17->setFont(font1);
        comboBox = new QComboBox(page3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(410, 120, 160, 40));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(160, 40));
        comboBox->setMaximumSize(QSize(160, 40));
        comboBox->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_15 = new QLabel(page3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(270, 394, 101, 31));
        label_15->setFont(font1);
        label_14 = new QLabel(page3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(270, 484, 100, 31));
        label_14->setFont(font1);
        lineEdit_Location4 = new QLineEdit(page3);
        lineEdit_Location4->setObjectName(QString::fromUtf8("lineEdit_Location4"));
        lineEdit_Location4->setGeometry(QRect(410, 646, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Location4->sizePolicy().hasHeightForWidth());
        lineEdit_Location4->setSizePolicy(sizePolicy);
        lineEdit_Location4->setMinimumSize(QSize(160, 40));
        lineEdit_Location4->setMaximumSize(QSize(160, 40));
        lineEdit_Location4->setStyleSheet(QString::fromUtf8("color: #000000;"));
        label_8 = new QLabel(page3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(740, 124, 151, 31));
        label_8->setFont(font1);
        label_12 = new QLabel(page3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(740, 484, 100, 31));
        label_12->setFont(font1);
        label_7 = new QLabel(page3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 124, 100, 31));
        label_7->setFont(font1);
        lineEdit_Location3 = new QLineEdit(page3);
        lineEdit_Location3->setObjectName(QString::fromUtf8("lineEdit_Location3"));
        lineEdit_Location3->setGeometry(QRect(410, 560, 160, 40));
        sizePolicy.setHeightForWidth(lineEdit_Location3->sizePolicy().hasHeightForWidth());
        lineEdit_Location3->setSizePolicy(sizePolicy);
        lineEdit_Location3->setMinimumSize(QSize(160, 40));
        lineEdit_Location3->setMaximumSize(QSize(160, 40));
        lineEdit_Location3->setStyleSheet(QString::fromUtf8("color: #000000;"));
        btn_cleartext = new QPushButton(page3);
        btn_cleartext->setObjectName(QString::fromUtf8("btn_cleartext"));
        btn_cleartext->setGeometry(QRect(760, 750, 100, 50));
        sizePolicy.setHeightForWidth(btn_cleartext->sizePolicy().hasHeightForWidth());
        btn_cleartext->setSizePolicy(sizePolicy);
        btn_cleartext->setMinimumSize(QSize(100, 50));
        btn_cleartext->setMaximumSize(QSize(100, 50));
        btn_cleartext->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 14pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;color: rgb(0, 0, 0);}\n"
"QPushButton:pressed{background-color:#ff855c;border-style: inset;"));
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        label_4 = new QLabel(page4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 260, 401, 191));
        label_4->setFont(font);
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QString::fromUtf8("page5"));
        label_3 = new QLabel(page5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 260, 401, 191));
        label_3->setFont(font);
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QString::fromUtf8("page6"));
        label_2 = new QLabel(page6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(560, 280, 401, 191));
        label_2->setFont(font);
        stackedWidget->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName(QString::fromUtf8("page7"));
        label = new QLabel(page7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(670, 20, 351, 161));
        QFont font2;
        font2.setPointSize(28);
        label->setFont(font2);
        btn_AddAcount = new QPushButton(page7);
        btn_AddAcount->setObjectName(QString::fromUtf8("btn_AddAcount"));
        btn_AddAcount->setGeometry(QRect(670, 330, 201, 71));
        QFont font3;
        font3.setPointSize(17);
        btn_AddAcount->setFont(font3);
        btn_AddAcount->setStyleSheet(QString::fromUtf8("background:rgb(21, 112, 165)\n"
""));
        label_21 = new QLabel(page7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(740, 580, 81, 111));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Agency FB"));
        font4.setPointSize(26);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_21->setFont(font4);
        label_21->setStyleSheet(QString::fromUtf8("font: 26pt \"Agency FB\";\n"
"color: white;\n"
""));
        lineEdit_ip = new QLineEdit(page7);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(900, 410, 171, 61));
        lineEdit_ip->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        pushButton = new QPushButton(page7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(670, 410, 201, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(21, 112, 165);\n"
"font: 15pt \"Agency FB\";"));
        pushButton_map = new QPushButton(page7);
        pushButton_map->setObjectName(QString::fromUtf8("pushButton_map"));
        pushButton_map->setGeometry(QRect(670, 490, 201, 61));
        pushButton_map->setStyleSheet(QString::fromUtf8("background:rgb(21, 112, 165);\n"
"font: 15pt \"Agency FB\";"));
        lineEdit_mapurl = new QLineEdit(page7);
        lineEdit_mapurl->setObjectName(QString::fromUtf8("lineEdit_mapurl"));
        lineEdit_mapurl->setGeometry(QRect(900, 490, 391, 61));
        lineEdit_mapurl->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        stackedWidget->addWidget(page7);

        gridLayout_2->addWidget(widgetMain, 0, 0, 1, 1);


        retranslateUi(UIDemo18);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UIDemo18);
    } // setupUi

    void retranslateUi(QWidget *UIDemo18)
    {
        UIDemo18->setWindowTitle(QCoreApplication::translate("UIDemo18", "Form", nullptr));
        btnReturn->setText(QString());
        rili->setText(QString());
        labTitle->setText(QCoreApplication::translate("UIDemo18", "0", nullptr));
        help->setText(QString());
        btnMsg->setText(QString());
        btnQuit->setText(QString());
        whether->setText(QString());
        btn_Product->setText(QString());
        btn_Map->setText(QString());
        btn_Settings->setText(QString());
        btn_Research->setText(QString());
        btn_Info->setText(QString());
        btn_Analysis->setText(QString());
        btn_QGIS->setText(QString());
        label_6->setText(QString());
        label_5->setText(QCoreApplication::translate("UIDemo18", "\346\241\243\346\241\210\350\256\260\345\275\225", nullptr));
        btn_AddFlower->setText(QCoreApplication::translate("UIDemo18", "\346\267\273\345\212\240", nullptr));
        label_19->setText(QCoreApplication::translate("UIDemo18", "\344\275\215\347\275\2564\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("UIDemo18", "\345\244\207\346\263\250\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("UIDemo18", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("UIDemo18", "\345\215\225\346\240\252\346\210\220\346\234\254\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("UIDemo18", "\345\206\234\350\265\204\357\274\232", nullptr));
        label_18->setText(QCoreApplication::translate("UIDemo18", "\345\206\234\344\272\213\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("UIDemo18", "\350\201\224\347\263\273\344\272\272\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("UIDemo18", "\347\247\215\346\244\215\345\215\225\344\275\215\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("UIDemo18", "\344\275\215\347\275\2563\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("UIDemo18", "\344\275\215\347\275\2561\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("UIDemo18", "\344\275\215\347\275\2562\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("UIDemo18", "\347\247\215\346\244\215\346\227\245\346\234\237\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("UIDemo18", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("UIDemo18", "\350\212\261\347\247\215\357\274\232", nullptr));
        btn_cleartext->setText(QCoreApplication::translate("UIDemo18", "\346\270\205\347\251\272", nullptr));
        label_4->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("UIDemo18", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btn_AddAcount->setText(QCoreApplication::translate("UIDemo18", "\346\267\273\345\212\240\350\264\246\346\210\267", nullptr));
        label_21->setText(QCoreApplication::translate("UIDemo18", "SCSE", nullptr));
        pushButton->setText(QCoreApplication::translate("UIDemo18", "\350\256\276\347\275\256\346\226\207\344\273\266\344\274\240\350\276\223IP", nullptr));
        pushButton_map->setText(QCoreApplication::translate("UIDemo18", "\350\256\276\347\275\256\345\234\260\347\220\206\347\256\241\347\220\206\350\267\257\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UIDemo18: public Ui_UIDemo18 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UIDEMO18_H
