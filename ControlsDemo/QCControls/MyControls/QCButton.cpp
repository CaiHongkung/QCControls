#include "QCButton.h"


QCButton::QCButton(QWidget *parent) :
QPushButton(parent)
{
    this->setButtonStyle();
}

QCButton::QCButton(const QString &text, QWidget *parent) :
QPushButton(text, parent)
{
    this->setButtonStyle();
}

QCButton::QCButton(const QIcon &icon, const QString &text, QWidget *parent) :
QPushButton(icon, text, parent)
{
    this->setButtonStyle();

}

void QCButton::setButtonStyle()
{
    //border-image:url(:/button.png)3 5 3 5;
    //text-align:left ×Ö·û´®Î»ÖÃ
    this->setStyleSheet("QCButton{background:rgb(65, 105, 255);color:white;border:4px white; border-radius:10px; margin-top:3px;}\
                        QCButton:Hover{background:rgb(65, 105, 255,188);border:4px white;border-radius:10px;margin-top:3px;}\
                        QCButton:Pressed{ background:rgb(65, 89, 171); border:4px lightblue;border-radius:10px; margin-top:3px;}");

    int width = this->geometry().width();
    QFont font;
    font.setPointSize(width / 200.0 * 15);
    this->setFont(font);
    return;
}
