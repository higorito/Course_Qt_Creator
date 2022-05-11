#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QMessageBox>  //mostrar

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


void MainWindow::on_btn_mostar_clicked()
{   //ta armazenando o que foi digitado nas caixas aqui nas variaveis
    QString nome = ui->txt_nome->text();
    QString idade = ui->txt_idade->text();
    QString email = ui->txt_email->text();


    QMessageBox::information(this,"Dados", "Nome: "+nome+"  Idade: "+idade+"\nE-mail: "+email);
}


void MainWindow::on_btn_limpar_clicked()
{  //limpando campos
    ui->txt_nome->clear();
    ui->txt_idade->clear();
    ui->txt_email->clear();

    //reposicionar cursor
    ui->txt_nome->setFocus();
}

