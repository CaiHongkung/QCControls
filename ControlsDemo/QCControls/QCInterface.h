#pragma once
/*控件接口类：
 罗列了需要自定义控件实现的方法*/

class QCInterface 
{
public:
	QCInterface();
	~QCInterface();
private:
	virtual void setQCStyleSheet() = 0;
};
