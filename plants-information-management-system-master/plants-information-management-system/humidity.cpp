//注释同tempature.cpp
/*加速度窗口*/
#include "humidity.h"
#include "ui_humidity.h"
#include <QMessageBox>
#include "mainwindow.h"

extern int Serial_Flag;
extern int ESP8266_Flag;

Humidity::Humidity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Humidity)
{
    Serial_H=0;
    ESP8266_H=0;
    Serial_Flag=0;
    ESP8266_Flag=0;

    ui->setupUi(this);
    m_foreground = Qt::magenta;
    m_background = Qt::black;
    m_title = "加速度";
    m_startAngle = 45;
    m_endAngle = 45;
    m_scaleMajor = 20;
    m_minValue = -10;
    m_maxValue = 10;
    m_scaleMinor = 5;
    m_value=Serial_H;
    m_units = "mm/s^2";
    m_precision = 0;
}

Humidity::~Humidity()
{
    delete ui;
}
void Humidity::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QFont font("宋体", 14);
    painter.setFont(font);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width() / 2, height() / 2);
    int side = qMin(width(), height());
    painter.scale(side / 400.0, side / 400.0);

    drawCrown(&painter);
    drawScaleNum(&painter);
    drawScale(&painter);
    drawTitle(&painter);
    drawNumericValue(&painter);
    drawIndicator(&painter);
}


void Humidity ::drawCrown(QPainter *painter)
{
    painter->save();
    int radius = 200;
    painter->setBrush(m_background = QColor(20, 20, 20));
    QLinearGradient lg1(0, -220, 0, 220);
    lg1.setColorAt(0, Qt::darkBlue);
    lg1.setColorAt(1, QColor(20, 20, 20));
    painter->setBrush(lg1);
    painter->setPen(Qt::NoPen);
    painter->drawEllipse(-radius, -radius, radius << 1, radius << 1);
    painter->setBrush(m_background = QColor(20, 20, 20));
    painter->drawEllipse(-180,-180,360,360);
    painter->restore();
}

void Humidity ::drawScaleNum(QPainter *painter)
{
    painter->save();
    painter->setPen(QPen(QColor(255,255,255)));
    QFontMetricsF fm(this->font());
    int radius = 200;
    int r=(int)(radius*0.8);
    int Angle=45;
    int gap = (360-Angle*2) / 10;
    for(int i=0; i<=10; i+=1)
    {
        int angle = 90+Angle+gap*i;
        float angleArc =( angle % 360) * M_PI / 180;
        int x = (r)*cos(angleArc);
        int y = (r)*sin(angleArc);
        QString value =QString( "%1" ).arg(i*2-10);
        int h = fm.size(Qt::TextSingleLine,value).height();
        x = x -10;
        y = y + h/2;
        painter->drawText(QPointF(x, y),value);
    }
    painter->restore();
}


void Humidity ::drawTitle(QPainter *painter)
{
    painter->save();
    painter->setPen(QColor(220,200,200,200));
    //painter->setBrush(m_foreground);
    QString str(m_title);
    QFontMetricsF fm(this->font());
    painter->drawText(-30, -50, str);
    painter->restore();
}

void Humidity ::drawScale(QPainter *painter)
{
    painter->save();
    painter->rotate(m_startAngle);
    int steps = (m_scaleMajor * m_scaleMinor);
    double angleStep = (360.0 - m_startAngle - m_endAngle) / steps;
    for (int i = 0; i <= steps; i++)
    {
        if (i % m_scaleMinor == 0)
        {
            QPen pen ;
            pen.setColor(Qt::lightGray);
            pen.setWidth(2);
            painter->setPen(pen);
            painter->drawLine(0, 125, 0, 145);
        }
        else
        {
            QPen pen ;
            pen.setColor(Qt::darkGray);
            pen.setWidth(1);
            painter->setPen(pen);
            painter->drawLine(0, 125, 0, 135);
        }
        painter->rotate(angleStep);
    }
    painter->restore();
}

void Humidity ::drawIndicator(QPainter *painter)
{
    painter->save();
    QPolygon pts;
    pts.setPoints(5,-2,0,-4,30,0,120,4,30,2,0);
    painter->rotate(m_startAngle);
    double degRotate =  (360.0 - m_startAngle - m_endAngle)/(m_maxValue - m_minValue)*(m_value - m_minValue);
    painter->rotate(degRotate);
    QRadialGradient haloGradient(0, 0, 60, 0, 0);
    haloGradient.setColorAt(0, QColor(60,60,60));
    haloGradient.setColorAt(1, QColor(160,160,160));
    painter->setPen(Qt::white);
    painter->setBrush(haloGradient);
    painter->drawConvexPolygon(pts);
    painter->restore();

    QColor niceBlue(150, 150, 200);
    QConicalGradient coneGradient(0, 0, -90.0);
    coneGradient.setColorAt(0.0, Qt::darkGray);
    coneGradient.setColorAt(0.2, niceBlue);
    coneGradient.setColorAt(0.5, Qt::white);
    coneGradient.setColorAt(1.0, Qt::darkGray);
    painter->setPen(Qt::NoPen);
    painter->setBrush(coneGradient);
    painter->drawEllipse(-8, -8, 16, 16);
}

void Humidity ::drawNumericValue(QPainter *painter)
{
    if(Serial_Flag)
        qDebug() << "加速度" << Serial_H;
        m_value=Serial_H;
    if(ESP8266_Flag)
        m_value=ESP8266_H;
    QString str=" ";
    str=str.number(m_value,'g',4);
    QFontMetricsF fm(font());
    double w = fm.size(Qt::TextSingleLine,str).width();
    QFont font("times", 40);
    painter->setFont(font);
    painter->setPen(Qt::lightGray);
    painter->drawText(-w-20 , 100, str);
}

