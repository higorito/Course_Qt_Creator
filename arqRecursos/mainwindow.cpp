#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo(":/recursos/qt_logo.png");   //diferença ta aqui no caminho da img  mais facil com recursos
    ui->lbl_logo->setPixmap(logo);

}

MainWindow::~MainWindow()
{
    delete ui;
}


