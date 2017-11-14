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
   /*image:url(:/images/checkbox_unchecked.png);checkbox_unchecked_hover;checkbox_unchecked_pressed;checkbox_checked;checkbox_checked_hover
    checkbox_checked_pressed;checkbox_indeterminate_hover;checkbox_indeterminate_pressed
                        QCheckBox::indicator:unchecked:hover{background:yellow}\
                        QCheckBox::indicator:unchecked:pressed{background:rgb(255, 87, 90)}\
                        QCheckBox::indicator:checked:hover{background:yellow}\
                        QCheckBox::indicator:checked:pressed{background:rgb(255, 87, 90);}\
                        QCheckBox::indicator:indeterminate:hover{background:lightblue}*/
    this->setStyleSheet("QCheckBox{spacing:2px;min-height:28px;min-width:60px;border:2px solid rgb(255, 87, 90,55)}\
                        QCheckBox::indicator{min-width: 25px;min-height: 25px;border-radius:3px}\
                        QCheckBox::indicator:unchecked{image:url(:/ControlsDemo/Resources/pics/checked.bmp)}\
                        QCheckBox::indicator:checked{image:url(:/ControlsDemo/Resources/pics/unChecked.bmp)}");
    return;
}
void QCCheckBox::resizeEvent(QResizeEvent *event)
{
    /*根据宽度 调整字符font-size*/
    int width = this->width();
    QFont font;
    font.setPointSize(width / 200.0 * 15);
    font.setFamily("Lucida Sans Unicode");
    this->setFont(font);

    QWidget::resizeEvent(event);
}
