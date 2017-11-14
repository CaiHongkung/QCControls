#include "stdafx.h"
#include "QCInterface.h"

QCInterface::QCInterface()
{
}

QCInterface::~QCInterface()
{
}
QString QCInterface::getQSSContent(QString url)
{
	QFile qssScrollBar(url);
	qssScrollBar.open(QFile::ReadOnly);
	return qssScrollBar.readAll();
}
