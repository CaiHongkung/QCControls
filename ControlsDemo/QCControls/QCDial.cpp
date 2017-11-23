#include "stdafx.h"
#include "QCDial.h"
#include <qmath.h>


QCDial::QCDial(QWidget *parent)
	: QDial(parent)
{
}

QCDial::~QCDial()
{
}
void QCDial::paintEvent(QPaintEvent *pe)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing, this);
	painter.setRenderHint(QPainter::SmoothPixmapTransform);//消除锯齿-平滑处理
	QPixmap background(":/ControlsDemo/Resources/pics/dialBg.png");
	QPixmap dial(":/ControlsDemo/Resources/pics/dial.png");

	QRect sourceRect(0,0,640,640);
	QRect rect(0, 0, this->width(), this->height());
	int width = this->width();
	int height = this->height();
	if (width > height)
	{
		rect.setX((width - height) / 2);
		rect.setWidth(height);
	}
	else
	{
		rect.setY((height-width) / 2);
		rect.setHeight(width);
	}

	painter.drawPixmap(rect, background, sourceRect);
	painter.drawPixmap(rect, dial, sourceRect);



}
void QCDial::resizeEvent(QResizeEvent *e)
{
	QDial::resizeEvent(e);
}
//void QCDial::mouseMoveEvent(QMouseEvent *e)
//{
//
//}
//void QCDial::mousePressEvent(QMouseEvent *e)
//{
//
//}
//void QCDial::mouseReleaseEvent(QMouseEvent *e)
//{
//
//}
//void QCDial::sliderChange(SliderChange change)
//{
//	QDial::sliderChange(change);
//}
