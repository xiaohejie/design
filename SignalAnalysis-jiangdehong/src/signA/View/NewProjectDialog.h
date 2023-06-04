/*******************************
*   File:       NewProjectDialog.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-11
*   eMail:      1714203542@qq.com
*   brief:      新建项目窗口
********************************/
#ifndef NEWPROJECTDIALOG_H
#define NEWPROJECTDIALOG_H

#include <QDialog>
#include <map>
#include"mainwindow.h"
#include"Controller/channelcontroller.h"
#include"Controller/projectcontroller.h"
#include"Controller/dictionarycontroller.h"
#include"spectrum.h"
#include"Domain/product.h"
#include"Domain/channel.h"
#include"Dao/productdao.h"

namespace Ui {
class NewProjectDialog;
}

class NewProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectDialog(MainWindow * mv,QWidget *parent = nullptr);
    void initData();
    ~NewProjectDialog();

    void SelectProduct();

private slots:
    void on_lineEdit_3_editingFinished();



    void on_previousbtn_clicked();

    void on_nextbtn_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_okbtn_clicked();

    void on_projuctComboBox_currentIndexChanged(const QString &arg1);

    void initFrequencyCombox();

    void on_frequencyComboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::NewProjectDialog *ui;
    MainWindow *mv;
    int channelNumber = 4;
    //为了适配Controller接口，暂时不考虑适配器
    map<string,vector<Dictionary *>> channelParams;

    //Controller
    ChannelController channelCon;
    ProjectController projectCon;
    DictionaryController dictionCon;

    long long projectId =0 ;

    QVector<Product> productVec;
    int comboxIndex = 0;
    std::map<int,QString> productMap;//记录产品的map
    ProductDao productDao;
    QString m_productName;

    int sampleFrequency;
    std::vector<QString> frequencyVector;
};

#endif // NEWPROJECTDIALOG_H
