#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

#include<QDir>   //p manipular diretorios



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDir unidades;

    foreach(QFileInfo qfi, unidades.drives()){      //onde ta e quem vai(forreach)    qfi ta recebendo os drives
        ui->comboBox->addItem(qfi.absoluteFilePath());    //absoluteF... retorna uma string com os dados da qfi
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->listWidget->clear();//so limpando antes de listar

    ui->listWidget->addItem(arg1); //unidade(raiz) vai ser sempre o primeiro(padrao)

    QDir conteudo(arg1);  //a unidade selecionada no combobox
    foreach(QFileInfo qfi, conteudo.entryInfoList()){  //retorna conteudo tmb
        if(qfi.isDir()){
            ui->listWidget->addItem(qfi.absoluteFilePath());  //vai dar as informações do diretorio
        }   /*else if(qfi.isFile()){  //se for um arquivo
            ui->listWidget->addItem("Arquivo: "+qfi.absoluteFilePath());
            }*/
    }
}


void MainWindow::on_pushButton_2_clicked() //add dir
{
    QString local= ui->listWidget->currentItem()->text();  //pega o texto do item atual

    QString nomeDir = "/"+ui->lineEdit->text();  //pega o que ta escrito no line edit p ser o nome da pasta  ////barra p separar os dir

    QDir auxCriar(local+nomeDir);

    if(auxCriar.exists()){  //se existe
        QMessageBox::about(this,"Erro","Diretório já existe!");
    }else{
        auxCriar.mkdir(local+nomeDir);

        //para atualizar a lista de diretorios
        ui->listWidget->clear();
        ui->listWidget->addItem(ui->comboBox->currentText());

        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo qfi, conteudo.entryInfoList()){
            if(qfi.isDir()){
                ui->listWidget->addItem(qfi.absoluteFilePath());
            }
        }
    }
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();

}

void MainWindow::on_pushButton_clicked()   //remover dir
{
    QString local= ui->listWidget->currentItem()->text();  //pega o texto do item atual

    QDir auxCriar(local);

    if(!auxCriar.exists()){  //se nao existe
        QMessageBox::about(this,"Erro","Diretório não existe!");
    }else{
        auxCriar.rmdir(local);

        //para atualizar a lista de diretorios
        ui->listWidget->clear();
        ui->listWidget->addItem(ui->comboBox->currentText());

        QDir conteudo(ui->comboBox->currentText());
        foreach(QFileInfo qfi, conteudo.entryInfoList()){
            if(qfi.isDir()){
                ui->listWidget->addItem(qfi.absoluteFilePath());
            }
        }
    }
}

