#include "QCTableView.h"

QCTableView::QCTableView(QWidget *parent)
    : QTableView(parent)
{
    setQCStyleSheet();
}

QCTableView::~QCTableView()
{
}
void QCTableView::setQCStyleSheet()
{
    /*QHeaderView::down-arrow{image: url(:/Demo/Resources/pics/listDownArrow.bmp);}\
                  QHeaderView::up-arrow{image:url(:/Demo/Resources/pics/listUpArrow.bmp
                  QTbaleView{color:white;background-color:#1e3c6e;outline:0px}*/
    setStyleSheet("*{background:#1e3c6e;color:white}\
                  QHeaderView::section:horizontal{background:#1e3c6e;color:white;padding-left:8px;padding-top:5px;border:1px solid gray;min-height:30px}\
                  QHeaderView::section:vertical{background:#1e3c6e;color:white;padding-left:5px;padding-top:3px;border:1px solid gray;min-width:30px}\
                  QTableView{outline:0px;gridline-color:gray;}\
                  QTableView::item{border:0px solid white;}\
                  QTableView::item:hover{background-color:#2e4c7c;}\
                  QTableView::item:selected{background-color:#3e5c7c;}\
                  QTableView::item:editable{background-color:#3e5c7c;color:red}\
                  QTableView QTableCornerButton::section{background-color:#1e3c6e;}"+getQSSContent(":/ControlsDemo/Resources/scrollbar.qss"));
}
