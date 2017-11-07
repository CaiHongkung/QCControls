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
	/*背景拉伸效果需要使用border -image 不能使用background-image*/
	this->setStyleSheet("QPushButton{border-image:url(:/ControlsDemo/Resources/pic/btn.png)}\
						QPushButton:hover{border-image:url(:/ControlsDemo/Resources/pic/btnhover.png)}\
						QPushButton:pressed{border-image:url(:/ControlsDemo/Resources/pic/btnpressed.png)}");
}
