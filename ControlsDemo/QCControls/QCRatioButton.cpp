#include "QCRatioButton.h"

QCRatioButton::QCRatioButton(QWidget *parent)
    : QRadioButton(parent)
{
	setQCStyleSheet();
}

QCRatioButton::~QCRatioButton()
{
}

void QCRatioButton::setQCStyleSheet()
{
    /*image: url(:/images/radiobutton_unchecked.png);radiobutton_unchecked_hover;radiobutton_unchecked_pressed;
    radiobutton_checked;radiobutton_checked_hover;radiobutton_checked_pressed
	image: url(:/images/radiobutton_unchecked.png);radiobutton_unchecked_hover;radiobutton_unchecked_pressed;
    radiobutton_checked;radiobutton_checked_hover;radiobutton_checked_pressed
                            QRadioButton::indicator:unchecked:hover{background:yellow}\
                            QRadioButton::indicator:unchecked:pressed{background:blue}\
                            QRadioButton::indicator:checked:hover{background:white}\
                            QRadioButton::indicator:checked:pressed{background:black}*/
	this->setStyleSheet("QRadioButton{color:white;spacing: 5px;min-height:28px;min-width:60px;border:2px solid rgb(255, 87, 90,55)}\
                            QRadioButton::indicator{min-width: 25px;min-height: 25px;}\
                            QRadioButton::indicator:unchecked{image: url(:/ControlsDemo/Resources/pics/ratioOn.png)}\
                            QRadioButton::indicator:checked{image: url(:/ControlsDemo/Resources/pics/ratioOff.png)}");
}
void QCRatioButton::resizeEvent(QResizeEvent *event)
{
	/*根据宽度 调整字符font-size*/
	int width = this->width();
	QFont font;
	font.setPointSize(width / 200.0 * 15);
	font.setFamily("Lucida Sans Unicode");
	this->setFont(font);

	QWidget::resizeEvent(event);
}
