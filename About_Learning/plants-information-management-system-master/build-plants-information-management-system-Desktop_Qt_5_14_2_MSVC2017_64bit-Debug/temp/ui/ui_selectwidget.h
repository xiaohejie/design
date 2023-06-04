/********************************************************************************
** Form generated from reading UI file 'selectwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIDGET_H
#define UI_SELECTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectWidget
{
public:
    QComboBox *feiliao;
    QComboBox *growth;
    QLabel *label_6;
    QCheckBox *checktime;
    QLabel *label_9;
    QComboBox *phone;
    QLabel *label_11;
    QComboBox *flowername;
    QLabel *label_12;
    QCheckBox *checkcompany;
    QCheckBox *checkid;
    QLabel *label_7;
    QComboBox *thing;
    QLabel *label_2;
    QCheckBox *checkconnect;
    QLabel *label_18;
    QComboBox *id;
    QRadioButton *shengxu;
    QCheckBox *checkfeiliao;
    QLabel *label;
    QCheckBox *checkothers;
    QLabel *label_8;
    QTableView *tableView;
    QComboBox *money;
    QRadioButton *jiangxu;
    QComboBox *thesort;
    QLabel *label_13;
    QComboBox *water;
    QCheckBox *checkmoney;
    QCheckBox *checkphone;
    QCheckBox *checkwater;
    QLabel *label_15;
    QLabel *label_3;
    QCheckBox *checkBox;
    QComboBox *operater;
    QCheckBox *checkoperator;
    QLabel *label_10;
    QLabel *label_5;
    QComboBox *num;
    QCheckBox *checkname;
    QComboBox *others;
    QCheckBox *checkgrowth;
    QDateTimeEdit *starttime;
    QComboBox *contacts;
    QLabel *label_16;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_17;
    QCheckBox *checkthing;
    QComboBox *company;
    QCheckBox *checknum;
    QGroupBox *groupBox;
    QPushButton *shouge;
    QPushButton *gengxin;
    QPushButton *del;
    QGroupBox *groupBox_2;
    QPushButton *excelout;
    QPushButton *printpdf;
    QPushButton *printpdf_2;
    QGroupBox *groupBox_3;
    QPushButton *nextitem;
    QPushButton *viewtab;
    QPushButton *firstrecord;
    QPushButton *reset;
    QPushButton *mohuselect;
    QPushButton *lastrecord;
    QPushButton *selectbth;
    QPushButton *preitem;

    void setupUi(QWidget *selectWidget)
    {
        if (selectWidget->objectName().isEmpty())
            selectWidget->setObjectName(QString::fromUtf8("selectWidget"));
        selectWidget->resize(1573, 849);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectWidget->setWindowIcon(icon);
        feiliao = new QComboBox(selectWidget);
        feiliao->addItem(QString());
        feiliao->addItem(QString());
        feiliao->addItem(QString());
        feiliao->addItem(QString());
        feiliao->setObjectName(QString::fromUtf8("feiliao"));
        feiliao->setGeometry(QRect(100, 550, 180, 31));
        feiliao->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        feiliao->setEditable(true);
        growth = new QComboBox(selectWidget);
        growth->addItem(QString());
        growth->addItem(QString());
        growth->addItem(QString());
        growth->addItem(QString());
        growth->addItem(QString());
        growth->addItem(QString());
        growth->addItem(QString());
        growth->setObjectName(QString::fromUtf8("growth"));
        growth->setGeometry(QRect(100, 650, 180, 31));
        growth->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        growth->setEditable(true);
        label_6 = new QLabel(selectWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 300, 91, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        checktime = new QCheckBox(selectWidget);
        checktime->setObjectName(QString::fromUtf8("checktime"));
        checktime->setGeometry(QRect(300, 160, 31, 19));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(8);
        checktime->setFont(font);
        label_9 = new QLabel(selectWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 450, 91, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        phone = new QComboBox(selectWidget);
        phone->addItem(QString());
        phone->addItem(QString());
        phone->addItem(QString());
        phone->addItem(QString());
        phone->addItem(QString());
        phone->addItem(QString());
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(100, 400, 180, 31));
        phone->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        phone->setEditable(true);
        label_11 = new QLabel(selectWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 550, 91, 31));
        label_11->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        flowername = new QComboBox(selectWidget);
        flowername->addItem(QString());
        flowername->addItem(QString());
        flowername->addItem(QString());
        flowername->addItem(QString());
        flowername->addItem(QString());
        flowername->addItem(QString());
        flowername->setObjectName(QString::fromUtf8("flowername"));
        flowername->setGeometry(QRect(100, 100, 180, 31));
        flowername->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        flowername->setEditable(true);
        label_12 = new QLabel(selectWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 600, 91, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        checkcompany = new QCheckBox(selectWidget);
        checkcompany->setObjectName(QString::fromUtf8("checkcompany"));
        checkcompany->setGeometry(QRect(300, 310, 31, 19));
        checkcompany->setFont(font);
        checkid = new QCheckBox(selectWidget);
        checkid->setObjectName(QString::fromUtf8("checkid"));
        checkid->setGeometry(QRect(300, 60, 31, 19));
        checkid->setFont(font);
        label_7 = new QLabel(selectWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 350, 91, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        thing = new QComboBox(selectWidget);
        thing->addItem(QString());
        thing->addItem(QString());
        thing->addItem(QString());
        thing->addItem(QString());
        thing->setObjectName(QString::fromUtf8("thing"));
        thing->setGeometry(QRect(100, 200, 180, 31));
        thing->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        thing->setEditable(true);
        label_2 = new QLabel(selectWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 150, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        checkconnect = new QCheckBox(selectWidget);
        checkconnect->setObjectName(QString::fromUtf8("checkconnect"));
        checkconnect->setGeometry(QRect(300, 360, 31, 19));
        checkconnect->setFont(font);
        label_18 = new QLabel(selectWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(280, 10, 91, 16));
        label_18->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        id = new QComboBox(selectWidget);
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->addItem(QString());
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(100, 50, 180, 31));
        id->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        id->setEditable(true);
        shengxu = new QRadioButton(selectWidget);
        shengxu->setObjectName(QString::fromUtf8("shengxu"));
        shengxu->setGeometry(QRect(219, 810, 91, 19));
        shengxu->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        shengxu->setChecked(true);
        checkfeiliao = new QCheckBox(selectWidget);
        checkfeiliao->setObjectName(QString::fromUtf8("checkfeiliao"));
        checkfeiliao->setGeometry(QRect(300, 560, 31, 19));
        checkfeiliao->setFont(font);
        label = new QLabel(selectWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 50, 91, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        checkothers = new QCheckBox(selectWidget);
        checkothers->setObjectName(QString::fromUtf8("checkothers"));
        checkothers->setGeometry(QRect(300, 710, 31, 19));
        checkothers->setFont(font);
        label_8 = new QLabel(selectWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 400, 91, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        tableView = new QTableView(selectWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(340, 50, 1221, 681));
        money = new QComboBox(selectWidget);
        money->addItem(QString());
        money->addItem(QString());
        money->addItem(QString());
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(100, 250, 180, 31));
        money->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        money->setEditable(true);
        jiangxu = new QRadioButton(selectWidget);
        jiangxu->setObjectName(QString::fromUtf8("jiangxu"));
        jiangxu->setGeometry(QRect(100, 810, 101, 19));
        jiangxu->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        jiangxu->setCheckable(true);
        jiangxu->setChecked(false);
        jiangxu->setAutoRepeat(false);
        thesort = new QComboBox(selectWidget);
        thesort->setObjectName(QString::fromUtf8("thesort"));
        thesort->setGeometry(QRect(100, 750, 180, 31));
        thesort->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        thesort->setEditable(true);
        label_13 = new QLabel(selectWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 650, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        water = new QComboBox(selectWidget);
        water->addItem(QString());
        water->addItem(QString());
        water->addItem(QString());
        water->addItem(QString());
        water->setObjectName(QString::fromUtf8("water"));
        water->setGeometry(QRect(100, 600, 180, 31));
        water->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        water->setEditable(true);
        checkmoney = new QCheckBox(selectWidget);
        checkmoney->setObjectName(QString::fromUtf8("checkmoney"));
        checkmoney->setGeometry(QRect(300, 260, 31, 19));
        checkmoney->setFont(font);
        checkphone = new QCheckBox(selectWidget);
        checkphone->setObjectName(QString::fromUtf8("checkphone"));
        checkphone->setGeometry(QRect(300, 410, 31, 19));
        checkphone->setFont(font);
        checkwater = new QCheckBox(selectWidget);
        checkwater->setObjectName(QString::fromUtf8("checkwater"));
        checkwater->setGeometry(QRect(300, 610, 31, 19));
        checkwater->setFont(font);
        label_15 = new QLabel(selectWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 700, 91, 31));
        label_15->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        label_3 = new QLabel(selectWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 72, 15));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        checkBox = new QCheckBox(selectWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(210, 160, 81, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(1);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("font: 8 8pt \"\346\245\267\344\275\223\";\n"
""));
        operater = new QComboBox(selectWidget);
        operater->addItem(QString());
        operater->addItem(QString());
        operater->addItem(QString());
        operater->addItem(QString());
        operater->addItem(QString());
        operater->addItem(QString());
        operater->setObjectName(QString::fromUtf8("operater"));
        operater->setGeometry(QRect(100, 500, 180, 31));
        operater->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        operater->setEditable(true);
        checkoperator = new QCheckBox(selectWidget);
        checkoperator->setObjectName(QString::fromUtf8("checkoperator"));
        checkoperator->setGeometry(QRect(300, 510, 31, 19));
        checkoperator->setFont(font);
        label_10 = new QLabel(selectWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 500, 91, 31));
        label_10->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        label_5 = new QLabel(selectWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 250, 91, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        num = new QComboBox(selectWidget);
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->addItem(QString());
        num->setObjectName(QString::fromUtf8("num"));
        num->setGeometry(QRect(100, 450, 180, 31));
        num->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        num->setEditable(true);
        checkname = new QCheckBox(selectWidget);
        checkname->setObjectName(QString::fromUtf8("checkname"));
        checkname->setGeometry(QRect(300, 110, 31, 19));
        checkname->setFont(font);
        others = new QComboBox(selectWidget);
        others->setObjectName(QString::fromUtf8("others"));
        others->setGeometry(QRect(100, 700, 180, 31));
        others->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        others->setEditable(true);
        checkgrowth = new QCheckBox(selectWidget);
        checkgrowth->setObjectName(QString::fromUtf8("checkgrowth"));
        checkgrowth->setGeometry(QRect(300, 660, 31, 19));
        checkgrowth->setFont(font);
        starttime = new QDateTimeEdit(selectWidget);
        starttime->setObjectName(QString::fromUtf8("starttime"));
        starttime->setGeometry(QRect(100, 150, 101, 31));
        starttime->setStyleSheet(QString::fromUtf8(""));
        contacts = new QComboBox(selectWidget);
        contacts->addItem(QString());
        contacts->addItem(QString());
        contacts->addItem(QString());
        contacts->addItem(QString());
        contacts->addItem(QString());
        contacts->addItem(QString());
        contacts->setObjectName(QString::fromUtf8("contacts"));
        contacts->setGeometry(QRect(100, 350, 180, 31));
        contacts->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        contacts->setEditable(true);
        label_16 = new QLabel(selectWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(0, 100, 91, 31));
        label_16->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        label_4 = new QLabel(selectWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 200, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        label_14 = new QLabel(selectWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 750, 91, 31));
        label_14->setStyleSheet(QString::fromUtf8("font: 20 12pt \"\346\245\267\344\275\223\";\n"
""));
        label_17 = new QLabel(selectWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(150, 10, 72, 15));
        label_17->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        checkthing = new QCheckBox(selectWidget);
        checkthing->setObjectName(QString::fromUtf8("checkthing"));
        checkthing->setGeometry(QRect(300, 210, 31, 19));
        checkthing->setFont(font);
        company = new QComboBox(selectWidget);
        company->addItem(QString());
        company->addItem(QString());
        company->addItem(QString());
        company->addItem(QString());
        company->addItem(QString());
        company->setObjectName(QString::fromUtf8("company"));
        company->setGeometry(QRect(100, 300, 180, 31));
        company->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        company->setEditable(true);
        checknum = new QCheckBox(selectWidget);
        checknum->setObjectName(QString::fromUtf8("checknum"));
        checknum->setGeometry(QRect(300, 460, 31, 19));
        checknum->setFont(font);
        groupBox = new QGroupBox(selectWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1160, 750, 391, 91));
        groupBox->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        shouge = new QPushButton(groupBox);
        shouge->setObjectName(QString::fromUtf8("shouge"));
        shouge->setGeometry(QRect(50, 40, 91, 31));
        shouge->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        gengxin = new QPushButton(groupBox);
        gengxin->setObjectName(QString::fromUtf8("gengxin"));
        gengxin->setGeometry(QRect(165, 40, 81, 31));
        gengxin->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        del = new QPushButton(groupBox);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(280, 40, 81, 31));
        del->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        groupBox_2 = new QGroupBox(selectWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(770, 750, 361, 91));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        excelout = new QPushButton(groupBox_2);
        excelout->setObjectName(QString::fromUtf8("excelout"));
        excelout->setGeometry(QRect(10, 40, 93, 28));
        excelout->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        printpdf = new QPushButton(groupBox_2);
        printpdf->setObjectName(QString::fromUtf8("printpdf"));
        printpdf->setGeometry(QRect(130, 40, 93, 28));
        printpdf->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        printpdf_2 = new QPushButton(groupBox_2);
        printpdf_2->setObjectName(QString::fromUtf8("printpdf_2"));
        printpdf_2->setGeometry(QRect(250, 40, 101, 28));
        printpdf_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        groupBox_3 = new QGroupBox(selectWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 740, 421, 101));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        nextitem = new QPushButton(groupBox_3);
        nextitem->setObjectName(QString::fromUtf8("nextitem"));
        nextitem->setGeometry(QRect(310, 70, 92, 28));
        nextitem->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        viewtab = new QPushButton(groupBox_3);
        viewtab->setObjectName(QString::fromUtf8("viewtab"));
        viewtab->setGeometry(QRect(112, 31, 93, 28));
        viewtab->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        firstrecord = new QPushButton(groupBox_3);
        firstrecord->setObjectName(QString::fromUtf8("firstrecord"));
        firstrecord->setGeometry(QRect(211, 31, 93, 28));
        firstrecord->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        reset = new QPushButton(groupBox_3);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(13, 31, 93, 28));
        reset->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        mohuselect = new QPushButton(groupBox_3);
        mohuselect->setObjectName(QString::fromUtf8("mohuselect"));
        mohuselect->setGeometry(QRect(112, 70, 93, 28));
        mohuselect->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        lastrecord = new QPushButton(groupBox_3);
        lastrecord->setObjectName(QString::fromUtf8("lastrecord"));
        lastrecord->setGeometry(QRect(211, 70, 93, 28));
        lastrecord->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        selectbth = new QPushButton(groupBox_3);
        selectbth->setObjectName(QString::fromUtf8("selectbth"));
        selectbth->setGeometry(QRect(13, 70, 93, 28));
        selectbth->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        preitem = new QPushButton(groupBox_3);
        preitem->setObjectName(QString::fromUtf8("preitem"));
        preitem->setGeometry(QRect(310, 31, 92, 28));
        preitem->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));

        retranslateUi(selectWidget);

        QMetaObject::connectSlotsByName(selectWidget);
    } // setupUi

    void retranslateUi(QWidget *selectWidget)
    {
        selectWidget->setWindowTitle(QCoreApplication::translate("selectWidget", "selectWidget", nullptr));
        feiliao->setItemText(0, QString());
        feiliao->setItemText(1, QCoreApplication::translate("selectWidget", "\346\200\245\347\274\272\350\202\245\346\226\231", nullptr));
        feiliao->setItemText(2, QCoreApplication::translate("selectWidget", "\347\274\272\345\260\221\345\260\221\351\207\217\350\202\245\346\226\231", nullptr));
        feiliao->setItemText(3, QCoreApplication::translate("selectWidget", "\350\202\245\346\226\231\346\203\205\345\206\265\346\255\243\345\270\270", nullptr));

        growth->setItemText(0, QString());
        growth->setItemText(1, QCoreApplication::translate("selectWidget", "A", nullptr));
        growth->setItemText(2, QCoreApplication::translate("selectWidget", "B+", nullptr));
        growth->setItemText(3, QCoreApplication::translate("selectWidget", "B", nullptr));
        growth->setItemText(4, QCoreApplication::translate("selectWidget", "C+", nullptr));
        growth->setItemText(5, QCoreApplication::translate("selectWidget", "C", nullptr));
        growth->setItemText(6, QCoreApplication::translate("selectWidget", "D", nullptr));

        label_6->setText(QCoreApplication::translate("selectWidget", " \345\215\225\344\275\215\357\274\232", nullptr));
        checktime->setText(QString());
        label_9->setText(QCoreApplication::translate("selectWidget", " \346\225\260\351\207\217\357\274\232", nullptr));
        phone->setItemText(0, QString());
        phone->setItemText(1, QCoreApplication::translate("selectWidget", "13199988367", nullptr));
        phone->setItemText(2, QCoreApplication::translate("selectWidget", "18654293471", nullptr));
        phone->setItemText(3, QCoreApplication::translate("selectWidget", "15914477918", nullptr));
        phone->setItemText(4, QCoreApplication::translate("selectWidget", "18660628727", nullptr));
        phone->setItemText(5, QCoreApplication::translate("selectWidget", "18711931260", nullptr));

        label_11->setText(QCoreApplication::translate("selectWidget", " \346\243\200\346\265\213\346\203\205\345\206\265\357\274\232", nullptr));
        flowername->setItemText(0, QString());
        flowername->setItemText(1, QCoreApplication::translate("selectWidget", "\351\203\201\351\207\221\351\246\231", nullptr));
        flowername->setItemText(2, QCoreApplication::translate("selectWidget", "\347\216\253\347\221\260", nullptr));
        flowername->setItemText(3, QCoreApplication::translate("selectWidget", "\346\260\264\344\273\231", nullptr));
        flowername->setItemText(4, QCoreApplication::translate("selectWidget", "\345\272\267\344\271\203\351\246\250", nullptr));
        flowername->setItemText(5, QCoreApplication::translate("selectWidget", "\347\231\276\345\220\210", nullptr));

        label_12->setText(QCoreApplication::translate("selectWidget", "\346\243\200\346\265\213\344\275\215\347\275\256\357\274\232", nullptr));
        checkcompany->setText(QString());
        checkid->setText(QString());
        label_7->setText(QCoreApplication::translate("selectWidget", " \350\201\224\347\263\273\344\272\272\357\274\232", nullptr));
        thing->setItemText(0, QString());
        thing->setItemText(1, QCoreApplication::translate("selectWidget", "7", nullptr));
        thing->setItemText(2, QCoreApplication::translate("selectWidget", "8", nullptr));
        thing->setItemText(3, QCoreApplication::translate("selectWidget", "9", nullptr));

        label_2->setText(QCoreApplication::translate("selectWidget", " \346\243\200\346\265\213\346\227\266\351\227\264\357\274\232", nullptr));
        checkconnect->setText(QString());
        label_18->setText(QCoreApplication::translate("selectWidget", "\346\230\257\345\220\246\351\232\220\350\227\217", nullptr));
        id->setItemText(0, QString());
        id->setItemText(1, QCoreApplication::translate("selectWidget", "2", nullptr));
        id->setItemText(2, QCoreApplication::translate("selectWidget", "3", nullptr));
        id->setItemText(3, QCoreApplication::translate("selectWidget", "4", nullptr));
        id->setItemText(4, QCoreApplication::translate("selectWidget", "5", nullptr));
        id->setItemText(5, QCoreApplication::translate("selectWidget", "6", nullptr));
        id->setItemText(6, QCoreApplication::translate("selectWidget", "7", nullptr));
        id->setItemText(7, QCoreApplication::translate("selectWidget", "8", nullptr));
        id->setItemText(8, QCoreApplication::translate("selectWidget", "9", nullptr));

        shengxu->setText(QCoreApplication::translate("selectWidget", "  \345\215\207 \345\272\217", nullptr));
        checkfeiliao->setText(QString());
        label->setText(QCoreApplication::translate("selectWidget", " \347\274\226\345\217\267\357\274\232", nullptr));
        checkothers->setText(QString());
        label_8->setText(QCoreApplication::translate("selectWidget", " \350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", nullptr));
        money->setItemText(0, QString());
        money->setItemText(1, QCoreApplication::translate("selectWidget", "8", nullptr));
        money->setItemText(2, QCoreApplication::translate("selectWidget", "9", nullptr));

        jiangxu->setText(QCoreApplication::translate("selectWidget", "  \351\231\215 \345\272\217", nullptr));
        label_13->setText(QCoreApplication::translate("selectWidget", "\345\244\207\346\263\2501\357\274\232", nullptr));
        water->setItemText(0, QString());
        water->setItemText(1, QCoreApplication::translate("selectWidget", "\346\200\245\347\274\272\346\260\264", nullptr));
        water->setItemText(2, QCoreApplication::translate("selectWidget", "\347\274\272\345\260\221\351\207\217\346\260\264", nullptr));
        water->setItemText(3, QCoreApplication::translate("selectWidget", "\346\265\207\346\260\264\346\203\205\345\206\265\346\255\243\345\270\270", nullptr));

        checkmoney->setText(QString());
        checkphone->setText(QString());
        checkwater->setText(QString());
        label_15->setText(QCoreApplication::translate("selectWidget", " \345\244\207\346\263\2502\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("selectWidget", "\345\255\227\346\256\265\345\220\215", nullptr));
        checkBox->setText(QCoreApplication::translate("selectWidget", "\345\212\240\345\205\245\346\237\245\350\257\242", nullptr));
        operater->setItemText(0, QString());
        operater->setItemText(1, QCoreApplication::translate("selectWidget", "\351\222\261\345\205\211\345\272\234", nullptr));
        operater->setItemText(2, QCoreApplication::translate("selectWidget", "\346\235\216\345\242\237\346\264\252", nullptr));
        operater->setItemText(3, QCoreApplication::translate("selectWidget", "\346\235\216\346\226\227\347\277\274", nullptr));
        operater->setItemText(4, QCoreApplication::translate("selectWidget", "\350\244\232\345\255\272\351\276\231", nullptr));
        operater->setItemText(5, QCoreApplication::translate("selectWidget", "\346\235\216\351\245\257", nullptr));

        checkoperator->setText(QString());
        label_10->setText(QCoreApplication::translate("selectWidget", " \346\223\215\344\275\234\344\272\272\345\221\230\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("selectWidget", "\346\211\200\345\234\250\351\275\277\350\275\256\347\256\261\357\274\232", nullptr));
        num->setItemText(0, QString());
        num->setItemText(1, QCoreApplication::translate("selectWidget", "2", nullptr));
        num->setItemText(2, QCoreApplication::translate("selectWidget", "3", nullptr));
        num->setItemText(3, QCoreApplication::translate("selectWidget", "4", nullptr));
        num->setItemText(4, QCoreApplication::translate("selectWidget", "5", nullptr));
        num->setItemText(5, QCoreApplication::translate("selectWidget", "6", nullptr));
        num->setItemText(6, QCoreApplication::translate("selectWidget", "7", nullptr));
        num->setItemText(7, QCoreApplication::translate("selectWidget", "8", nullptr));
        num->setItemText(8, QCoreApplication::translate("selectWidget", "9", nullptr));

        checkname->setText(QString());
        checkgrowth->setText(QString());
        starttime->setDisplayFormat(QCoreApplication::translate("selectWidget", "yyyy/M/d ", nullptr));
        contacts->setItemText(0, QString());
        contacts->setItemText(1, QCoreApplication::translate("selectWidget", "\346\235\216\346\205\247\351\246\250", nullptr));
        contacts->setItemText(2, QCoreApplication::translate("selectWidget", "\345\274\240\347\221\227\351\233\201", nullptr));
        contacts->setItemText(3, QCoreApplication::translate("selectWidget", "\345\221\250\346\267\221\346\242\201", nullptr));
        contacts->setItemText(4, QCoreApplication::translate("selectWidget", "\345\274\240\344\273\252\350\223\223", nullptr));
        contacts->setItemText(5, QCoreApplication::translate("selectWidget", "\345\215\253\346\267\221\347\276\216", nullptr));

        label_16->setText(QCoreApplication::translate("selectWidget", " \351\275\277\350\275\256\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("selectWidget", " \351\207\207\346\240\267\351\242\221\347\216\207\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("selectWidget", " \346\216\222\345\272\217\345\255\227\346\256\265\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("selectWidget", "\345\255\227\346\256\265\345\200\274", nullptr));
        checkthing->setText(QString());
        company->setItemText(0, QString());
        company->setItemText(1, QCoreApplication::translate("selectWidget", "\347\231\273\346\265\267\344\272\224\345\205\254\345\217\270", nullptr));
        company->setItemText(2, QCoreApplication::translate("selectWidget", "\345\215\232\351\207\216\350\241\241\345\205\254\345\217\270", nullptr));
        company->setItemText(3, QCoreApplication::translate("selectWidget", "\345\206\234\346\242\246\350\200\214\345\206\234\344\270\232\347\224\237\344\272\247\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));
        company->setItemText(4, QCoreApplication::translate("selectWidget", "\347\231\273\346\265\267\350\275\270\345\206\234\344\270\232\347\224\237\344\272\247\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));

        checknum->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("selectWidget", "\347\224\237\344\272\247\347\256\241\347\220\206", nullptr));
        shouge->setText(QCoreApplication::translate("selectWidget", "\346\224\266\345\211\262", nullptr));
        gengxin->setText(QCoreApplication::translate("selectWidget", "\346\233\264\346\226\260", nullptr));
        del->setText(QCoreApplication::translate("selectWidget", "\345\210\240\351\231\244", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("selectWidget", "\346\226\207\344\273\266\347\256\241\347\220\206", nullptr));
        excelout->setText(QCoreApplication::translate("selectWidget", "\345\257\274\345\207\272excel", nullptr));
        printpdf->setText(QCoreApplication::translate("selectWidget", "\345\257\274\345\207\272pdf", nullptr));
        printpdf_2->setText(QCoreApplication::translate("selectWidget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("selectWidget", "\346\237\245\350\257\242\351\235\242\346\235\277", nullptr));
        nextitem->setText(QCoreApplication::translate("selectWidget", "\345\220\216\344\270\200\351\241\271", nullptr));
        viewtab->setText(QCoreApplication::translate("selectWidget", "\346\265\217\350\247\210\345\205\250\350\241\250", nullptr));
        firstrecord->setText(QCoreApplication::translate("selectWidget", "\351\246\226\351\241\271", nullptr));
        reset->setText(QCoreApplication::translate("selectWidget", "\351\207\215\347\275\256", nullptr));
        mohuselect->setText(QCoreApplication::translate("selectWidget", "\346\250\241\347\263\212\346\237\245\350\257\242", nullptr));
        lastrecord->setText(QCoreApplication::translate("selectWidget", "\345\260\276\351\241\271", nullptr));
        selectbth->setText(QCoreApplication::translate("selectWidget", "\347\262\276\347\241\256\346\237\245\350\257\242", nullptr));
        preitem->setText(QCoreApplication::translate("selectWidget", "\345\211\215\344\270\200\351\241\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectWidget: public Ui_selectWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIDGET_H
