#include "QCTreeView.h"

QCTreeView::QCTreeView(QWidget *parent)
    :QTreeView(parent)
{
    this->setQCStyleSheet();
}

QCTreeView::~QCTreeView()
{
}
void QCTreeView::setQCStyleSheet()
{
    /*QCTreeView::branch:adjoins-item 分支的连接指示符
    QHeaderView::section 表头设置*/
    this->setStyleSheet("QHeaderView::section{color:white;background-color: #1e3c6e;padding-left:8px;\
                        padding-top:5px;border:1px solid gray;min-height:30px}\
                        QCTreeView{alternate-background-color: blue;background-color: #1e3c6e; outline:0px; color:white }\
                        QCTreeView::item{border:1px solid transparent; border-bottom-color:gray;min-height:30px}\
                        QCTreeView::item:hover{background-color: #1e3c6e88;}\
                        QCTreeView::item:selected{background-color: #1e3c6e55;}\
                        QCTreeView::branch:adjoins-item {image:url(:/ControlsDemo/Resources/pics/rightArrow.png)}\
                        QCTreeView::branch:open{image:url(:/ControlsDemo/Resources/pics/rightDownArrow.png)}"+getQSSContent(":/ControlsDemo/Resources/scrollbar.qss"));
}
