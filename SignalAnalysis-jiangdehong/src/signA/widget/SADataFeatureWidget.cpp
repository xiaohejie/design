﻿#include "SADataFeatureWidget.h"
#include "ui_SADataFeatureWidget.h"
#include <QMainWindow>
#include <QMdiSubWindow>
#include <QTimer>
#include <SAPlotMarker.h>
#include <QItemSelectionModel>
#include <QItemSelection>
#include "SADataClient.h"
#include "SAChart.h"
#include "SAPlotMarker.h"
#include "SAMarkSymbol.h"
#include "SADataClient.h"
#include "SAFigureWindow.h"
#include "SAChart2D.h"
#include "SALog.h"
#include "SAItem.h"

#include "qwt_plot_curve.h"
#include "SAUIReflection.h"
#include "SAUIInterface.h"
#include "SAMdiSubWindow.h"
#include "SADataFeatureTreeModel.h"
#define _DEBUG_PRINT
#define _DEBUG_OUTPUT

//自定义的属性，y轴数值动作，
#define ITEM_PROPERTY_ACTION_Y_VALUE		(SAItem::RoleUserDefine + 1)
//自定义的属性，x轴数值动作，
#define ITEM_PROPERTY_ACTION_X_VALUE		(SAItem::RoleUserDefine + 2)
//自定义的属性，点值动作，
#define ITEM_PROPERTY_ACTION_POINT_VALUE	(SAItem::RoleUserDefine + 3)

#define ICON_SUM				QIcon(":/dataFeatureTree/icons/sum.svg")
#define ICON_VAR				QIcon(":/dataFeatureTree/icons/var.svg")
#define ICON_STD				QIcon(":/dataFeatureTree/icons/std.svg")
#define ICON_MAX				QIcon(":/dataFeatureTree/icons/max.svg")
#define ICON_MIN				QIcon(":/dataFeatureTree/icons/min.svg")
#define ICON_MID				QIcon(":/dataFeatureTree/icons/mid.svg")
#define ICON_MEAN				QIcon(":/dataFeatureTree/icons/mean.svg")
#define ICON_SKEWNESS				QIcon(":/dataFeatureTree/icons/skewness.svg")
#define ICON_PEAKPEAK				QIcon(":/dataFeatureTree/icons/peakpeak.svg")
#define ICON_KURTOSIS				QIcon(":/dataFeatureTree/icons/kurtosis.svg")
#define ICON_MAXPOINT				QIcon(":/dataFeatureTree/icons/maxPoint.svg")
#define ICON_MINPOINT				QIcon(":/dataFeatureTree/icons/minPoint.svg")
#define ICON_MIDPOINT				QIcon(":/dataFeatureTree/icons/midPoint.svg")
#define ICON_TOPS				QIcon(":/dataFeatureTree/icons/tops.svg")
#define ICON_LOWS				QIcon(":/dataFeatureTree/icons/lows.svg")

SADataFeatureWidget::DataInfo::DataInfo() :
    item(nullptr)
    , midwidget(nullptr)
    , chart(nullptr)
{
}


SADataFeatureWidget::DataInfo::DataInfo(QwtPlotItem *plotitem, QMdiSubWindow *midwidget, SAChart2D *chartptr) :
    item(plotitem)
    , midwidget(midwidget)
    , chart(chartptr)
{
}


bool SADataFeatureWidget::DataInfo::operator <(const SADataFeatureWidget::DataInfo& other)
{
    return (((int)(this->item) + (int)(this->chart) + (int)(this->midwidget)) < ((int)other.item + (int)other.chart + (int)other.midwidget));
}


SADataFeatureWidget::SADataFeatureWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SADataFeatureWidget)
    , m_lastActiveSubWindow(nullptr)
{
    ui->setupUi(this);
    qRegisterMetaType<QVector<QPointF> >();
    qRegisterMetaType<SAPropertiesGroup>();
    connect(ui->treeView, &QTreeView::clicked, this, &SADataFeatureWidget::onTreeViewClicked);
    connect(ui->toolButton_clearDataFeature, &QToolButton::clicked, this, &SADataFeatureWidget::onToolButtonClearDataFeatureClicked);
    connect(ui->toolButton_expandAll, &QToolButton::clicked, this, &SADataFeatureWidget::onToolButtonExpandAllClicked);
    connect(ui->toolButton_requestCalc, &QToolButton::clicked, this, &SADataFeatureWidget::onToolButtonRequestCalc);
    //消息转发
    connect(&m_client, &SADataClient::messageInfo, this, &SADataFeatureWidget::showMessageInfo);
    connect(&m_client, &SADataClient::heartbeatCheckerTimerout, this, &SADataFeatureWidget::onHeartbeatCheckerTimerout);
    connect(&m_client, &SADataClient::receive2DPointsDescribe, this, &SADataFeatureWidget::onReceive2DPointsDescribe);
    m_client.tryConnectToServe();
}


SADataFeatureWidget::~SADataFeatureWidget()
{
    delete ui;
}


/**
 * @brief 子窗口激活槽
 * @param arg1
 */
void SADataFeatureWidget::mdiSubWindowActived(QMdiSubWindow *subwnd)
{
    calcFigureFeature(subwnd);
}


///
/// \brief 计算绘图窗口的dataFeature
/// \param figure 绘图窗口指针，不允许null
///
void SADataFeatureWidget::calcFigureFeature(QMdiSubWindow *subwnd, SAFigureWindow *figure, SADataFeatureTreeModel *model)
{
    Q_CHECK_PTR(subwnd);
    Q_CHECK_PTR(figure);
    Q_CHECK_PTR(model);
    //获取所有的chart逐一调用接口进行计算
    QList<SAChart2D *> charts = figure->get2DPlots();

    for (SAChart2D *c : charts)
    {
        //把可计算的item筛选出来
        QwtPlotItemList itemList = SADataFeatureTreeModel::filterCanDisplayItems(c->itemList());
        for (auto i : itemList)
        {
            calcPlotItemFeature(subwnd, c, model, i);
        }
    }
}


void SADataFeatureWidget::calcFigureFeature(QMdiSubWindow *subwnd)
{
    if (nullptr == subwnd) {
        return;
    }
    //记录最后一次激活的窗口
    m_lastActiveSubWindow = subwnd;
    setWindowTitle(tr("data feature[%1]").arg(subwnd->windowTitle()));
    //查找此窗口是否有对应的模型
    auto im = m_mdiToModel.find(subwnd);

    if (im != m_mdiToModel.end()) {
        //说明已经有model。把model设置进tree里
        ui->treeView->setModel(im.value());
        auto hh = ui->treeView->header();
        hh->setSectionResizeMode(0, QHeaderView::ResizeToContents);
        hh->setSectionResizeMode(1, QHeaderView::Interactive);
        ui->treeView->expandAll();
    }else {
        //说明没有对应的内容，把数据下发给数据处理进程进行处理
        SAFigureWindow *figure = getFigureFromSubWindow(subwnd);//记录当前的绘图窗口
        if (figure) {
            //说明是绘图窗口，进入这个函数，说明是首次建立的窗口，此时就建立空模型
            //先建立空模型，建立模型会把figure的chart和item处理好，等待计算的绑定
            SADataFeatureTreeModel *m = new SADataFeatureTreeModel(figure, this);
            ui->treeView->setModel(m);
            auto hh = ui->treeView->header();
            hh->setSectionResizeMode(0, QHeaderView::ResizeToContents);
            hh->setSectionResizeMode(1, QHeaderView::Interactive);
            ui->treeView->expandAll();
            //记录子窗口和模型对应关系
            m_mdiToModel[subwnd] = m;
            //请求远程计算，计算完结果返回后会自动填充进模型中从而在界面上显示
            calcFigureFeature(subwnd, figure, m);
        }
    }
}


void SADataFeatureWidget::calcFigureFeature()
{
    calcFigureFeature(m_lastActiveSubWindow);
}


/**
 * @brief 通过流水号找到对应的model，如果没有找到返回nullptr
 * @param sequenceID
 * @return 如果没有找到,返回QPair(nullptr,DataInfo())
 */
QPair<SADataFeatureTreeModel *, SADataFeatureWidget::DataInfo> SADataFeatureWidget::findModelBySsequenceID(int sequenceID)
{
    auto ite = m_keyToDatainfo.find(sequenceID);

    if (ite == m_keyToDatainfo.end()) {
        return (qMakePair(nullptr, DataInfo()));
    }
    DataInfo di = ite.value();
    auto imod = m_mdiToModel.find(di.midwidget);

    if (imod == m_mdiToModel.end()) {
        return (qMakePair(nullptr, di));
    }
    return (qMakePair(imod.value(), di));
}


/**
 * @brief 设置点击反馈 - y值
 *
 * 设置完点击反馈后，点击item，会在图上显示y值对应的水平线
 * @param it
 * @param v
 */
void SADataFeatureWidget::setupClickedYValueAction(SADataFeatureTreeModel::ItemPtr it, const double& v)
{
    it->setProperty(ITEM_PROPERTY_ACTION_Y_VALUE, v);
}


/**
 * @brief 设置点击反馈 - 点
 *
 * 设置完点击反馈后，点击item，会在图上显示点的标记
 * @param it
 * @param v
 */
void SADataFeatureWidget::setupClickedPointFValueAction(SADataFeatureTreeModel::ItemPtr it, const QPointF& v)
{
    it->setProperty(ITEM_PROPERTY_ACTION_POINT_VALUE, v);
}


/**
 * @brief 计算每个曲线的信息
 * @param subwnd 子窗口
 * @param chart 对应的sa2dchart
 * @param model 对应的model
 * @param plotitem 对应的plotitem
 * @param key 赋予的请求序号
 */
void SADataFeatureWidget::calcPlotItemFeature(QMdiSubWindow *subwnd, SAChart2D *chart, SADataFeatureTreeModel *model, QwtPlotItem *plotitem)
{
    Q_CHECK_PTR(chart);
    DataInfo d = DataInfo(plotitem, subwnd, chart);

    switch (plotitem->rtti())
    {
    case QwtPlotItem::Rtti_PlotCurve:
    {
        QVector<QPointF> xys;
        SAChart::getXYDatas(xys, static_cast<const QwtPlotCurve *>(plotitem));
        //把plotitem作为key
        int sequenceID = reinterpret_cast<int>(plotitem);
        m_keyToDatainfo[sequenceID] = d;
        //建立初步的DataFeatureTreeModel先把类型设置进去
        m_client.request2DPointsDescribe(xys, sequenceID);

        break;
    }

    default:
        break;
    }
}


///
/// \brief 子窗口关闭槽
/// \param arg1
///
void SADataFeatureWidget::mdiSubWindowClosed(QMdiSubWindow *arg1)
{
    auto modelIte = m_mdiToModel.find(arg1);

    if (modelIte != m_mdiToModel.end()) {
        //子窗口关闭，把对应的对应model删除，如果正在显示这个model，先设置为null
        QAbstractItemModel *model = modelIte.value();
        if (ui->treeView->model() == model) {
            ui->treeView->setModel(nullptr);
        }
        if (model) {
            delete model;
        }
    }
    m_mdiToModel.remove(arg1);
}


/**
 * @brief 重新请求服务器计算
 */
void SADataFeatureWidget::onToolButtonRequestCalc()
{
    calcFigureFeature();
}


///
/// \brief 从子窗口获取绘图窗口
/// \param sub
/// \return
///
SAFigureWindow *SADataFeatureWidget::getFigureFromSubWindow(QMdiSubWindow *sub)
{
    if (nullptr == sub) {
        return (nullptr);
    }
    return (qobject_cast<SAFigureWindow *>(sub->widget()));
}


///
/// \brief 数据特性树点击
/// \param index
///
void SADataFeatureWidget::onTreeViewClicked(const QModelIndex& index)
{
    qDebug() << "click";
    if (!index.isValid()) {
        qDebug() << "index invalid";
        return;
    }
    if (nullptr == m_lastActiveSubWindow) {
        qDebug() << "last Active SubWindow NULL";
        return;
    }
    SAFigureWindow *figure = getFigureFromSubWindow(m_lastActiveSubWindow);//记录当前的绘图窗口

    if (nullptr == figure) {
        qDebug() << "can not find FigureWindow";
        return;
    }
    onToolButtonClearDataFeatureClicked();//先清除标记
    QSet<SAChart2D *> chartPlots = figure->get2DPlots().toSet();

    QItemSelectionModel *selModel = ui->treeView->selectionModel();
    SADataFeatureTreeModel *featureModel = static_cast<SADataFeatureTreeModel *>(ui->treeView->model());

    if ((nullptr == selModel) || (nullptr == featureModel)) {
        qDebug() << "can not find DataFeatureTreeModel";
        return;
    }
    //获取所有选中的条目
    QModelIndexList indexList = selModel->selectedIndexes();

    for (int i = 0; i < indexList.size(); ++i)
    {
        QModelIndex index = indexList[i];
        if (1 != index.column()) {
            //由于tree在全选时把整行都返回，因此第二列滤掉
            continue;
        }
        SADataFeatureTreeModel::ItemPtr p = featureModel->toItemPtr(index);
        if (nullptr == p) {
            continue;
        }
        QVariant v = p->getProperty(ITEM_PROPERTY_ACTION_Y_VALUE);
        if (v.isValid()) {
            //显示水平线
            SAChart2D *c = featureModel->findChart2D(index);
            if (c) {
                double data = v.toDouble();
                SAYValueMarker *valueMark = new SAYValueMarker(data);
                valueMark->setXValue(c->axisXmax());
                valueMark->setLinePen(Qt::black, 1);
                valueMark->setLabel(tr("%1(%2)").arg(p->getName()).arg(data));
                valueMark->setLabelAlignment(Qt::AlignTop|Qt::AlignRight);
                valueMark->setSpacing(1);//设置文字和mark的间隔
                c->addPlotMarker(valueMark);
                c->replot();
            }
        }
        v = p->getProperty(ITEM_PROPERTY_ACTION_X_VALUE);
        if (v.isValid()) {
            //显示竖直线
        }
        v = p->getProperty(ITEM_PROPERTY_ACTION_POINT_VALUE);
        if (v.isValid()) {
            //显示点
            SAChart2D *c = featureModel->findChart2D(index);
            if (c) {
                QPointF point = v.toPointF();
                SAPointMarker *pointMark = new SAPointMarker(point);
                SATriangleMarkSymbol *tra = new SATriangleMarkSymbol();
                pointMark->setSymbol(tra);
                pointMark->setLabel(tr("%1(%2,%3)").arg(p->getName()).arg(point.x()).arg(point.y()));
                pointMark->setLabelAlignment(Qt::AlignTop|Qt::AlignHCenter);
                pointMark->setSpacing(10);//设置文字和mark的间隔
                c->addPlotMarker(pointMark);
                c->replot();
            }
        }
    }
}


///
/// \brief 清除标记按钮
///
void SADataFeatureWidget::onToolButtonClearDataFeatureClicked()
{
    if (nullptr == m_lastActiveSubWindow) {
        return;
    }
    SAFigureWindow *figure = getFigureFromSubWindow(m_lastActiveSubWindow);//记录当前的绘图窗口

    if (nullptr == figure) {
        return;
    }
    QList<SAChart2D *> charts = figure->get2DPlots();

    std::for_each(charts.begin(), charts.end(), [](SAChart2D *p) {
        p->removeAllPlotMarker();
    });
}


void SADataFeatureWidget::onToolButtonExpandAllClicked()
{
    ui->treeView->expandAll();
}


void SADataFeatureWidget::onHeartbeatCheckerTimerout()
{
    emit showMessageInfo(tr("data process serve heartbreat time out"), SA::WarningMessage);
}


/**
 * @brief 接收到服务器返回的计算结果
 * @param sum
 * @param mean
 * @param var
 * @param stdVar
 * @param skewness
 * @param kurtosis
 * @param min
 * @param max
 * @param mid
 * @param peak2peak
 * @param minPoint
 * @param maxPoint
 * @param midPoint
 * @param tops
 * @param lows
 * @param sequenceID
 * @param extendValue
 */
void SADataFeatureWidget::onReceive2DPointsDescribe(const SAPropertiesGroup &propgroups,int sequenceID, unsigned int extendValue)
{
    Q_UNUSED(extendValue);
    qDebug() << "Receive 2D Points Describe";
    const SAProperties& prop = propgroups.properties(SAXMLProtocol::defaultGroupName());
    unsigned int count = prop.getProperty("count").toUInt();
    double sum = prop.getProperty("sum").toDouble();
    double mean = prop.getProperty("mean").toDouble();
    double var = prop.getProperty("var").toDouble();
    double stdVar = prop.getProperty("stdVar").toDouble();
    double skewness = prop.getProperty("skewness").toDouble();
    double kurtosis = prop.getProperty("kurtosis").toDouble();
    double min = prop.getProperty("min").toDouble();
    double max = prop.getProperty("max").toDouble();
    double mid = prop.getProperty("mid").toDouble();
    double peak2peak = prop.getProperty("peak2peak").toDouble();
    QPointF minPoint = prop.getProperty("min-point").toPointF();
    QPointF maxPoint = prop.getProperty("max-point").toPointF();
    QPointF midPoint = prop.getProperty("mid-point").toPointF();
    QVector<QPointF> tops = prop.getProperty("sorted-tops").value<QVector<QPointF> >();
    QVector<QPointF> lows = prop.getProperty("sorted-lows").value<QVector<QPointF> >();

    QPair<SADataFeatureTreeModel *, DataInfo> res = findModelBySsequenceID(sequenceID);
    SADataFeatureTreeModel *model = res.first;
    DataInfo di = res.second;

    if (nullptr == model) {
        qDebug() << tr("receive unknow sequenceID when on receive 2D points describe:")<<sequenceID;
        return;
    }
    SADataFeatureTreeModel::ItemPtr it = nullptr;

    it = model->setItemValue(di.item, tr("count"), count);
//    if (it) {
//        it->setIcon(ICON_SUM);
//    }

    it = model->setItemValue(di.item, tr("sum"), sum);
    if (it) {
        it->setIcon(ICON_SUM);
    }

    it = model->setItemValue(di.item, tr("mean"), mean);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, mean);
        it->setIcon(ICON_MEAN);
    }

    it = model->setItemValue(di.item, tr("var"), var);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, var);
        it->setIcon(ICON_VAR);
    }

    it = model->setItemValue(di.item, tr("std var"), stdVar);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, stdVar);
        it->setIcon(ICON_STD);
    }

    it = model->setItemValue(di.item, tr("skewness"), skewness);
    if (it) {
        it->setIcon(ICON_SKEWNESS);
    }

    it = model->setItemValue(di.item, tr("kurtosis"), kurtosis);
    if (it) {
        it->setIcon(ICON_KURTOSIS);
    }

    it = model->setItemValue(di.item, tr("min"), min);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, min);
        it->setIcon(ICON_MIN);
    }

    it = model->setItemValue(di.item, tr("max"), max);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, max);
        it->setIcon(ICON_MAX);
    }

    it = model->setItemValue(di.item, tr("mid"), mid);
    if (it) {
        //设置点击反馈
        setupClickedYValueAction(it, mid);
        it->setIcon(ICON_MID);
    }

    it = model->setItemValue(di.item, tr("peak2peak"), peak2peak);
    if (it) {
        it->setIcon(ICON_PEAKPEAK);
    }

    it = model->setItemValue(di.item, tr("minPoint"), minPoint);
    if (it) {
        //设置点击反馈
        setupClickedPointFValueAction(it, minPoint);
        it->setIcon(ICON_MINPOINT);
    }
    it = model->setItemValue(di.item, tr("maxPoint"), maxPoint);
    if (it) {
        //设置点击反馈
        setupClickedPointFValueAction(it, maxPoint);
        it->setIcon(ICON_MAXPOINT);
    }
    it = model->setItemValue(di.item, tr("midPoint"), midPoint);
    if (it) {
        //设置点击反馈
        it->setIcon(ICON_MIDPOINT);
        setupClickedPointFValueAction(it, midPoint);
    }
    it = model->setItemValue(di.item, tr("tops"), QVariant::fromValue<QVector<QPointF> >(tops));
    if (it) {
        it->setIcon(ICON_TOPS);
        int c = it->childItemCount();
        for (int i = 0; i < c; ++i)
        {
            SADataFeatureTreeModel::ItemPtr cit = it->childItem(i);
            if (cit) {
                QPointF f = cit->getProperty(SAItem::RoleValue).toPointF();
                setupClickedPointFValueAction(cit, f);
            }
        }
    }
    it = model->setItemValue(di.item, tr("lows"), QVariant::fromValue<QVector<QPointF> >(lows));
    if (it) {
        it->setIcon(ICON_LOWS);
        int c = it->childItemCount();
        for (int i = 0; i < c; ++i)
        {
            SADataFeatureTreeModel::ItemPtr cit = it->childItem(i);
            if (cit) {
                QPointF f = cit->getProperty(SAItem::RoleValue).toPointF();
                setupClickedPointFValueAction(cit, f);
            }
        }
    }

    //qDebug() << midPoint << tops;
    model->reflash();
    ui->treeView->expandAll();
}
