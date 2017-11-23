#include "stdafx.h"
#include "QCTabWidget.h"

QCTabWidget::QCTabWidget(QWidget *parent)
    : QTabWidget(parent)
{
}

QCTabWidget::~QCTabWidget()
{
}
void QCTabWidget::changeTabPosition(Qt::DockWidgetArea area)
{
    switch (area)
    {
    case Qt::LeftDockWidgetArea:
        setTabPosition(QTabWidget::West);
            break;
    case Qt::RightDockWidgetArea:
        setTabPosition(QTabWidget::East);
        break;
    case Qt::BottomDockWidgetArea:
        setTabPosition(QTabWidget::South);
        break;
    case Qt::TopDockWidgetArea:
        setTabPosition(QTabWidget::North);
        break;
    }


}