#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include"janela_tab.h""

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


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void MainWindow::on_btn_add_tab_clicked()
{
     ui->tabWidget->addTab(new QWidget(), "Nova tab "+ QString::number(ui->tabWidget->count()+1));
}


void MainWindow::on_btn_remove_tab_clicked()
{
    ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->tabWidget->addTab(new Janela_tab(), "Nova Cadastro "+ QString::number(ui->tabWidget->count()+1));
}

