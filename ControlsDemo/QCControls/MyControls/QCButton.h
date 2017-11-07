#pragma once

#ifndef QCBUTTON0_H
#define QCBUTTON0_H

#include "stdafx.h"

class QCButton : public QPushButton
{
    Q_OBJECT

public:
    QCButton(QWidget *parent = 0);
    QCButton(const QString & text, QWidget * parent = 0);
    QCButton(const QIcon & icon, const QString & text, QWidget * parent = 0);
private:
    void setButtonStyle();
signals:
    void myClick();

};
#endif
