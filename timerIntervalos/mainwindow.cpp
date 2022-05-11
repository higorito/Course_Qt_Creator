#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QDebug>

int contador=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tempo= new QTimer(this);
    //p poder associar a função la com o tempo
    connect(tempo, SIGNAL(timeout()), this, SLOT(func_var_timer()));
    tempo->start(1000);//de qnt em qtn vai ser executada
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::func_var_timer(){
    contador++;
    qDebug()<<"Timer"<<contador;
}
