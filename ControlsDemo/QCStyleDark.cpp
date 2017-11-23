#include "stdafx.h"
#include "QCStyleDark.h"

QCStyleDark::QCStyleDark(QStyle *parent)
    : QProxyStyle(parent)
{
    setBaseStyle(QStyleFactory::create("Fusion"));
}

QCStyleDark::~QCStyleDark()
{
}
void QCStyleDark::drawControl(ControlElement element, const QStyleOption *option, QPainter *painter, const QWidget *widget) const
{
    switch (element){
    case CE_TabBarTabShape:
    {
        QStyleOptionTab myTabOption;
        const QStyleOptionTab *tabOption = qstyleoption_cast<const QStyleOptionTab *>(option);
        myTabOption = *tabOption;
        if (tabOption)
        {
            drawTab(myTabOption, painter);
        }
    }
    break;
    case CE_TabBarTabLabel:
    {
        QStyleOptionTab myTabOption;
        const QStyleOptionTab *tabOption = qstyleoption_cast<const QStyleOptionTab *>(option);
        myTabOption = *tabOption;
        if (tabOption){
            drawTabText(myTabOption, painter);
        }
    }
    break;
    default:
        QProxyStyle::drawControl(element, option, painter, widget);

    }

}
void QCStyleDark::polish(QWidget *widget)
{

}
void QCStyleDark::drawPrimitive(PrimitiveElement element, const QStyleOption *option,
    QPainter *painter, const QWidget *widget) const
{
    switch (element)
    {
    case PE_FrameTabWidget:
    {
        /*QStyleOptionTab myTabOption;
        const QStyleOptionTab *tabOption = qstyleoption_cast<const QStyleOptionTab *>(option);
        myTabOption = *tabOption;*/
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }
    break;
    default:
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }

}


void QCStyleDark::drawTab(QStyleOptionTab &myTabOption, QPainter *painter) const
{
    painter->save();
    int delta = (myTabOption.state & State_MouseOver) ? 64 : 0;
    QColor semiTransparentWhite(255, 255, 255, 60 + delta);
    QColor semiTranparentBlack(0, 0, 0, delta);
    QPixmap backgroundImage;
    QRect pixmapRect;
    QRect paintRect;
    if (myTabOption.state & State_Enabled)
    {
        backgroundImage = QPixmap(":/ControlsDemo/Resources/pics/tabItemDark.png");
        pixmapRect = backgroundImage.rect();//.translated((myTabOption.rect.topLeft())).translated(+2,-6);
        paintRect = myTabOption.rect; visualRect(myTabOption.direction, myTabOption.rect, pixmapRect);
        paintRect.translate(2, 2);
        paintRect.setWidth(paintRect.width() - 4);
        paintRect.setHeight(paintRect.height() - 4);

    }
    if (myTabOption.state & State_Selected)
    {
        backgroundImage = QPixmap(":/ControlsDemo/Resources/pics/tabItemSelected.png");
        pixmapRect = backgroundImage.rect();
        paintRect = myTabOption.rect; visualRect(myTabOption.direction, myTabOption.rect, pixmapRect);
        paintRect.setWidth(paintRect.width() - 2);
        paintRect.setHeight(paintRect.height() - 2);
    }
    painter->drawPixmap(paintRect, backgroundImage, pixmapRect);

    painter->restore();
}

void QCStyleDark::drawTabText(QStyleOptionTab &myTabOption, QPainter * painter) const
{
    painter->save();
    painter->setPen(Qt::white);
    if (&myTabOption && (myTabOption.features & QStyleOptionTab::HasFrame))
    {
        painter->setPen(Qt::white);
    }
    else
    {
    }
    if (myTabOption.palette.currentColorGroup() != QPalette::Disabled)
    {
        if (myTabOption.state & State_Selected)
        {
            painter->setPen(Qt::yellow);
        }
    }
    QPoint textPosition(myTabOption.rect.x() + 18, myTabOption.rect.center().y() + 8);
    painter->drawText(textPosition, myTabOption.text);
    painter->restore();
}
QSize QCStyleDark::sizeFromContents(ContentsType type, const QStyleOption *option, const QSize &contentsSize, const QWidget *widget) const
{
    switch (type)
    {
    case QStyle::CT_TabBarTab:
        return QSize(124, 44);
        break;
    default:
        return QProxyStyle::sizeFromContents(type, option, contentsSize, widget);
    }
}
int QCStyleDark::pixelMetric(PixelMetric metric, const QStyleOption *option, const QWidget *widget) const
{
    switch (metric)
    {
    case QStyle::PM_TabBarBaseOverlap://tab bar 和页的重合
        return 3;
    default:
        return QProxyStyle::pixelMetric(metric, option, widget);
    }
}