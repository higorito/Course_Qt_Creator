#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>

#include<QTextStream>  //tratar textos(transferencia)

#include<QFile>   //trabalhar com os arquivos

#include<QFileDialog>   //abrir umas caixinhas p abrir arquivos

QString local="C:/Users/Higor/Desktop/QT creator/Curso/arquivosPt1/";
QString nome="maisUmPTeste.txt";

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


void MainWindow::on_btn_gravar_arq_clicked()
{
    QFile arq(local+nome);        //se quiser add no que ja tem inves de WriteOnly usa o append          //MAS tem varios outros modos
    if(!arq.open(QFile::WriteOnly|QFile::Text)){   //flags pra gravar | conteudo textp
        QMessageBox::warning(this,"Error","Não abriu o arquivo!");
    }
    QTextStream saida(&arq); //passando o endereço do arquivo  //p esse stream (controle transferencia)
    QString texto=ui->plainTextEdit->toPlainText();     //pegando do plaintext pra variavel texto

    saida<<texto;   //passou o que tava no texto pra saida

    arq.flush();  //confirmar(atualizar)  e fechar aquivo
    arq.close();
    ui->plainTextEdit->clear();
}


void MainWindow::on_btn_ler_arq_clicked()
{
    QFile arq(local+nome);
    if(!arq.open(QFile::ReadOnly|QFile::Text)){    //muda as flags
        QMessageBox::warning(this,"Error","Não abriu o arquivo!");
    }

    QTextStream entrada(&arq); //passando o endereço //cria o objeto de transferencia de texto p entrada
    QString texto= entrada.readAll();     //aq le o arquivo e retorna uma string

    ui->plainTextEdit->setPlainText(texto);   //passando pra tela

    arq.close();
}


void MainWindow::on_btn_abrir_arq_clicked()
{
    QString tiposArq="Todos arquivos (*.*) ;; Arquivos de Texto (*.txt)";

    QString abrirArq=QFileDialog::getOpenFileName(this, "Abrir Arquivos", "C://", tiposArq); //parent(janela) , titulo da janela , onde ira começar posso digitar ou usar o QDir para escolher um padrao, filtro de tipos de arquivos

    QFile arq(abrirArq);      // ali em cima vai armazenar o local e nome do arquivo e nesta linha vai ser passado isso como parametro e criar um arquivo em referencia a ele
    //agora abre
    if(!arq.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"Error","Não abriu o arquivo!");
    }
    //carregar o conteudo p o plain text
    QTextStream entrada(&arq);
    QString texto= entrada.readAll();
    ui->plainTextEdit->setPlainText(texto);
    arq.close();

}

