#include "QCButton.h"

QCButton::QCButton(QWidget *parent ):
QPushButton(parent)
{
	setQCStyleSheet();
}


QCButton::~QCButton()
{
}
void QCButton::setQCStyleSheet()
{
	/*��������Ч����Ҫʹ��border -image ����ʹ��background-image*/
	this->setStyleSheet("QPushButton{border-image:url(:/ControlsDemo/Resources/pic/btn.png)}\
						QPushButton:hover{border-image:url(:/ControlsDemo/Resources/pic/btnhover.png)}\
						QPushButton:pressed{border-image:url(:/ControlsDemo/Resources/pic/btnpressed.png)}");
}
