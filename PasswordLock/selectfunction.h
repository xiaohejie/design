#ifndef SELECTFUNCTION_H
#define SELECTFUNCTION_H

#include <QWidget>
#include "displaydata.h"
#include "faultdiagnosis.h"

namespace Ui {
class SelectFunction;
}

class SelectFunction : public QWidget
{
    Q_OBJECT

public:
    explicit SelectFunction(QWidget *parent = nullptr);
    ~SelectFunction();

private slots:
    void on_pushButton_datacollection_clicked();

    void on_pushButton_faultDiagnosis_clicked();

    void on_pushButton_clicked();

private:
    Ui::SelectFunction *ui;
    DisplayData* d = new DisplayData;       //采集数据界面
};

#endif // SELECTFUNCTION_H
