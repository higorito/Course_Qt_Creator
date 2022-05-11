#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QMessageBox>

#include<QDebug> //p mostrar no console

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
    QMessageBox::StandardButton resposta =  QMessageBox::question(this,"titulo cx","Fechar programa?", QMessageBox::Yes|QMessageBox::No );  //no fim adicionei uns botoes que serao armazenados na resposta que é do tipo standarbutton
    //aq verifica o conteudo
    if(resposta==QMessageBox::Yes){
        close(); //ou
        //QApplication::quit();
    }else{
       // QMessageBox::about(this, "titulo foda","nao foi fechado");
        //ao inves de caixa usa um debug que mostra no console
        qDebug()<<"Não foi fechado :)";   //meio que gera uma msg para o programa.. nao incomoda o usuario
    }
}

