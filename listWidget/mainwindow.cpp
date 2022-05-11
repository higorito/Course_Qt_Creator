#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QDebug>
#include<QMessageBox>

QVector<int>marcados;

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


void MainWindow::on_btn_item_clicked()
{
    ui->listWidget->addItem(ui->txt_item->text());  //ta adiconando o texto digitado no campo la (legal filtar)
    ui->txt_item->clear();
    ui->txt_item->setFocus();  //limpou e reposicionou cursor la
}


void MainWindow::on_btn_add_varios_clicked()
{
    //outro jeito de adicionar    list é como se fosse uma coleção de dados...
    //aqui vai colocar varios de uma vez assim que selecionar o botao
    QListWidgetItem *item1= new QListWidgetItem("Abacate");  //criou objetos
    QListWidgetItem *item2= new QListWidgetItem("Morango");
    QListWidgetItem *item3= new QListWidgetItem("Cebola");

    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
}


void MainWindow::on_btn_marcar_clicked()
{   //apenas visual
    ui->listWidget->currentItem()->setForeground(Qt::darkBlue);
    ui->listWidget->currentItem()->setBackground(Qt::lightGray);
    //---aq vai armazenar a linha do marcado no vector

    marcados.push_back(ui->listWidget->currentRow());    //retorna o num da linha atual e coloca no vector

    qDebug()<<"Os marcados: "<<marcados;    //so mostrar no terminal a pos dos desmarcados
}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setForeground(Qt::black);
    ui->listWidget->currentItem()->setBackground(Qt::white);
    if (ui->listWidget->currentRow() == -1 || marcados.isEmpty())
      {
          QMessageBox::warning(this,"Atenção","Selecione ao menos um item da lista");
      }
      else{
               //foi muito necessario colocar esse index of e depois retornar o int da pos atual, pois estava dando erro
    marcados.erase(marcados.begin() + marcados.indexOf(ui->listWidget->currentRow()));       //erase pq dai pode escolher qlq posição
}                                   //meio que é o inicio + a pos do atual e remove p remover o atual sme iterator
}

void MainWindow::on_btn_desmarcar_todos_clicked()
{
    while(!marcados.empty()){

        ui->listWidget->setCurrentRow(marcados.last());
        ui->listWidget->currentItem()->setForeground(Qt::black);
        ui->listWidget->currentItem()->setBackground(Qt::white);

        marcados.pop_back();
    }
    qDebug()<<"Os marcados: "<<marcados;
}

