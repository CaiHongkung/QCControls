#include "ControlsDemo.h"
#include "QCStyle.h"
int main(int argc, char *argv[])
{
	QApplication::setStyle(new QCStyle);
	QApplication a(argc, argv);
	ControlsDemo w(a);
	w.show();
	return a.exec();
}
