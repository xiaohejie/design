/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QListWidget *clientListWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *InfoPushButton;
    QPushButton *DelInfoPB;
    QLabel *label_9;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QPushButton *rizhisave;
    QPushButton *riziclear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(832, 699);
        Widget->setStyleSheet(QString::fromUtf8("background-image: url(:/img/_bkPage.jpg);"));
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(11);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_2->addWidget(label_5);

        clientListWidget = new QListWidget(Widget);
        clientListWidget->setObjectName(QString::fromUtf8("clientListWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\351\232\266\344\271\246"));
        font1.setPointSize(10);
        clientListWidget->setFont(font1);
        clientListWidget->setStyleSheet(QString::fromUtf8("selection-background-color: darkgray;\n"
"color: white;"));

        verticalLayout_2->addWidget(clientListWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_2->addWidget(label_7);

        textEdit_2 = new QTextEdit(Widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMaximumSize(QSize(16777215, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\235\216\346\227\255\347\247\221\346\274\253\347\224\273\344\275\223v1.0"));
        font2.setPointSize(18);
        textEdit_2->setFont(font2);
        textEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"color: white;"));

        verticalLayout_2->addWidget(textEdit_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        InfoPushButton = new QPushButton(Widget);
        InfoPushButton->setObjectName(QString::fromUtf8("InfoPushButton"));
        InfoPushButton->setFont(font);
        InfoPushButton->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout->addWidget(InfoPushButton);

        DelInfoPB = new QPushButton(Widget);
        DelInfoPB->setObjectName(QString::fromUtf8("DelInfoPB"));
        DelInfoPB->setFont(font);
        DelInfoPB->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout->addWidget(DelInfoPB);


        verticalLayout_2->addLayout(horizontalLayout);

        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAutoFillBackground(false);
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_2->addWidget(label_9);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\235\216\346\227\255\347\247\221\346\274\253\347\224\273\344\275\223v1.0"));
        font3.setPointSize(14);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"color: white;"));

        verticalLayout_2->addWidget(textEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: white;"));

        verticalLayout_3->addWidget(label_11);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(330, 0));
        listWidget->setMaximumSize(QSize(330, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\347\264\240\346\231\264\345\255\227\344\275\223"));
        font4.setPointSize(11);
        listWidget->setFont(font4);
        listWidget->setStyleSheet(QString::fromUtf8("border: 1px solid gray;/*\350\256\276\347\275\256\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\344\273\245\345\217\212\351\242\234\350\211\262*/\n"
"border-radius: 10px;/*\350\256\276\347\275\256\345\234\206\350\247\222\347\232\204\345\244\247\345\260\217*/\n"
"padding: 0 8px;/*\345\246\202\346\236\234\346\262\241\346\234\211\345\206\205\345\256\271\345\205\211\346\240\207\345\234\250\345\274\200\345\247\213\345\276\200\345\220\216\347\247\273\345\212\2500.8\345\203\217\347\264\240\347\202\271*/\n"
"selection-background-color: darkgray;\n"
"\n"
"QListWidget{background-color:  rgb(247, 247, 247);  border: 1px solid  rgb(247, 247, 247);outline:0px;}\n"
"QListWidget::Item{background-color: rgb(247, 247, 247);}\n"
"QListWidget::Item:hover{background-color: rgb(247, 247, 247); }\n"
"QListWidget::item:selected{\n"
"	background-color: rgb(247, 247, 247);\n"
"	color:black; \n"
"    border: 1px solid  rgb(247, 247, 247);\n"
"}\n"
"QListWidget::item:selected:!active{border: 1px solid  rgb(247,"
                        " 247, 247); background-color: rgb(247, 247, 247); color:rgb(247, 247, 247); } "));

        verticalLayout_3->addWidget(listWidget);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rizhisave = new QPushButton(Widget);
        rizhisave->setObjectName(QString::fromUtf8("rizhisave"));
        rizhisave->setFont(font);
        rizhisave->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(rizhisave, 0, 0, 1, 1);

        riziclear = new QPushButton(Widget);
        riziclear->setObjectName(QString::fromUtf8("riziclear"));
        riziclear->setFont(font);
        riziclear->setStyleSheet(QString::fromUtf8("color: white;"));

        gridLayout->addWidget(riziclear, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\347\212\266\346\200\201\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\346\266\210\346\201\257\346\226\207\346\234\254\357\274\232", nullptr));
        InfoPushButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        DelInfoPB->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\266\210\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\350\277\220\350\241\214\346\227\245\345\277\227:", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\346\266\210\346\201\257\345\257\271\350\257\235\357\274\232", nullptr));
        rizhisave->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\346\227\245\345\277\227", nullptr));
        riziclear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
