#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>  //biblioteca de msgs

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
    //QMessageBox::about(this, "Titulo caixa", "Aula 04 do curso de QT do CFB ");   //pai(Qwidget, logo main windown), string(titulo da caixa), texto principal
    // QMessageBox::aboutQt(this, "Titulo caixa");   //informativa sobre o QT
    //QMessageBox::information(this, "Titulo caixa", "informação teste");
    //QMessageBox::question(this, "Titulo caixa", "deu certo?");   //faz pergunta
    QMessageBox::warning(this, "Titulo caixa", "mais leve o alerta");
}


