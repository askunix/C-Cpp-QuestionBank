#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(300,300);
    label = new MyLabel("click time: 0",this);
    btn = new QPushButton("click me",this);
    label->move(125,150);
    btn->move(125,110);
    connect(btn,SIGNAL(clicked()),label,SLOT(AddNum()));//连接信号和槽，信号函数与槽函数的参数列表必须完全相同
}

Dialog::~Dialog()
{
}
