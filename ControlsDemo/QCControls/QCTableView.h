#pragma once

#include "QCInterface.h"

class QCTableView : public QTableView,public QCInterface
{
    Q_OBJECT

public:
    QCTableView(QWidget *parent = Q_NULLPTR);
    ~QCTableView();
private:
    void setQCStyleSheet();

};
