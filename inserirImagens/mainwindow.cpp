#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QPixmap>  //paraadd imagem via codigo

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("C:/Users/Higor/Desktop/QT creator/Nova pasta/inserirImagens/qt_logo.png");  //o caminho invertando a barra \ para /
    ui->label_2->setPixmap(logo.scaled(500,400, Qt::KeepAspectRatio));   //passando a logo no metodo setpixmap la no label2
                                //scaled é pra deixar a imagem boa na label // keep é pra manter proporção

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap img("C:/Users/Higor/Desktop/QT creator/Nova pasta/inserirImagens/pythonLogo.png");

    ui->label_2->setPixmap(img.scaled(205,246,Qt::KeepAspectRatio));
}

