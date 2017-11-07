#pragma once
#include "stdafx.h"
#include "ui_ControlsDemo.h"
class ControlsDemo : public QMainWindow
{
	Q_OBJECT

public:
	ControlsDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::ControlsDemoClass ui;
};
