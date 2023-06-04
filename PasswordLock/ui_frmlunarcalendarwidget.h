/********************************************************************************
** Form generated from reading UI file 'frmlunarcalendarwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMLUNARCALENDARWIDGET_H
#define UI_FRMLUNARCALENDARWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "lunarcalendarwidget.h"

QT_BEGIN_NAMESPACE

class Ui_frmLunarCalendarWidget
{
public:
    QVBoxLayout *verticalLayout;
    LunarCalendarWidget *lunarCalendarWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labCalendarStyle;
    QComboBox *cboxCalendarStyle;
    QLabel *labSelectType;
    QComboBox *cboxSelectType;
    QLabel *labWeekNameFormat;
    QComboBox *cboxWeekNameFormat;
    QCheckBox *ckShowLunar;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *frmLunarCalendarWidget)
    {
        if (frmLunarCalendarWidget->objectName().isEmpty())
            frmLunarCalendarWidget->setObjectName(QString::fromUtf8("frmLunarCalendarWidget"));
        frmLunarCalendarWidget->resize(647, 500);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        frmLunarCalendarWidget->setWindowIcon(icon);
        frmLunarCalendarWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\245\267\344\275\223\";"));
        verticalLayout = new QVBoxLayout(frmLunarCalendarWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lunarCalendarWidget = new LunarCalendarWidget(frmLunarCalendarWidget);
        lunarCalendarWidget->setObjectName(QString::fromUtf8("lunarCalendarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lunarCalendarWidget->sizePolicy().hasHeightForWidth());
        lunarCalendarWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(lunarCalendarWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labCalendarStyle = new QLabel(frmLunarCalendarWidget);
        labCalendarStyle->setObjectName(QString::fromUtf8("labCalendarStyle"));

        horizontalLayout->addWidget(labCalendarStyle);

        cboxCalendarStyle = new QComboBox(frmLunarCalendarWidget);
        cboxCalendarStyle->addItem(QString());
        cboxCalendarStyle->setObjectName(QString::fromUtf8("cboxCalendarStyle"));
        cboxCalendarStyle->setMinimumSize(QSize(90, 0));
        cboxCalendarStyle->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));

        horizontalLayout->addWidget(cboxCalendarStyle);

        labSelectType = new QLabel(frmLunarCalendarWidget);
        labSelectType->setObjectName(QString::fromUtf8("labSelectType"));

        horizontalLayout->addWidget(labSelectType);

        cboxSelectType = new QComboBox(frmLunarCalendarWidget);
        cboxSelectType->addItem(QString());
        cboxSelectType->addItem(QString());
        cboxSelectType->addItem(QString());
        cboxSelectType->addItem(QString());
        cboxSelectType->setObjectName(QString::fromUtf8("cboxSelectType"));
        cboxSelectType->setMinimumSize(QSize(90, 0));
        cboxSelectType->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));

        horizontalLayout->addWidget(cboxSelectType);

        labWeekNameFormat = new QLabel(frmLunarCalendarWidget);
        labWeekNameFormat->setObjectName(QString::fromUtf8("labWeekNameFormat"));

        horizontalLayout->addWidget(labWeekNameFormat);

        cboxWeekNameFormat = new QComboBox(frmLunarCalendarWidget);
        cboxWeekNameFormat->addItem(QString());
        cboxWeekNameFormat->addItem(QString());
        cboxWeekNameFormat->addItem(QString());
        cboxWeekNameFormat->addItem(QString());
        cboxWeekNameFormat->setObjectName(QString::fromUtf8("cboxWeekNameFormat"));
        cboxWeekNameFormat->setMinimumSize(QSize(90, 0));
        cboxWeekNameFormat->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"   "));

        horizontalLayout->addWidget(cboxWeekNameFormat);

        ckShowLunar = new QCheckBox(frmLunarCalendarWidget);
        ckShowLunar->setObjectName(QString::fromUtf8("ckShowLunar"));
        ckShowLunar->setChecked(true);

        horizontalLayout->addWidget(ckShowLunar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(frmLunarCalendarWidget);

        QMetaObject::connectSlotsByName(frmLunarCalendarWidget);
    } // setupUi

    void retranslateUi(QWidget *frmLunarCalendarWidget)
    {
        frmLunarCalendarWidget->setWindowTitle(QCoreApplication::translate("frmLunarCalendarWidget", "Form", nullptr));
        labCalendarStyle->setText(QCoreApplication::translate("frmLunarCalendarWidget", "\346\225\264\344\275\223\346\240\267\345\274\217", nullptr));
        cboxCalendarStyle->setItemText(0, QCoreApplication::translate("frmLunarCalendarWidget", "\347\272\242\350\211\262\351\243\216\346\240\274", nullptr));

        labSelectType->setText(QCoreApplication::translate("frmLunarCalendarWidget", "\351\200\211\344\270\255\346\240\267\345\274\217", nullptr));
        cboxSelectType->setItemText(0, QCoreApplication::translate("frmLunarCalendarWidget", "\347\237\251\345\275\242\350\203\214\346\231\257", nullptr));
        cboxSelectType->setItemText(1, QCoreApplication::translate("frmLunarCalendarWidget", "\345\234\206\345\275\242\350\203\214\346\231\257", nullptr));
        cboxSelectType->setItemText(2, QCoreApplication::translate("frmLunarCalendarWidget", "\350\247\222\346\240\207\350\203\214\346\231\257", nullptr));
        cboxSelectType->setItemText(3, QCoreApplication::translate("frmLunarCalendarWidget", "\345\233\276\347\211\207\350\203\214\346\231\257", nullptr));

        labWeekNameFormat->setText(QCoreApplication::translate("frmLunarCalendarWidget", "\346\230\237\346\234\237\346\240\274\345\274\217", nullptr));
        cboxWeekNameFormat->setItemText(0, QCoreApplication::translate("frmLunarCalendarWidget", "\347\237\255\345\220\215\347\247\260", nullptr));
        cboxWeekNameFormat->setItemText(1, QCoreApplication::translate("frmLunarCalendarWidget", "\346\231\256\351\200\232\345\220\215\347\247\260", nullptr));
        cboxWeekNameFormat->setItemText(2, QCoreApplication::translate("frmLunarCalendarWidget", "\351\225\277\345\220\215\347\247\260", nullptr));
        cboxWeekNameFormat->setItemText(3, QCoreApplication::translate("frmLunarCalendarWidget", "\350\213\261\346\226\207\345\220\215\347\247\260", nullptr));

        ckShowLunar->setText(QCoreApplication::translate("frmLunarCalendarWidget", "\346\230\276\347\244\272\345\206\234\345\216\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmLunarCalendarWidget: public Ui_frmLunarCalendarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMLUNARCALENDARWIDGET_H
