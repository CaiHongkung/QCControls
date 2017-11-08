#pragma once
#include "stdafx.h"
#include "QCInterface.h"
class QCButton :
	public QPushButton,public QCInterface
{
public:
	QCButton(QWidget *parent = Q_NULLPTR);
	~QCButton(); 
protected:
		void resizeEvent(QResizeEvent *event) override;
private:
	void setQCStyleSheet();
};