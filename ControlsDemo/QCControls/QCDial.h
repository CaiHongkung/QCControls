#pragma once
/*
���໯QDial���Ի�Dial���
*/

class QCDial : public QDial
{
	Q_OBJECT

public:
	QCDial(QWidget *parent);
	~QCDial();

protected:
	void paintEvent(QPaintEvent *pe);
	void resizeEvent(QResizeEvent *e);

	//void mouseMoveEvent(QMouseEvent *e);
	//void mousePressEvent(QMouseEvent *e);
	//void mouseReleaseEvent(QMouseEvent *e);
	//void sliderChange(SliderChange change);

	int valueFromPoint(const QPoint &p);
};
