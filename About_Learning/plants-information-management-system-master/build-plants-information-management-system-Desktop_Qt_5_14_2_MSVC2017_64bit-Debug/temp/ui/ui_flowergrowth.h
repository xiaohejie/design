/********************************************************************************
** Form generated from reading UI file 'flowergrowth.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOWERGROWTH_H
#define UI_FLOWERGROWTH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <qchartview.h>
//#include <qtcharts_qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_Flowergrowth
{
public:
    QtCharts::QChartView *graphicsView;

    void setupUi(QWidget *Flowergrowth)
    {
        if (Flowergrowth->objectName().isEmpty())
            Flowergrowth->setObjectName(QString::fromUtf8("Flowergrowth"));
        Flowergrowth->resize(1183, 817);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/_displayLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Flowergrowth->setWindowIcon(icon);
        graphicsView = new QtCharts::QChartView(Flowergrowth);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1181, 821));

        retranslateUi(Flowergrowth);

        QMetaObject::connectSlotsByName(Flowergrowth);
    } // setupUi

    void retranslateUi(QWidget *Flowergrowth)
    {
        Flowergrowth->setWindowTitle(QCoreApplication::translate("Flowergrowth", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Flowergrowth: public Ui_Flowergrowth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOWERGROWTH_H
