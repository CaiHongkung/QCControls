#include "QCCheckBox.h"

QCCheckBox::QCCheckBox(QWidget *parent)
    : QCheckBox(parent)
{
	setQCStyleSheet();
}

QCCheckBox::~QCCheckBox()
{
}
void QCCheckBox::setQCStyleSheet()
{
    //image:url(:/images/checkbox_unchecked.png);checkbox_unchecked_hover;checkbox_unchecked_pressed;checkbox_checked;checkbox_checked_hover
    //checkbox_checked_pressed;checkbox_indeterminate_hover;checkbox_indeterminate_pressed
        this->setStyleSheet("QCheckBox{spacing: 5px;}\
                            QCheckBox::indicator{min-width: 20px;min-height: 20px;}\
                            QCheckBox::indicator:unchecked{background:red}\
                            QCheckBox::indicator:unchecked:hover{background:yellow}\
                            QCheckBox::indicator:unchecked:pressed{background:blue}\
                            QCheckBox::indicator:checked{background:green}\
                            QCheckBox::indicator:checked:hover{background:white}\
                            QCheckBox::indicator:checked:pressed{background:black}\
                            QCheckBox::indicator:indeterminate:hover{background:lightblue}\
                            QCheckBox::indicator:indeterminate:pressed{background:lightred}");
}
