#include "mainwindow.h"
#include "ui_mainwindow.h"

//QSqlDatabase bancoDados1= QSqlDatabase::addDatabase("QSQLITE");
QSqlDatabase bancoDados= QSqlDatabase::addDatabase("QSQLITE");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     QString caminho= qApp->applicationDirPath();
     QString caminho_b= caminho+"/BancoDeDados/novoBanco.db";
     bancoDados.setDatabaseName(caminho_b);

     if(!bancoDados.open()){
         ui->label->setText("Banco de Dados Não foi Aberto!!!");
     }else{
         ui->label->setText("Banco de Dados Aberto!");
     }

}

MainWindow::~MainWindow()
{
    delete ui;
}

