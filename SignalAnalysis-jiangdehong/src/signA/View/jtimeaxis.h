#ifndef JTIMEAXIS_H
#define JTIMEAXIS_H

#include <QWidget>
#include"qcustomplot.h"
#include "interface/itimeaxis.h"
#include "mainwindow.h"
class MainWindow;
class JTimeAxis : public QWidget,public ITimeAxis
{
    Q_OBJECT
public:
    explicit JTimeAxis(QWidget *parent = nullptr);
    void init();
    void clearTimeAxis();
    /**
     * @brief start,自动刷新缓冲区的内容
     * @param interal
     */
    void start(int interal);
    void stop();
    void pause();
    void resume();
    /**
     * @brief refresh,手动刷新
     * @param value
     */
    void refresh(AnalysisResult &value);

    QSize sizeHint() const override;
    void resizeEvent(QResizeEvent *event) override;


signals:
private:
    void refesh();

private:
    QCustomPlot *plot;
//    QCPGraph *graph;
    QCPAxisRect *axisRect;
    QSharedPointer<QCPAxisTickerDateTime> trickerTime;
    QVector<QCPBars *> barVec;
    QTime currentTime ;
    double startTime=0;
    QVector<AnalysisResult> analysisBuffer;

    double barWidth = 1;
    int range=60 * 10;

    MainWindow *mw;

    QTimer *timer;

    std::shared_ptr<QVector<AnalysisResult>> anares;

    //第几祯
    int count = 0;
    //缓冲区
    std::mutex mu;
    // ITimeAxis interface
public:
    void openTimeAxis() override;
    void closeTimeAxis() override;

    void addDataTimeAxis(QVector<AnalysisResult> res) override;
    void addDataTimeAxis(AnalysisResult) override;
    MainWindow *getMw() const;
    void setMw(MainWindow *value);


};

#endif // JTIMEAXIS_H
