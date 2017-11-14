#pragma once

#include"QCInterface.h"
class QCTreeView : public QTreeView,public QCInterface
{
    Q_OBJECT

public:
    QCTreeView(QWidget *parent = Q_NULLPTR);
    ~QCTreeView();
private:
    void setQCStyleSheet();
};
