#pragma once
#include "stdafx.h"

class QCListView :
    public QListView
{
public:
    QCListView(QWidget *parent = Q_NULLPTR);
    ~QCListView();
private:
    void setListStyle();
};

