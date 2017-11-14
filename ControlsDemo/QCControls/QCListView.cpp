#include "QCListView.h"


QCListView::QCListView(QWidget *parent) :
QListView(parent)
{
	this->setQCStyleSheet();
}


QCListView::~QCListView()
{
}

void QCListView::setQCStyleSheet()
{/*
 QScrollBar::sub-line:vertical 滚动条 向上按钮设置
 QScrollBar::add-line:vertical 滚动条 向下按钮设置
 outline : border 轮廓线
 text-align:left
 subcontrol-origin:content;subcontrol-position:center;
 QScrollBar::sub-line:vertical 滚动条 向上按钮设置
 QScrollBar::add-line:vertical 滚动条 向下按钮设置
 outline : border 轮廓线
 text-align:left
 subcontrol-origin:content;subcontrol-position:center;
 border:1px solid gray;
 border-image:url(:/ControlsDemo/Resources/pic/listHandleBgDisabled.png);
 QScrollBar::sub-page:vertical{background:#292929;}\
 QScrollBar::add-page:vertical{background:#292929;}\
 */
    this->setStyleSheet("QListView{outline:0px;background: #1e3c6e}\
                        QListView::item{color:white;min-height:30px;border-top:1px solid #63709c;}\
                        QListView::item:selected{color:red;background:#295dab;}\
						QListView::item:hover{background:#295dab;}" + getQSSContent(":/ControlsDemo/Resources/scrollbar.qss"));
    return;
}

