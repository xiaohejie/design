/********************************************************************************
** Form generated from reading UI file 'whetherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHETHERWINDOW_H
#define UI_WHETHERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WhetherWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *updateTime;
    QLineEdit *airCondition;
    QLineEdit *highestTemp;
    QLineEdit *whether;
    QLineEdit *windPower;
    QLineEdit *winds;
    QLineEdit *windVector;
    QLabel *label_Title;
    QLabel *label_Area;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Weather;
    QLabel *label_HighestTemp;
    QLabel *label_LowestTemp;
    QLabel *label_CurrentTemp;
    QLabel *label_Winds;
    QLabel *label_WindVector;
    QLabel *label_WindPower;
    QLabel *label_AirCondition;
    QLabel *label_UpdateTime;
    QLineEdit *currentTemp;
    QLineEdit *lowestTemp;
    QPushButton *queryBtn;
    QComboBox *cityComboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WhetherWindow)
    {
        if (WhetherWindow->objectName().isEmpty())
            WhetherWindow->setObjectName(QString::fromUtf8("WhetherWindow"));
        WhetherWindow->resize(408, 596);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        WhetherWindow->setWindowIcon(icon);
        centralwidget = new QWidget(WhetherWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        updateTime = new QLineEdit(centralwidget);
        updateTime->setObjectName(QString::fromUtf8("updateTime"));
        updateTime->setGeometry(QRect(142, 500, 220, 30));
        airCondition = new QLineEdit(centralwidget);
        airCondition->setObjectName(QString::fromUtf8("airCondition"));
        airCondition->setGeometry(QRect(142, 453, 220, 30));
        airCondition->setMinimumSize(QSize(0, 30));
        highestTemp = new QLineEdit(centralwidget);
        highestTemp->setObjectName(QString::fromUtf8("highestTemp"));
        highestTemp->setGeometry(QRect(142, 170, 220, 30));
        highestTemp->setMinimumSize(QSize(0, 30));
        whether = new QLineEdit(centralwidget);
        whether->setObjectName(QString::fromUtf8("whether"));
        whether->setGeometry(QRect(142, 122, 220, 30));
        whether->setMinimumSize(QSize(0, 30));
        windPower = new QLineEdit(centralwidget);
        windPower->setObjectName(QString::fromUtf8("windPower"));
        windPower->setGeometry(QRect(142, 406, 220, 30));
        windPower->setMinimumSize(QSize(0, 30));
        winds = new QLineEdit(centralwidget);
        winds->setObjectName(QString::fromUtf8("winds"));
        winds->setGeometry(QRect(142, 311, 220, 30));
        winds->setMinimumSize(QSize(0, 30));
        windVector = new QLineEdit(centralwidget);
        windVector->setObjectName(QString::fromUtf8("windVector"));
        windVector->setGeometry(QRect(142, 359, 220, 30));
        windVector->setMinimumSize(QSize(0, 30));
        label_Title = new QLabel(centralwidget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(70, 10, 301, 31));
        label_Area = new QLabel(centralwidget);
        label_Area->setObjectName(QString::fromUtf8("label_Area"));
        label_Area->setGeometry(QRect(70, 80, 51, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(36, 121, 101, 421));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Weather = new QLabel(layoutWidget);
        label_Weather->setObjectName(QString::fromUtf8("label_Weather"));

        verticalLayout->addWidget(label_Weather);

        label_HighestTemp = new QLabel(layoutWidget);
        label_HighestTemp->setObjectName(QString::fromUtf8("label_HighestTemp"));

        verticalLayout->addWidget(label_HighestTemp);

        label_LowestTemp = new QLabel(layoutWidget);
        label_LowestTemp->setObjectName(QString::fromUtf8("label_LowestTemp"));

        verticalLayout->addWidget(label_LowestTemp);

        label_CurrentTemp = new QLabel(layoutWidget);
        label_CurrentTemp->setObjectName(QString::fromUtf8("label_CurrentTemp"));

        verticalLayout->addWidget(label_CurrentTemp);

        label_Winds = new QLabel(layoutWidget);
        label_Winds->setObjectName(QString::fromUtf8("label_Winds"));

        verticalLayout->addWidget(label_Winds);

        label_WindVector = new QLabel(layoutWidget);
        label_WindVector->setObjectName(QString::fromUtf8("label_WindVector"));

        verticalLayout->addWidget(label_WindVector);

        label_WindPower = new QLabel(layoutWidget);
        label_WindPower->setObjectName(QString::fromUtf8("label_WindPower"));

        verticalLayout->addWidget(label_WindPower);

        label_AirCondition = new QLabel(layoutWidget);
        label_AirCondition->setObjectName(QString::fromUtf8("label_AirCondition"));

        verticalLayout->addWidget(label_AirCondition);

        label_UpdateTime = new QLabel(layoutWidget);
        label_UpdateTime->setObjectName(QString::fromUtf8("label_UpdateTime"));

        verticalLayout->addWidget(label_UpdateTime);

        currentTemp = new QLineEdit(centralwidget);
        currentTemp->setObjectName(QString::fromUtf8("currentTemp"));
        currentTemp->setGeometry(QRect(142, 264, 220, 30));
        currentTemp->setMinimumSize(QSize(0, 30));
        lowestTemp = new QLineEdit(centralwidget);
        lowestTemp->setObjectName(QString::fromUtf8("lowestTemp"));
        lowestTemp->setGeometry(QRect(142, 217, 220, 30));
        lowestTemp->setMinimumSize(QSize(0, 30));
        queryBtn = new QPushButton(centralwidget);
        queryBtn->setObjectName(QString::fromUtf8("queryBtn"));
        queryBtn->setGeometry(QRect(270, 70, 91, 31));
        cityComboBox = new QComboBox(centralwidget);
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->addItem(QString());
        cityComboBox->setObjectName(QString::fromUtf8("cityComboBox"));
        cityComboBox->setGeometry(QRect(150, 70, 111, 31));
        WhetherWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WhetherWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 408, 26));
        WhetherWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WhetherWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WhetherWindow->setStatusBar(statusbar);

        retranslateUi(WhetherWindow);

        QMetaObject::connectSlotsByName(WhetherWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WhetherWindow)
    {
        WhetherWindow->setWindowTitle(QCoreApplication::translate("WhetherWindow", "WhetherWindow", nullptr));
        updateTime->setText(QString());
        airCondition->setText(QString());
        windPower->setText(QString());
        label_Title->setText(QCoreApplication::translate("WhetherWindow", "\350\212\261\345\215\211\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\345\244\251\346\260\224\345\212\251\346\211\213\342\200\224\342\200\224\345\276\256\347\211\271", nullptr));
        label_Area->setText(QCoreApplication::translate("WhetherWindow", "\345\234\260\345\214\272\357\274\232", nullptr));
        label_Weather->setText(QCoreApplication::translate("WhetherWindow", "\345\244\251\346\260\224\347\212\266\345\206\265\357\274\232", nullptr));
        label_HighestTemp->setText(QCoreApplication::translate("WhetherWindow", "\346\234\200\351\253\230\346\270\251\345\272\246\357\274\232", nullptr));
        label_LowestTemp->setText(QCoreApplication::translate("WhetherWindow", "\346\234\200\344\275\216\346\270\251\345\272\246\357\274\232", nullptr));
        label_CurrentTemp->setText(QCoreApplication::translate("WhetherWindow", "\347\216\260\345\234\250\346\270\251\345\272\246\357\274\232", nullptr));
        label_Winds->setText(QCoreApplication::translate("WhetherWindow", "\345\210\256\351\243\216\346\203\205\345\206\265\357\274\232", nullptr));
        label_WindVector->setText(QCoreApplication::translate("WhetherWindow", "\351\243\216\345\220\221\357\274\232", nullptr));
        label_WindPower->setText(QCoreApplication::translate("WhetherWindow", "\351\243\216\345\212\233\357\274\232", nullptr));
        label_AirCondition->setText(QCoreApplication::translate("WhetherWindow", "\347\251\272\346\260\224\350\264\250\351\207\217\357\274\232", nullptr));
        label_UpdateTime->setText(QCoreApplication::translate("WhetherWindow", "\346\233\264\346\226\260\346\227\266\351\227\264\357\274\232", nullptr));
        queryBtn->setText(QCoreApplication::translate("WhetherWindow", "\346\237\245\350\257\242", nullptr));
        cityComboBox->setItemText(0, QCoreApplication::translate("WhetherWindow", "\346\255\246\346\261\211", nullptr));
        cityComboBox->setItemText(1, QCoreApplication::translate("WhetherWindow", "\351\273\204\345\206\210", nullptr));
        cityComboBox->setItemText(2, QCoreApplication::translate("WhetherWindow", "\350\215\206\345\267\236", nullptr));
        cityComboBox->setItemText(3, QCoreApplication::translate("WhetherWindow", "\345\256\234\346\230\214", nullptr));
        cityComboBox->setItemText(4, QCoreApplication::translate("WhetherWindow", "\346\201\251\346\226\275", nullptr));
        cityComboBox->setItemText(5, QCoreApplication::translate("WhetherWindow", "\345\215\201\345\240\260", nullptr));
        cityComboBox->setItemText(6, QCoreApplication::translate("WhetherWindow", "\347\245\236\345\206\234\346\236\266", nullptr));
        cityComboBox->setItemText(7, QCoreApplication::translate("WhetherWindow", "\351\232\217\345\267\236", nullptr));
        cityComboBox->setItemText(8, QCoreApplication::translate("WhetherWindow", "\350\215\206\351\227\250", nullptr));
        cityComboBox->setItemText(9, QCoreApplication::translate("WhetherWindow", "\345\244\251\351\227\250", nullptr));
        cityComboBox->setItemText(10, QCoreApplication::translate("WhetherWindow", "\344\273\231\346\241\203", nullptr));
        cityComboBox->setItemText(11, QCoreApplication::translate("WhetherWindow", "\346\275\234\346\261\237", nullptr));
        cityComboBox->setItemText(12, QCoreApplication::translate("WhetherWindow", "\350\245\204\351\230\263", nullptr));
        cityComboBox->setItemText(13, QCoreApplication::translate("WhetherWindow", "\351\204\202\345\267\236", nullptr));
        cityComboBox->setItemText(14, QCoreApplication::translate("WhetherWindow", "\345\255\235\346\204\237", nullptr));
        cityComboBox->setItemText(15, QCoreApplication::translate("WhetherWindow", "\351\273\204\347\237\263", nullptr));
        cityComboBox->setItemText(16, QCoreApplication::translate("WhetherWindow", "\345\222\270\345\256\201", nullptr));
        cityComboBox->setItemText(17, QCoreApplication::translate("WhetherWindow", "\345\214\227\344\272\254", nullptr));
        cityComboBox->setItemText(18, QCoreApplication::translate("WhetherWindow", "\344\270\212\346\265\267", nullptr));
        cityComboBox->setItemText(19, QCoreApplication::translate("WhetherWindow", "\345\244\251\346\264\245", nullptr));
        cityComboBox->setItemText(20, QCoreApplication::translate("WhetherWindow", "\351\207\215\345\272\206", nullptr));
        cityComboBox->setItemText(21, QCoreApplication::translate("WhetherWindow", "\345\223\210\345\260\224\346\273\250", nullptr));
        cityComboBox->setItemText(22, QCoreApplication::translate("WhetherWindow", "\351\225\277\346\230\245", nullptr));
        cityComboBox->setItemText(23, QCoreApplication::translate("WhetherWindow", "\346\262\210\351\230\263", nullptr));
        cityComboBox->setItemText(24, QCoreApplication::translate("WhetherWindow", "\345\221\274\345\222\214\346\265\251\347\211\271", nullptr));
        cityComboBox->setItemText(25, QCoreApplication::translate("WhetherWindow", "\347\237\263\345\256\266\345\272\204", nullptr));
        cityComboBox->setItemText(26, QCoreApplication::translate("WhetherWindow", "\345\244\252\345\216\237", nullptr));
        cityComboBox->setItemText(27, QCoreApplication::translate("WhetherWindow", "\350\245\277\345\256\211", nullptr));
        cityComboBox->setItemText(28, QCoreApplication::translate("WhetherWindow", "\346\265\216\345\215\227", nullptr));
        cityComboBox->setItemText(29, QCoreApplication::translate("WhetherWindow", "\344\271\214\351\262\201\346\234\250\351\275\220", nullptr));
        cityComboBox->setItemText(30, QCoreApplication::translate("WhetherWindow", "\346\213\211\350\220\250", nullptr));
        cityComboBox->setItemText(31, QCoreApplication::translate("WhetherWindow", "\350\245\277\345\256\201", nullptr));
        cityComboBox->setItemText(32, QCoreApplication::translate("WhetherWindow", "\345\205\260\345\267\236", nullptr));
        cityComboBox->setItemText(33, QCoreApplication::translate("WhetherWindow", "\351\223\266\345\267\235", nullptr));
        cityComboBox->setItemText(34, QCoreApplication::translate("WhetherWindow", "\351\203\221\345\267\236", nullptr));
        cityComboBox->setItemText(35, QCoreApplication::translate("WhetherWindow", "\345\215\227\344\272\254", nullptr));
        cityComboBox->setItemText(36, QCoreApplication::translate("WhetherWindow", "\346\235\255\345\267\236", nullptr));
        cityComboBox->setItemText(37, QCoreApplication::translate("WhetherWindow", "\345\220\210\350\202\245", nullptr));
        cityComboBox->setItemText(38, QCoreApplication::translate("WhetherWindow", "\347\246\217\345\267\236", nullptr));
        cityComboBox->setItemText(39, QCoreApplication::translate("WhetherWindow", "\345\215\227\346\230\214", nullptr));
        cityComboBox->setItemText(40, QCoreApplication::translate("WhetherWindow", "\351\225\277\346\262\231", nullptr));
        cityComboBox->setItemText(41, QCoreApplication::translate("WhetherWindow", "\350\264\265\351\230\263", nullptr));
        cityComboBox->setItemText(42, QCoreApplication::translate("WhetherWindow", "\346\210\220\351\203\275", nullptr));
        cityComboBox->setItemText(43, QCoreApplication::translate("WhetherWindow", "\345\271\277\345\267\236", nullptr));
        cityComboBox->setItemText(44, QCoreApplication::translate("WhetherWindow", "\346\230\206\346\230\216", nullptr));
        cityComboBox->setItemText(45, QCoreApplication::translate("WhetherWindow", "\345\215\227\345\256\201", nullptr));
        cityComboBox->setItemText(46, QCoreApplication::translate("WhetherWindow", "\346\265\267\345\217\243", nullptr));
        cityComboBox->setItemText(47, QCoreApplication::translate("WhetherWindow", "\351\246\231\346\270\257", nullptr));
        cityComboBox->setItemText(48, QCoreApplication::translate("WhetherWindow", "\346\276\263\351\227\250", nullptr));
        cityComboBox->setItemText(49, QCoreApplication::translate("WhetherWindow", "\345\217\260\345\214\227\345\216\277", nullptr));

    } // retranslateUi

};

namespace Ui {
    class WhetherWindow: public Ui_WhetherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHETHERWINDOW_H
