#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
  bool ok;
  QString tempStr;
  QString valStr = ui->lineEdit_r->text();
  int valueInt = valStr.toInt(&ok);
  double area = valueInt * valueInt *3.14;
  ui->lineEdit_2->setText(tempStr.setNum(area));

}

void MainWindow::on_lineEdit_r_textChanged(const QString &arg1)
{
   Q_UNUSED(arg1);
#if 0
  bool ok;
  QString tempStr;
  QString valueStr = ui->lineEdit_r->text();
  int val_Int = valueStr.toInt(&ok);
  double area = val_Int * val_Int *3.14;
  ui->lineEdit_2->setText(tempStr.setNum(area));
#endif
}
