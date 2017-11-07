#pragma once
#include"stdafx.h"
#include<QCInterface.h>
class QCComboBox : public QComboBox,public QCInterface
{
    Q_OBJECT

public:
    QCComboBox(QWidget *parent);
    ~QCComboBox();
    void setQCContolStyleSheet();

};
