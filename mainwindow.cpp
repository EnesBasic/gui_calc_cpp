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
    double a,b,c;

    a=ui->lineEdit->text().toDouble();
    b=ui->lineEdit_2->text().toDouble();
    c=a+b;
    ui->lineEdit_3->setText(QString::number(c));
 }

void MainWindow::on_pushButton_3_clicked()
{
    double a,b,c;

    a=ui->lineEdit->text().toDouble();
    b=ui->lineEdit_2->text().toDouble();
    c=a-b;
    ui->lineEdit_3->setText(QString::number(c));
}

void MainWindow::on_pushButton_2_clicked()
{
    double a,b,c;

    a=ui->lineEdit->text().toDouble();
    b=ui->lineEdit_2->text().toDouble();
    c=a*b;
    ui->lineEdit_3->setText(QString::number(c));
}

void MainWindow::on_pushButton_4_clicked()
{
    double a,b,c;

    a=ui->lineEdit->text().toDouble();
    b=ui->lineEdit_2->text().toDouble();
    c=a/b;
    ui->lineEdit_3->setText(QString::number(c));
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));
}
