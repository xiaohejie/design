#ifndef TEMPATURE_H
#define TEMPATURE_H

#include <QWidget>
#include <QWidget>
#include <QDebug>
#include <QTime>
#include <qpainter.h>
#include <displaydata.h>

namespace Ui {
class tempature;
}

class tempature : public QWidget
{
    Q_OBJECT

public:
    explicit tempature(QWidget *parent = nullptr);
    ~tempature();

private:
    Ui::tempature *ui;
    QColor m_background;
    QColor m_foreground;
    QString m_title;
    int m_maxValue, m_minValue;
    int m_startAngle,m_endAngle;
    int m_scaleMajor;
    int m_scaleMinor;
    double m_value;
    QString m_units;


protected:
    void paintEvent(QPaintEvent *);
    void drawCrown(QPainter *painter);
    void drawTitle(QPainter *painter);
    void drawScaleNum(QPainter *painter);
    void drawScale(QPainter *painter);
    void drawIndicator(QPainter *painter);
    void drawNumericValue(QPainter *painter);
};

#endif // TEMPATURE_H
