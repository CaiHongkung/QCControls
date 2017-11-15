#pragma once

#include "qradiobutton.h"
#include"QCInterface.h"
class QCRatioButton : public QRadioButton, public QCInterface
{
    Q_OBJECT

public:
    QCRatioButton(QWidget *parent);
    ~QCRatioButton();
protected:
	void resizeEvent(QResizeEvent *event) override;

private:
	void setQCStyleSheet();
};
