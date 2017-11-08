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
                        QListView::item:hover{background:#295dab;}\
                        QScrollBar:vertical{min-width:24px;min-height:80px;background:#1e3c6e;margin:24px 0 24px 0;}\
                        QScrollBar::handle:vertical{margin:2px;height:30px;background:#295dabaa;border-radius:5px}\
                        QScrollBar::handle:vertical:hover{background:#295dab88}\
                        QScrollBar::handle:vertical:pressed{background:#295dabaa}\
                        QScrollBar::sub-line:vertical{border-image:url(:/ControlsDemo/Resources/pic/listUpArrow.png);height:24px;subcontrol-position:top;subcontrol-origin:margin}\
                        QScrollBar::add-line:vertical{border-image:url(:/ControlsDemo/Resources/pic/listDownArrow.png);height:24px;subcontrol-position:bottom;subcontrol-origin:margin}\
                        QScrollBar::sub-page:vertical{background:#1e3c6e;}\
                        QScrollBar::add-page:vertical{background:#1e3c6e;}");
    return;
}

