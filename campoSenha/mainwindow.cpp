#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{   //recebendo e comparando o usuario e senha
    QString userId = ui->txt_user->text();
    QString senha = ui->txt_senha->text();

    if(userId=="higor" && senha=="123"){
        QMessageBox::information(this,"Logado","Logou");
    }else{
        QMessageBox::warning(this,"Erro", "Usuário ou senha incorretos!");
    }
}

