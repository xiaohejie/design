/*******************************
*   File:       JSpectrumWindow.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-06
*   brief:      显示频谱图的类，需要先设置数据接口才能开始start
********************************/
#ifndef JSPECTRUMWINDOW_H
#define JSPECTRUMWINDOW_H
#include <QObject>
#include <QBarSeries>
#include <QBarSet>
#include <QBarCategoryAxis>
#include "jbasesamplewindow.h"
#include "qcustomplot.h"
#include "jdataviewecho.h"
#include "Signal/StaticSpectralEchoSignal.h"
#include "Utils/SignalFeature.h"
class JSpectrumWindow:public QObject
{
    Q_OBJECT
public:
    explicit JSpectrumWindow(QWidget *parent);
    ~JSpectrumWindow();
    void init(QWidget * parent) ;

    /**
     * @brief 继续显示
     */
     void resume();
    /**
     * @brief 暂停
     */
     void pause() ;

    /**
     * @brief 隐藏series
     */
     void hide() ;
    /**
     * @brief 显示series
     */
     void show() ;

    /**
     * @brief 刷新接口
     */
     void refresh();

     void setMainWindowObject(MainWindow *vw);
     void start();
     void stop();
     void setDataViewEcho(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData) ;
     void setInterval(int mec) ;
     /**
      * @brief setYAxisRange 四个窗口的Y轴范围
      * @param start
      * @param end
      */
     void setYAxisRange(double start , double end);
     /**
      * @brief setY_isScale,设置Y轴是否动态收缩
      * @param scale
      */
     void setY_isScale(bool scale);
     /**
      * @brief 设置频谱范围
      * @param count为最大频谱，0为最小，那么就是总共count+1跟谱线
      */
     void setXAxisRange(int count);
     /**
      * @brief 设置缩放比率,rate表示当前最大值的倍数
      * @param rate
      */
     void setReScaleRate(double rate);
private:
     QVector<QCustomPlot *> *customPlot = new QVector<QCustomPlot *> (4);
     QVector<QCPItemText *> *textItem = new QVector<QCPItemText *> (4);
     std::map<QString ,int> bindCustonPlot;
     QTimer *timer ;
     std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData;
     QVector<double> * xAxis = new QVector<double>(10000);
     MainWindow *mainSpectrum;
     /**
      * @brief x轴的范围
      */
     int range = 0;
     /**
      * @brief yIsRescale,Y轴是否缩放
      */
     bool yIsRescale = true;
     /**
      * @brief 当Y轴不需要自动缩放时，使用这两个值
      */
     double yStart = 0;
     double yStop;
     double yRescaleRate = 1.2;
     SignalFeature  *feature = SignalFeature::getInstance();
};

#endif // JSPECTRUMWINDOW_H
