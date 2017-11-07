#include "QCRatioButton.h"

QCRatioButton::QCRatioButton(QWidget *parent)
    : QRadioButton(parent)
{
    setQCContolStyleSheet();
}

QCRatioButton::~QCRatioButton()
{
}

void QCRatioButton::setQCContolStyleSheet()
{
    /*image: url(:/images/radiobutton_unchecked.png);radiobutton_unchecked_hover;radiobutton_unchecked_pressed;
    radiobutton_checked;radiobutton_checked_hover;radiobutton_checked_pressed*/
            this->setStyleSheet("QRadioButton{spacing: 5px;}\
                            QRadioButton::indicator{min-width: 25px;min-height: 25px;}\
                            QRadioButton::indicator:unchecked{background:red}\
                            QRadioButton::indicator:unchecked:hover{background:yellow}\
                            QRadioButton::indicator:unchecked:pressed{background:blue}\
                            QRadioButton::indicator:checked{background:green}\
                            QRadioButton::indicator:checked:hover{background:white}\
                            QRadioButton::indicator:checked:pressed{background:black}");

}
