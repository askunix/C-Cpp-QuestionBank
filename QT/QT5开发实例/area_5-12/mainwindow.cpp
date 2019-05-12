#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<string.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->radiusLineEdit->text();
    int valueInt = valueStr.toInt(&ok);
    double area = valueInt * valueInt * 3.14159265;
    ui->areaLabel_2->setText(tempStr.setNum(area));
}



void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    bool ok_2;
    QString tempStr_2;
    QString valueStr_2 = ui->lineEdit->text();
    int valueInt_2 = valueStr_2.toInt(&ok_2);
    double area_2 = valueInt_2 * valueInt_2 * 3.14159265;
    ui->label_2->setText(tempStr_2.setNum(area_2));
}






