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
 */
    this->setStyleSheet("QListView{show-decoration-selected:1;background: #23a8ef;outline:0px}\
                        QListView::item{height:35px;border:2px solid #acacac;}\
                        QListView::item:selected{color:red;background-color: yellow;}\
                        QListView::item:hover{\
                        background:qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 : 1, stop : 0 #23FBFE, stop:1 #23DEF1); }\
                        QListView::text{background:black}\
                        QScrollBar:vertical{min-width:22px;min-height:22px;border:2px solid #acacac;background-color:#23a8ef;padding-top:24px;padding-bottom:24px}\
                        QScrollBar::handle:vertical{min-height:30px}\
                        QScrollBar::handle:vertical:hover{background:yellow}\
                        QScrollBar::handle:vertical:pressed{background:blue}\
                        QScrollBar::sub-line:vertical{border:2px solid grey;background:red;height:20px;subcontrol-position:top;}\
                        QScrollBar::add-line:vertical{border:2px solid grey;background:red;height:20px;subcontrol-position:bottom;}\
                        QScrollBar::sub-line:vertical:hover{border:2px solid grey;background:yellow;}\
                        QScrollBar::add-line:vertical:hover{border:2px solid grey;background:yellow;}\
                        QScrollBar::sub-line:vertical:pressed{border:2px solid grey;background:blue;}\
                        QScrollBar::add-line:vertical:pressed{border:2px solid grey;background:blue;}\
                        ");
    /*this->setStyleSheet("QListView::QScrollBar:vertical{width:8px;margin:0 5 0 5px;background-color:#23a8ef}\
                        QListView::QScrollBar:handle:vertical{background-color:45b8ff}\
                        ");
                        QScrollBar:up-arrow:horizontal,QScrollBar::down-arrow:horizontal{\
                        border: 2px solid grey;width: 3px;height: 3px;background:white;}\
                        QListView::item:selected:!active{\
                        background:qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 : 1,stop : 0 #ABAFE5, stop: 1 #8588B2);}\
                        QListView::item:selected:active{\
                        background:qlineargradient(x1 : 0, y1 : 0, x2 : 0, y2 : 1,stop : 0 #6a6ea9, stop: 1 #888dd9);}\
                        QScrollBar::add-line:vertical{border: 2px solid grey;background: #23a8ef;width: 20px;\
                        subcontrol-position:up;subcontrol-origin: margin}\
                        QScrollBar::sub-line:horizontal{border: 2px solid grey;background: #23a8ef;width:20px;\
                        subcontrol-position:down;subcontrol-origin:margin;}\
*/
    return;
}

