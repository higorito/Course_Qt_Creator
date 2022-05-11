#include "mainwindow.h"
#include "./ui_mainwindow.h"
//
#include<QMessageBox>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QDir>
//fonte
#include<QFontDialog>
#include<QFont>
//cor
#include<QColor>
#include<QColorDialog>
//imprimir
#include<QtPrintSupport/QtPrintSupport>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setCentralWidget(ui->textEdit);  //pra centralizar o elemento textedit(tmb ficar responsivo caso o tamanho da janela muda)
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNovo_triggered()
{   //limpa local do arquivo a janela e posiciona o cursor
    local_arq="";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}


void MainWindow::on_actionAbrir_triggered()
{   //definira os tipos de arquivos e usando a QFdialog seleciona arquivos q vai abrir

    QString tipos_arq="Documentos De Texto(*.txt);;Todos os Arquivos(*.*)";
    QString nome_arq=QFileDialog::getOpenFileName(this, "Abrindo Arquivos","C://" ,tipos_arq);

    QFile arq(nome_arq);   //criando o arq que sera usado na classe QTextStream
    local_arq=nome_arq; //armazenar o enderaço do arquivo p controle  posterior

    if(!arq.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"Erro","Arquivo Não Foi Aberto!");
        return;
    }
    QTextStream entrada(&arq);   //criou o objeto entrada p a transferencia LEMBRA de colocar sempre o & para passar o endereço do arquivo
    QString todoTexto=entrada.readAll();

    ui->textEdit->setText(todoTexto);  //passando pro widget o texto todo
    arq.close();
}


void MainWindow::on_actionSalvar_como_triggered()
{   QString tipos_arq="Todos os Arquivos(*.*);;Documentos De Texto(*.txt)";
    QString nome_arq= QFileDialog::getSaveFileName(this,"Salvando como","C://",tipos_arq);

    local_arq=nome_arq; //pro salvar saber onde ira salvar o arquivo

    QFile arq(nome_arq);
    if(!arq.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"Erro","Arquivo Não Foi Salvo!");
        return;
    }
    QTextStream saida(&arq);
    QString textoTela=ui->textEdit->toPlainText();

    saida<<textoTela;
    arq.flush();
    arq.close();
}


void MainWindow::on_actionSalvar_triggered()
{


    QFile arq(local_arq);  //aq ta o segredo de saber onde ta salvando
    if(!arq.open(QFile::WriteOnly|QFile::Text)){
         QMessageBox::warning(this,"Erro","Arquivo Não Foi Salvo!");
        return;
     }
    QTextStream saida(&arq);
    QString textoTela=ui->textEdit->toPlainText();

    saida<<textoTela;
    arq.flush();
    arq.close();
}


void MainWindow::on_actionSair_triggered()
{
    close();
}


void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionColar_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionDesfazer_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRefazer_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionFonte_triggered()
{
    bool fonte_valido;
    QFont fonte= QFontDialog::getFont(&fonte_valido,this);  //abre a janela de fonte e grava no QFont fonte

    if(fonte_valido){
        ui->textEdit->setCurrentFont(fonte);  //para selecionar a fonte no selecionado // se fosse setFont era em tudo
    }else{return;}
}


void MainWindow::on_actionCor_triggered()
{
    bool cor_valido;
    QColor cor= QColorDialog::getColor(Qt::black,this, "Escolhendo Cor");  //cor inicial, parente , titulo

    if(cor.isValid()){
        ui->textEdit->setTextColor(cor);
    }else{return;}
}


void MainWindow::on_actionCor_Fundo_Letras_triggered()
{
    bool cor_valido;
    QColor cor= QColorDialog::getColor(Qt::black,this, "Escolhendo Cor");  //cor inicial, parente , titulo

    if(cor.isValid()){
        ui->textEdit->setTextBackgroundColor(cor);
    }else{return;}
}

/*Para conseguir imprimir foi necessario incluir #include<QtPrintSupport/QtPrintSupport>
 *  e tambem utilizando o CMake colar no FINAL do arquivo as linhas:  (tentei colocar as linhas acima e continuou dando erro)
 *
 * find_package(Qt6 REQUIRED COMPONENTS PrintSupport)
 * target_link_libraries(projBlocoNotas PRIVATE Qt6::PrintSupport)
 *
 *  Sendo o "projBlocoNotas" o nome do seu projeto
 */
void MainWindow::on_actionImprimir_triggered()
{
   QPrinter imp;
    imp.setPrinterName("Impressora");
    QPrintDialog ja_imp(&imp, this);

    if(ja_imp.exec()==QDialog::Rejected){
        return;
    }
    ui->textEdit->print(&imp);
}


void MainWindow::on_actionSobre_triggered()
{
    QMessageBox::information(this,"Curso Otimo","Este Projeto foi baseado nos videos do CFBCursos \n https://www.youtube.com/channel/UCqHIWCQSq0yeE-1nbcRnt2w \n http://cfbcursos.com.br \n Alguns Códigos iguais ao apresentado por ele. Futuramente Pretendo aperfeiçoar a versão, conforme avanço no curso.");
}


void MainWindow::on_actionAutor_triggered()
{
    QMessageBox::information(this, "Autor","Desenvolvido por Higor Pereira\n GitHub: https://github.com/higorito");
}

