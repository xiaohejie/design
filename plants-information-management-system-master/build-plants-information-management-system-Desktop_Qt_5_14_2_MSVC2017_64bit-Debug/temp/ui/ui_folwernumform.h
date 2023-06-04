/********************************************************************************
** Form generated from reading UI file 'folwernumform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLWERNUMFORM_H
#define UI_FOLWERNUMFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <qchartview.h>
//#include <qtcharts_qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_folwernumForm
{
public:
    QtCharts::QChartView *graphicsView;

    void setupUi(QWidget *folwernumForm)
    {
        if (folwernumForm->objectName().isEmpty())
            folwernumForm->setObjectName(QString::fromUtf8("folwernumForm"));
        folwernumForm->resize(1389, 860);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        folwernumForm->setWindowIcon(icon);
        graphicsView = new QtCharts::QChartView(folwernumForm);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1391, 861));

        retranslateUi(folwernumForm);

        QMetaObject::connectSlotsByName(folwernumForm);
    } // setupUi

    void retranslateUi(QWidget *folwernumForm)
    {
        folwernumForm->setWindowTitle(QCoreApplication::translate("folwernumForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class folwernumForm: public Ui_folwernumForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLWERNUMFORM_H
