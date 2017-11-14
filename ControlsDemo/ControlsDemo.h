#pragma once
#include "stdafx.h"
#include "ui_ControlsDemo.h"
#include "QCListView.h"
#include ".\Models\QCEditableSQLModel.h"
#include "QCButton.h"

class ControlsDemo : public QMainWindow
{
	Q_OBJECT

public:
	ControlsDemo(QWidget *parent = Q_NULLPTR);
	ControlsDemo(QApplication& app, QWidget *parent = Q_NULLPTR);

private:
	Ui::ControlsDemoClass ui;
	QStringListModel *listmodel;
	QCListView *combolistView;

	QStandardItemModel model;

	QFileSystemModel systemModel;
	QCEditableSQLModel editableTableModel;
	void setListModel();
	void setTableModel();

	void setTreeModel(QApplication &app);


private slots:
	void btnClick();
};
