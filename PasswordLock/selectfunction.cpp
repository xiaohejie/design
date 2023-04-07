#include "selectfunction.h"
#include "ui_selectfunction.h"
#include "displaydata.h"

SelectFunction::SelectFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectFunction)
{
    ui->setupUi(this);
    //设置标题
    setWindowTitle(QObject::tr("功能选择"));
}

SelectFunction::~SelectFunction()
{
    delete ui;
}

//数据采集信号槽
void SelectFunction::on_pushButton_datacollection_clicked()
{
    this->hide();
    connect(d, &DisplayData::subClose, this, &QWidget::show);    //关联子窗体关闭信号与父窗体显示事件
    d->show();
}

//故障诊断信号槽
void SelectFunction::on_pushButton_faultDiagnosis_clicked()
{
    this->hide();
    FaultDiagnosis* f = new FaultDiagnosis; //故障诊断界面
    connect(f, &FaultDiagnosis::subClose, this, &QWidget::show);    //关联子窗体关闭信号与父窗体显示事件
    f->setAttribute(Qt::WA_DeleteOnClose);
    f->show();
}

//退出信号槽
void SelectFunction::on_pushButton_clicked()
{
    this->close();
}
