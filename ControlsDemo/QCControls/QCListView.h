#pragma once
#include "stdafx.h"
#include <QCInterface.h>

class QCListView :
    public QListView,public QCInterface
{
public:
    QCListView(QWidget *parent = Q_NULLPTR);
    ~QCListView();
private:
	void setQCStyleSheet();
};

