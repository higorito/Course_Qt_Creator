#include "mainwindow.h"
#include "./ui_mainwindow.h"

//int cont;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // cont=ui->tabWidget->count(); //para saber o num de tab do começo
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)  //vai receber exatamente o valor da tab que clicou no X
{
    ui->tabWidget->removeTab(index);
    //cont--;
}


void MainWindow::on_btn_add_tab_clicked()
{

   // ui->tabWidget->addTab(new QWidget(), "Nova tab "); //criou novo widget e o nome
    //aqui ira numerar as tabas

    ui->tabWidget->addTab(new QWidget(), "Nova tab "+ QString::number(ui->tabWidget->count()+1));  //qstring::number é um typecast pois o retorno de count é int
                                                                                 //aqui seria o cont para ser sequencial, mas removi
}


void MainWindow::on_btn_remove_tab_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());  //aqui é a tab atual
}

