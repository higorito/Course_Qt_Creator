#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QDesktopServices>  //serviços win
#include<QUrl>      //apontar url

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


void MainWindow::on_pushButton_clicked()
{
    QString end_ytb="https://www.youtube.com/watch?v=dtdjrsLmQdM&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=136";
    QDesktopServices::openUrl(end_ytb); //pode separar em objeto e dps chamar ou pode ser direto assim msm
}


void MainWindow::on_pushButton_2_clicked()
{
    QString end_file="file:///C:/windows/notepad.exe";
    QDesktopServices::openUrl(end_file);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString end_file="file:///C:/Windows/System32/calc.exe";
    QDesktopServices::openUrl(end_file);
}

