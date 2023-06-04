/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QPushButton *btn_confirm;
    QPushButton *btn_reset;
    QWidget *register_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QComboBox *comboBox;
    QLineEdit *lineEdit_ID;
    QLabel *label_9;
    QLineEdit *lineEdit_PWord;
    QLabel *label_8;
    QLineEdit *lineEdit_ReplyPWord;
    QLabel *label_11;
    QLabel *label_6;

    void setupUi(QWidget *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(400, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegisterWindow->sizePolicy().hasHeightForWidth());
        RegisterWindow->setSizePolicy(sizePolicy);
        RegisterWindow->setMinimumSize(QSize(400, 380));
        RegisterWindow->setMaximumSize(QSize(400, 380));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        RegisterWindow->setWindowIcon(icon);
        btn_confirm = new QPushButton(RegisterWindow);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(90, 310, 80, 25));
        sizePolicy.setHeightForWidth(btn_confirm->sizePolicy().hasHeightForWidth());
        btn_confirm->setSizePolicy(sizePolicy);
        btn_confirm->setMinimumSize(QSize(80, 25));
        btn_confirm->setMaximumSize(QSize(80, 25));
        btn_confirm->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        btn_reset = new QPushButton(RegisterWindow);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(250, 310, 80, 25));
        sizePolicy.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy);
        btn_reset->setMinimumSize(QSize(80, 25));
        btn_reset->setMaximumSize(QSize(80, 25));
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);border:1px groove gray;border-radius:4px;font: 20 12pt \"\346\245\267\344\275\223\";padding:1px 4px;border-style: outset;}\n"
"\n"
"\n"
"                                       \n"
"QPushButton:hover{background-color:#79ff50; color: black;}\n"
"                                    \n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;"));
        register_2 = new QWidget(RegisterWindow);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setGeometry(QRect(80, 70, 121, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(register_2->sizePolicy().hasHeightForWidth());
        register_2->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        register_2->setPalette(palette);
        verticalLayout = new QVBoxLayout(register_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_10 = new QLabel(register_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(label_10);

        comboBox = new QComboBox(RegisterWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(200, 140, 111, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        lineEdit_ID = new QLineEdit(RegisterWindow);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(200, 90, 111, 20));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        label_9 = new QLabel(RegisterWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 180, 81, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        lineEdit_PWord = new QLineEdit(RegisterWindow);
        lineEdit_PWord->setObjectName(QString::fromUtf8("lineEdit_PWord"));
        lineEdit_PWord->setGeometry(QRect(200, 190, 111, 20));
        lineEdit_PWord->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        lineEdit_PWord->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(RegisterWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 10, 71, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"\346\245\267\344\275\223\";"));
        lineEdit_ReplyPWord = new QLineEdit(RegisterWindow);
        lineEdit_ReplyPWord->setObjectName(QString::fromUtf8("lineEdit_ReplyPWord"));
        lineEdit_ReplyPWord->setGeometry(QRect(200, 230, 111, 20));
        lineEdit_ReplyPWord->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));
        lineEdit_ReplyPWord->setEchoMode(QLineEdit::Password);
        label_11 = new QLabel(RegisterWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(90, 230, 81, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        label_6 = new QLabel(RegisterWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 130, 113, 30));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QWidget *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Form", nullptr));
        btn_confirm->setText(QCoreApplication::translate("RegisterWindow", "\347\241\256\350\256\244", nullptr));
        btn_reset->setText(QCoreApplication::translate("RegisterWindow", "\351\207\215\347\275\256", nullptr));
        label_10->setText(QCoreApplication::translate("RegisterWindow", "\345\267\245    \345\217\267\357\274\232", nullptr));
        label_9->setText(QCoreApplication::translate("RegisterWindow", "\345\257\206    \347\240\201\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterWindow", "\346\263\250\345\206\214", nullptr));
        label_11->setText(QCoreApplication::translate("RegisterWindow", "\351\207\215\345\244\215\345\257\206\347\240\201\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWindow", " \346\223\215\344\275\234\344\272\272\345\221\230\347\261\273\345\210\253\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
