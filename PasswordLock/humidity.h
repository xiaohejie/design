#ifndef HUMIDITY_H
#define HUMIDITY_H

#include <QWidget>
#include <QDebug>
#include <QTime>
#include <qpainter.h>
#include <displaydata.h>

namespace Ui {
class Humidity;
}

class Humidity : public QWidget
{
    Q_OBJECT

public:
    explicit Humidity(QWidget *parent = nullptr);
    ~Humidity();

private:
    Ui::Humidity *ui;
    QColor m_background;
    QColor m_foreground;
    QString m_title;
    int m_maxValue, m_minValue;
    int m_startAngle,m_endAngle;
    int m_scaleMajor;
    int m_scaleMinor;
    double m_value;

    QString m_units;
    int m_precision;

protected:
    void paintEvent(QPaintEvent *);
    void drawCrown(QPainter *painter);
    void drawTitle(QPainter *painter);
    void drawScaleNum(QPainter *painter);
    void drawScale(QPainter *painter);
    void drawIndicator(QPainter *painter);
    void drawNumericValue(QPainter *painter);
};

#endif // HUMIDITY_H
