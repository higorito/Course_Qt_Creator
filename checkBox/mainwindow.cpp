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
//tem que ser global pq usarei em outros botoes, mas tmb pode n ser se quiser

QString msg="", m1,m2,m3;

void MainWindow::on_pushButton_clicked()
{
    bool cb1, cb2, cb3;

    cb1= ui->checkBox_1->isChecked();  //o metodo ischekec tem retorno bool
    cb2= ui->checkBox_2->isChecked();
    cb3= ui->checkBox_3->isChecked();
    msg="";
    if(cb1){
        msg+=" |box1 marcada";
    }
    if(cb2){
        msg+=" |box2 marcada";
    }
    if(cb3){
        msg+=" |box3 marcada";
    }
    QMessageBox::about(this,"Box marcadas", msg);

}


void MainWindow::on_pushButton_2_clicked()
{
    bool cb[3];

    cb[0]= ui->checkBox_1->isChecked();
    cb[1]= ui->checkBox_2->isChecked();
    cb[2]= ui->checkBox_3->isChecked();
    msg="";
    for(int i=0;i<3;i++){
        if(cb[i]){
            msg+="box "+QString::number(i+1)+" marcada\n";    //esse number é um typecast p converter pra QString//o +1 é pra deixar certo visto que começa em 0
        }
    }
    QMessageBox::about(this,"Box marcadas", msg);
}


void MainWindow::on_checkBox_1_stateChanged(int arg1)  //aq vai da um valor se ta marcado ou n 1 / 0
{
    msg="";
    if(arg1){
      m1="box 1 marcada\n";
    }else{
        m1="";
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    msg="";
    if(arg1){
      m2="box 2 marcada\n";
    }else{
        m2="";
    }
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    msg="";
    if(arg1){
      m3="box 3 marcada\n";
    }else{
        m3="";
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    msg=m1+m2+m3;

    QMessageBox::information(this,"caixas marcadas", msg);
}

