#include "mainwindow.h"
#include "ui_mainwindow.h"
int n1;
int n2;
bool mode = false;
QString operation;

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



void MainWindow::on_reset_clicked()
{
    QString reset = QString("");
    ui->num1->setText(reset);
     ui->num2->setText(reset);
      ui->result->setText(reset);
      mode = false;

}
void MainWindow::on_add_1_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "1";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "1";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_2_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "2";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "2";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_3_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "3";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "3";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_4_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "4";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "4";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_5_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "5";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "5";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_6_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "6";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "6";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_7_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "7";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "7";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_8_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "8";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "8";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_9_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "9";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "9";
        ui->num2->setText(s2);
    }
}

void MainWindow::on_add_0_clicked()
{
    if (mode == false) {
        QString s1 = ui->num1->text();
        s1 += "0";
        ui->num1->setText(s1);
    }
    if (mode == true) {
        QString s2 = ui->num2->text();
        s2 += "0";
        ui->num2->setText(s2);
    }
}


void MainWindow::on_add_enter_clicked()
{
    int n1 = ui->num1->text().toInt();
    int n2 = ui->num2->text().toInt();
    int result = 0;

    if (operation == "+") {
        result = n1 + n2;
    }
    else if (operation == "-") {
        result = n1 - n2;
    }
    else if (operation == "*") {
        result = n1 * n2;
    }
    else if (operation == "/") {
        if (n2 != 0) {
            result = n1 / n2;
        } else {
            ui->num1->setText("Error");
            return;
        }
    }
     ui->result->setText(QString::number(result));

}



void MainWindow::on_add_plus_clicked()
{
    mode = true;
    operation = "+";
}


void MainWindow::on_add_minus_clicked()
{

    mode = true;
    operation = "-";
}


void MainWindow::on_add_times_clicked()
{

    mode = true;
    operation = "*";
}


void MainWindow::on_add_divide_clicked()
{

    mode = true;
    operation = "/";
}


void MainWindow::on_num1_cursorPositionChanged(int arg1, int arg2)
{

}


void MainWindow::on_num2_cursorPositionChanged(int arg1, int arg2)
{

}

