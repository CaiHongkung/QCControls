#pragma once
#include "stdafx.h"
#include "ui_ControlsDemo.h"
#include "QCListView.h"
class ControlsDemo : public QMainWindow
{
	Q_OBJECT

public:
	ControlsDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::ControlsDemoClass ui;
	QStringListModel *listmodel;
	QCListView *combolistView;

	void setListModel();
private slots:
	void btnClick();
};
