﻿#include "drilldownslice.h"

QT_CHARTS_USE_NAMESPACE

DrilldownSlice::DrilldownSlice(qreal value, QString prefix, QAbstractSeries *drilldownSeries)
    : m_drilldownSeries(drilldownSeries),
      m_prefix(prefix)
{
    setValue(value);
    updateLabel();
    setLabelFont(QFont("Arial", 8));
    connect(this, &DrilldownSlice::percentageChanged, this, &DrilldownSlice::updateLabel);
    connect(this, &DrilldownSlice::hovered, this, &DrilldownSlice::showHighlight);
}

DrilldownSlice::~DrilldownSlice()
{

}

QAbstractSeries *DrilldownSlice::drilldownSeries() const
{
    return m_drilldownSeries;
}

void DrilldownSlice::updateLabel()
{
    QString label = m_prefix;

    label += " "+QString::number(this->value());
    label += "株, ";
    label += QString::number(this->percentage() * 100, 'f', 1);
    label += "%";
    setLabel(label);
}

void DrilldownSlice::showHighlight(bool show)
{
    setLabelVisible(show);
    setExploded(show);
}

//#include "moc_drilldownslice.cpp"
