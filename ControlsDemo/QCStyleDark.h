#pragma once

#include <QProxyStyle> 
#include "QStyleFactory.h"
#include<QWidget>

class QCStyleDark : public QProxyStyle
{
    Q_OBJECT

public:
    QCStyleDark(QStyle *style = Q_NULLPTR);
    ~QCStyleDark();
    void drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget = Q_NULLPTR) const;
    void drawTabText(QStyleOptionTab &myTabOption, QPainter * painter) const;
    void drawTab(QStyleOptionTab &myTabOption, QPainter *painter) const;
    void drawPrimitive(PrimitiveElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const;
    int pixelMetric(PixelMetric metric, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
    void polish(QWidget *widget);
    QSize sizeFromContents(ContentsType type, const QStyleOption *option, const QSize &contentsSize, const QWidget *widget = Q_NULLPTR) const;

};
