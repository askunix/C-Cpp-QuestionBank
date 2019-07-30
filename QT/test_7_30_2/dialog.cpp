#include "dialog.h"
#include <QGridLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    label1 = new QLabel(this);
    label1->setText("输入");

    lineEdit=new QLineEdit(this);
    label2 = new QLabel(this);
    button = new QPushButton(this);
    button->setText(tr("计算"));
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label1, 0, 0);
    mainLayout->addWidget(lineEdit, 0, 1);
    mainLayout->addWidget(label2, 1, 0);
    mainLayout->addWidget(button, 1, 1);

    connect(button, SIGNAL(clicked()), this, SLOT(showArea()));
}

Dialog::~Dialog()
{

}


void Dialog::showArea()
{
    bool ok;
    QString tempVal;
    QString valStr = lineEdit->text();
    int valInt = valStr.toInt(&ok);
    double area = valInt * valInt * 3.14;
    label2->setText(tempVal.setNum(area));
}

