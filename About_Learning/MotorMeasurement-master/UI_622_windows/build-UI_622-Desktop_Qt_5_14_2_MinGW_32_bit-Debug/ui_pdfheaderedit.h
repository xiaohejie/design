/********************************************************************************
** Form generated from reading UI file 'pdfheaderedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDFHEADEREDIT_H
#define UI_PDFHEADEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mybutton.h"
#include "mycheckbox.h"

QT_BEGIN_NAMESPACE

class Ui_pdfHeaderEdit
{
public:
    QLabel *label;
    QLabel *label_8;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *V3;
    QLabel *label_2;
    QLineEdit *companyEdit;
    QLabel *label_7;
    QLineEdit *subTitleEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *V1;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *V2;
    QLineEdit *telEdit;
    QLineEdit *faxEdit;
    QLineEdit *mailEdit;
    QLineEdit *websiteEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *sizeEdit;
    QLabel *label_10;
    QLineEdit *typeNoEdit;
    QLabel *label_11;
    QLineEdit *NoEdit;
    myButton *exportButton;
    myCheckBox *check1;
    myCheckBox *check2;
    myCheckBox *check3;
    myButton *exportDataChartButton;
    QLabel *ret;
    QLabel *logo;

    void setupUi(QWidget *pdfHeaderEdit)
    {
        if (pdfHeaderEdit->objectName().isEmpty())
            pdfHeaderEdit->setObjectName(QString::fromUtf8("pdfHeaderEdit"));
        pdfHeaderEdit->resize(800, 450);
        label = new QLabel(pdfHeaderEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 660, 121));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(pdfHeaderEdit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 181, 661, 171));
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(pdfHeaderEdit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 60, 160, 112));
        V3 = new QVBoxLayout(verticalLayoutWidget);
        V3->setObjectName(QString::fromUtf8("V3"));
        V3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        V3->addWidget(label_2);

        companyEdit = new QLineEdit(verticalLayoutWidget);
        companyEdit->setObjectName(QString::fromUtf8("companyEdit"));
        companyEdit->setFocusPolicy(Qt::StrongFocus);

        V3->addWidget(companyEdit);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        V3->addWidget(label_7);

        subTitleEdit = new QLineEdit(verticalLayoutWidget);
        subTitleEdit->setObjectName(QString::fromUtf8("subTitleEdit"));
        subTitleEdit->setFocusPolicy(Qt::StrongFocus);

        V3->addWidget(subTitleEdit);

        verticalLayoutWidget_2 = new QWidget(pdfHeaderEdit);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(520, 40, 160, 182));
        V1 = new QVBoxLayout(verticalLayoutWidget_2);
        V1->setObjectName(QString::fromUtf8("V1"));
        V1->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        V1->addWidget(label_4);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        V1->addWidget(label_3);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        V1->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        V1->addWidget(label_6);

        verticalLayoutWidget_3 = new QWidget(pdfHeaderEdit);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(90, 120, 160, 151));
        V2 = new QVBoxLayout(verticalLayoutWidget_3);
        V2->setObjectName(QString::fromUtf8("V2"));
        V2->setContentsMargins(0, 0, 0, 0);
        telEdit = new QLineEdit(verticalLayoutWidget_3);
        telEdit->setObjectName(QString::fromUtf8("telEdit"));
        telEdit->setFocusPolicy(Qt::StrongFocus);

        V2->addWidget(telEdit);

        faxEdit = new QLineEdit(verticalLayoutWidget_3);
        faxEdit->setObjectName(QString::fromUtf8("faxEdit"));
        faxEdit->setFocusPolicy(Qt::StrongFocus);

        V2->addWidget(faxEdit);

        mailEdit = new QLineEdit(verticalLayoutWidget_3);
        mailEdit->setObjectName(QString::fromUtf8("mailEdit"));
        mailEdit->setFocusPolicy(Qt::StrongFocus);

        V2->addWidget(mailEdit);

        websiteEdit = new QLineEdit(verticalLayoutWidget_3);
        websiteEdit->setObjectName(QString::fromUtf8("websiteEdit"));
        websiteEdit->setFocusPolicy(Qt::StrongFocus);

        V2->addWidget(websiteEdit);

        horizontalLayoutWidget = new QWidget(pdfHeaderEdit);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 230, 501, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        sizeEdit = new QLineEdit(horizontalLayoutWidget);
        sizeEdit->setObjectName(QString::fromUtf8("sizeEdit"));
        sizeEdit->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(sizeEdit);

        label_10 = new QLabel(horizontalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout->addWidget(label_10);

        typeNoEdit = new QLineEdit(horizontalLayoutWidget);
        typeNoEdit->setObjectName(QString::fromUtf8("typeNoEdit"));
        typeNoEdit->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(typeNoEdit);

        label_11 = new QLabel(horizontalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout->addWidget(label_11);

        NoEdit = new QLineEdit(horizontalLayoutWidget);
        NoEdit->setObjectName(QString::fromUtf8("NoEdit"));
        NoEdit->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(NoEdit);

        exportButton = new myButton(pdfHeaderEdit);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setGeometry(QRect(250, 360, 131, 51));
        exportButton->setFocusPolicy(Qt::TabFocus);
        check1 = new myCheckBox(pdfHeaderEdit);
        check1->setObjectName(QString::fromUtf8("check1"));
        check1->setGeometry(QRect(80, 310, 80, 30));
        check1->setFocusPolicy(Qt::TabFocus);
        check2 = new myCheckBox(pdfHeaderEdit);
        check2->setObjectName(QString::fromUtf8("check2"));
        check2->setGeometry(QRect(290, 310, 80, 30));
        check2->setFocusPolicy(Qt::TabFocus);
        check3 = new myCheckBox(pdfHeaderEdit);
        check3->setObjectName(QString::fromUtf8("check3"));
        check3->setGeometry(QRect(520, 310, 80, 30));
        check3->setFocusPolicy(Qt::TabFocus);
        exportDataChartButton = new myButton(pdfHeaderEdit);
        exportDataChartButton->setObjectName(QString::fromUtf8("exportDataChartButton"));
        exportDataChartButton->setGeometry(QRect(400, 360, 131, 51));
        ret = new QLabel(pdfHeaderEdit);
        ret->setObjectName(QString::fromUtf8("ret"));
        ret->setGeometry(QRect(250, 410, 281, 31));
        ret->setAlignment(Qt::AlignCenter);
        logo = new QLabel(pdfHeaderEdit);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(40, 60, 155, 101));
        logo->setStyleSheet(QString::fromUtf8(""));
        QWidget::setTabOrder(subTitleEdit, telEdit);
        QWidget::setTabOrder(telEdit, faxEdit);
        QWidget::setTabOrder(faxEdit, mailEdit);
        QWidget::setTabOrder(mailEdit, websiteEdit);
        QWidget::setTabOrder(websiteEdit, sizeEdit);
        QWidget::setTabOrder(sizeEdit, typeNoEdit);
        QWidget::setTabOrder(typeNoEdit, NoEdit);
        QWidget::setTabOrder(NoEdit, check1);
        QWidget::setTabOrder(check1, check2);
        QWidget::setTabOrder(check2, check3);
        QWidget::setTabOrder(check3, exportButton);

        retranslateUi(pdfHeaderEdit);

        QMetaObject::connectSlotsByName(pdfHeaderEdit);
    } // setupUi

    void retranslateUi(QWidget *pdfHeaderEdit)
    {
        pdfHeaderEdit->setWindowTitle(QCoreApplication::translate("pdfHeaderEdit", "Form", nullptr));
        label->setText(QString());
        label_8->setText(QString());
        label_2->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\215\225\344\275\215\345\220\215\347\247\260\357\274\232", nullptr));
        companyEdit->setText(QCoreApplication::translate("pdfHeaderEdit", "\346\261\237\350\213\217\345\205\260\350\217\261\357\274\210\346\265\267\345\256\211\357\274\211\346\234\272\347\224\265\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));
        label_7->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\211\257\346\240\207\351\242\230\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("pdfHeaderEdit", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("pdfHeaderEdit", "\344\274\240\347\234\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("pdfHeaderEdit", "\347\224\265\345\255\220\344\277\241\347\256\261\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("pdfHeaderEdit", "\347\275\221\345\235\200\357\274\232", nullptr));
        websiteEdit->setText(QCoreApplication::translate("pdfHeaderEdit", "lanlingjidian.cn.gongchang.com/", nullptr));
        label_9->setText(QCoreApplication::translate("pdfHeaderEdit", "\350\247\204\346\240\274\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\236\213\345\217\267\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("pdfHeaderEdit", "\347\274\226\345\217\267\357\274\232", nullptr));
        exportButton->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\257\274\345\207\272\346\233\262\347\272\277\346\212\245\350\241\250", nullptr));
        check1->setText(QCoreApplication::translate("pdfHeaderEdit", "\350\275\254\351\200\237\345\233\276", nullptr));
        check2->setText(QCoreApplication::translate("pdfHeaderEdit", "\350\275\254\347\237\251\345\233\276", nullptr));
        check3->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\212\237\347\216\207\345\233\276", nullptr));
        exportDataChartButton->setText(QCoreApplication::translate("pdfHeaderEdit", "\345\257\274\345\207\272\346\225\260\346\215\256\346\212\245\350\241\250", nullptr));
        ret->setText(QString());
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pdfHeaderEdit: public Ui_pdfHeaderEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDFHEADEREDIT_H
