#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "janela2.h" // aq seria o primeiro modo //incluindo a nova janela.. dps cria objeto e dps chama o exec

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

   //primeiro modo

    Janela2 form2;
    form2.exec();

   //segundo modo... ta la declarado em mainwindow.h  assim podemos chamar essa janela em qualquer lugar
  // form2 = new Janela2(this);
  // form2->show();
}

