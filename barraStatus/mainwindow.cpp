#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->statusbar->addPermanentWidget(ui->btn_add_status);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btb_ok_clicked()
{
    QString nome = ui->txt_nome->text();   //tem outro metodo tmb escrevendo direto la
   // QString idade = ui->txt_idade->text();
    ui->statusbar->showMessage("Nome: "+nome+"   Idade: "+ui->txt_idade->text());
}


void MainWindow::on_btn_add_status_clicked()
{
    QString msg="texto da caixa de mensagem";
    ui->statusbar->showMessage("texto que ira aparecer status");     //é interessante mostrar coisas como hora, data, mensagem pro usuario... varias labels etc

    QMessageBox::critical(this,"Mostrar msg", msg);
}

