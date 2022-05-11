#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //fazendo a conexao segundo modo

    connect(ui->pushButton, SIGNAL(clicked()), this,SLOT(mudarTexto())); //aq no slot() apareceu o mudarTexto, algo que n apareceria se fosse so public....
}

void MainWindow::mudarTexto(){
    ui->label->setText("texto mudado");
}


MainWindow::~MainWindow()
{
    delete ui;
}

