#include "stdafx.h"
#include "QCStyleDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QCStyleDemo w;
	w.show();
	return a.exec();
}
