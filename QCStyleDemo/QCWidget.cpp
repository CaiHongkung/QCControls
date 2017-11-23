#include "stdafx.h"
#include "QCWidget.h"
QCWidget::QCWidget(QWidget *parent)
: QWidget(parent)
{
}

QCWidget::~QCWidget()
{
}
void QCWidget::paintEvent(QPaintEvent *pe)
{
	QPainter painter(this);
	//painter.setBrush(Qt::red);
	//QRect rect(pe->rect());
	//painter.drawRect(rect);

	QStyleOptionFocusRect option;
	option.initFrom(this);
	option.backgroundColor = Qt::red;

	style()->drawPrimitive(QStyle::PE_FrameFocusRect, &option, &painter, this);

}

void QCWidget::resizeEvent(QResizeEvent *e)
{
	QWidget::resizeEvent(e);
}
