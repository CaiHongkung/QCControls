#pragma once

class QCWidget : public QWidget
{
	Q_OBJECT

public:
	QCWidget(QWidget *parent=NULL);
	~QCWidget();
protected:
	void paintEvent(QPaintEvent *pe);
	void resizeEvent(QResizeEvent *e);


};
