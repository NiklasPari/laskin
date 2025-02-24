#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    QString s = ui->lineEdit->text();
    int n = s.toInt();
    n++;
    QString s2 = QString::number(n);
    ui->lineEdit->setText(s2);
}


void MainWindow::on_reset_clicked()
{
    QString s3 = QString("0");
    ui->lineEdit->setText(s3);

}
