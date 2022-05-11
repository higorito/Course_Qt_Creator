#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tempo = new QTimer(this);  //criando o objeto  //passa o parent this

    connect(tempo, SIGNAL(timeout()), this, SLOT(att_relogio()));
    tempo->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::att_relogio(){
    QTime tempoAtual = QTime::currentTime();   //ta pegando ohorario atual do sistema

    QString txtTempo= tempoAtual.toString("hh:mm:ss");

    ui->label->setText(txtTempo);
}
