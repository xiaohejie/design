/********************************************************************************
** Form generated from reading UI file 'faultdiagnosis.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAULTDIAGNOSIS_H
#define UI_FAULTDIAGNOSIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaultDiagnosis
{
public:
    QPushButton *pushButton_startDiagnosis;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filepath;
    QPushButton *pushButton_chooseFile;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar;
    QPushButton *pushButton_sendFile;

    void setupUi(QWidget *FaultDiagnosis)
    {
        if (FaultDiagnosis->objectName().isEmpty())
            FaultDiagnosis->setObjectName(QString::fromUtf8("FaultDiagnosis"));
        FaultDiagnosis->resize(724, 443);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        FaultDiagnosis->setWindowIcon(icon);
        pushButton_startDiagnosis = new QPushButton(FaultDiagnosis);
        pushButton_startDiagnosis->setObjectName(QString::fromUtf8("pushButton_startDiagnosis"));
        pushButton_startDiagnosis->setGeometry(QRect(40, 90, 93, 28));
        widget = new QWidget(FaultDiagnosis);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 288, 46));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filepath = new QLineEdit(widget);
        filepath->setObjectName(QString::fromUtf8("filepath"));

        horizontalLayout->addWidget(filepath);

        pushButton_chooseFile = new QPushButton(widget);
        pushButton_chooseFile->setObjectName(QString::fromUtf8("pushButton_chooseFile"));

        horizontalLayout->addWidget(pushButton_chooseFile);

        widget_2 = new QWidget(FaultDiagnosis);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(350, 20, 291, 46));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);

        pushButton_sendFile = new QPushButton(widget_2);
        pushButton_sendFile->setObjectName(QString::fromUtf8("pushButton_sendFile"));

        horizontalLayout_2->addWidget(pushButton_sendFile);


        retranslateUi(FaultDiagnosis);

        QMetaObject::connectSlotsByName(FaultDiagnosis);
    } // setupUi

    void retranslateUi(QWidget *FaultDiagnosis)
    {
        FaultDiagnosis->setWindowTitle(QCoreApplication::translate("FaultDiagnosis", "Form", nullptr));
        pushButton_startDiagnosis->setText(QCoreApplication::translate("FaultDiagnosis", "\345\274\200\345\247\213\350\257\212\346\226\255", nullptr));
        pushButton_chooseFile->setText(QCoreApplication::translate("FaultDiagnosis", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton_sendFile->setText(QCoreApplication::translate("FaultDiagnosis", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaultDiagnosis: public Ui_FaultDiagnosis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAULTDIAGNOSIS_H
