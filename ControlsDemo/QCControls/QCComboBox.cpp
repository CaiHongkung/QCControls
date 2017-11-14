#include "QCComboBox.h"

QCComboBox::QCComboBox(QWidget *parent)
    :QComboBox(parent)
{
	setQCStyleSheet();
}

QCComboBox::~QCComboBox()
{
}
void QCComboBox::setQCStyleSheet()
{   /* QComboBox::drop-down 下拉按钮设置*/
    /* QComboBox::down-arrow:on shift the arrow when popup is open */
    this->setStyleSheet("QComboBox{background:#1e3c6e;color:white;border:2px solid gray;border-radius:3px}\
                        QComboBox::editable{background:#23b8ff;}\
                        QComboBox::drop-down{border-radius:3px;min-width:30px;\
                        border-image:url(:/ControlsDemo/Resources/pics/DownArrow.bmp);}\
                        QComboBox::drop-down:pressed{position:relative;top:1px;left:1px}\
                        QComboBox::drop-down:on {top: 1px;left: 1px}\
                        ");;
}

