#pragma once

#include "qradiobutton.h"
#include"QCInterface.h"
class QCRatioButton : public QRadioButton, public QCInterface
{
    Q_OBJECT

public:
    QCRatioButton(QWidget *parent);
    ~QCRatioButton();
private:
	void setQCStyleSheet();
};
