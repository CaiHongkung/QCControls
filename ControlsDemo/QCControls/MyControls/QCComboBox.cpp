#include "QCComboBox.h"

QCComboBox::QCComboBox(QWidget *parent)
    :QComboBox(parent)
{
    setQCContolStyleSheet();
}

QCComboBox::~QCComboBox()
{
}
void QCComboBox::setQCContolStyleSheet()
{   /* QComboBox::drop-down 下拉按钮设置*/
    /* QComboBox::down-arrow:on shift the arrow when popup is open */
    this->setStyleSheet("QComboBox{background:#23a8ef;border:2px solid gray;border-radius:3px}\
                        QComboBox::editable{background:#23b8ff;margin-right:0px;}\
                        QComboBox::drop-down{border:2px solid gray;border-radius:3px;min-width:30px;subcontrol-origin:margin;image:url(:/Demo/Resources/down1.png);}\
                        QComboBox::drop-down:pressed{position:relative;top:1px;left:1px}\
                        QComboBox::down-arrow:on {top: 1px;left: 1px}\
                        ");
}

