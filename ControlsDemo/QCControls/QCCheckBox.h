#pragma once

#include <QCheckBox>
#include"QCInterface.h"
class QCCheckBox : public QCheckBox,public QCInterface
{
    Q_OBJECT

public:
    QCCheckBox(QWidget *parent);
    ~QCCheckBox();
protected:
	void resizeEvent(QResizeEvent *event) override;
private:
	void setQCStyleSheet();
};
