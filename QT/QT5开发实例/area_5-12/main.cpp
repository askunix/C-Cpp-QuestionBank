#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;   //创建一个对话框对象
    w.show();//创建的对话框默认不可见，调用show()函数使它变为可见。

    return a.exec(); //程序进入消息循环，等待可能的输入进行响应。就是main函数将控制权交给QT
    //，在exec()函数中，QT接收并处理用户和系统的事件并且将他们传递给适当的窗口部件。
}
