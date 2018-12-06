#ifndef __MYLABEL_H__
#define __MYLABEL_H__

#include <QLabel>
#include <QString>

class MyLabel:public QLabel
{
    Q_OBJECT

public:

    MyLabel(const QString &text, QWidget *parent=0):QLabel(text,parent)
    {}

    ~MyLabel()
    {}

public slots:
    void AddNum()
    {
        QString str = this->text();
        QString str_num = str.mid(12);
        int num = str_num.toInt();
        num+=100;
        QString str_new = str.left(12) + QString::number(num);
        this->setText(str_new);
        this->adjustSize();
    }

};


#endif // MYLABEL_H
