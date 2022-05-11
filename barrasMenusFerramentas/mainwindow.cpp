#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "janela_novo.h"  //incluindo a nova janela

#include<QMessageBox>

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


void MainWindow::on_actionNovo_triggered()    //evento do botao novo la (cheguei usando go to slot)
{
    janela_novo nova;
    nova.exec();
}


void MainWindow::on_actionSalvar_2_triggered()
{
    QMessageBox::information(this,"Salvado","Salvo com sucesso! :)");
}


void MainWindow::on_actionSair_2_triggered()
{
    close(); //ou  QApplication::quit();

}

