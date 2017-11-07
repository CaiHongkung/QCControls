#pragma once
#include "stdafx.h"
/*接口类：
定义了所有控件必需实现的接口*/
class QCInterface
{
public:
    QCInterface();
    ~QCInterface();
    virtual void setQCContolStyleSheet()=0;
};
