#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()    //METODO DE CLICAR DOS BOTOES
{
    ui->label->setText("click botão 1");       //vem tudo da ui... e depois diversos metodos... basicamente ta setando a label para o que escolhi
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("click botão 2");
}

