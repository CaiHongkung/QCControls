#pragma once
/*�ؼ��ӿ��ࣺ
 ��������Ҫ�Զ���ؼ�ʵ�ֵķ���*/

class QCInterface 
{
public:
	QCInterface();
	~QCInterface();
	QString getQSSContent(QString url);

private:
	virtual void setQCStyleSheet() = 0;

};
