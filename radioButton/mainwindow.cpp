#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QMessageBox>

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
{   QString msg,cor,prog,veic;
    msg="";

    if(ui->rb_verm->isChecked()){  //ischecked retorna bool
        cor="Vermelho";
    }else if(ui->rb_ver->isChecked()){
        cor="Verde";
    }else if(ui->rb_azul->isChecked()){
        cor="Azul";
    }

    //mudar metodo so pra mostrar mais metodos
    int nveic=0;

    if(ui->rb_carro->isChecked()){
        nveic=1;
    }else if(ui->rb_moto->isChecked()){
        nveic=2;
    }else if(ui->rb_aviao->isChecked()){
        nveic=3;
    }

    switch (nveic) {
    case 1:
        veic="Carro";
        break;
    case 2:
        veic="Moto";
        break;
    case 3:
        veic="Aviao";
        break;
    default:
        veic="";
        break;
    }
    //----------------------------------

    QVector<bool> but;

    but.push_back(ui->rb_cpp->isChecked());
    but.push_back(ui->rb_py->isChecked());
    but.push_back(ui->rb_java->isChecked());

    if(but[0]){
        prog="C++";
    }
    if(but[1]){
        prog="Python";
    }
    if(but[2]){
        prog="Java";
    }

    msg="| "+cor+" | "+veic+" | "+prog+" |\n";

    QMessageBox::information(this,"marcados", msg);

}

