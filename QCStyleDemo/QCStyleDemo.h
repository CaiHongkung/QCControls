#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QCStyleDemo.h"

class QCStyleDemo : public QMainWindow
{
	Q_OBJECT

public:
	QCStyleDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QCStyleDemo ui;
};
