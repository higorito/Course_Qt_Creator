#include "inserir_ctt.h"
#include "ui_inserir_ctt.h"

inserir_ctt::inserir_ctt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inserir_ctt)
{
    ui->setupUi(this);
}

inserir_ctt::~inserir_ctt()
{
    delete ui;
}

void inserir_ctt::on_btn_confirmar_clicked()
{   //pegando os dados e colocando em variavel
    QString nome= ui->txt_nome->text();
    QString tele= ui->txt_tel->text();
    QString email= ui->txt_mail->text();
    //criando uma consultadora

    QSqlQuery consultar;
    consultar.prepare("insert into tb_contatos (nome_ctt, telefone_ctt, email_ctt) values('"+nome+"','"+tele+"','"+email+"')");  //p preparar o comando que ira usar
    //preparou agora executa

    if(consultar.exec()){
         QMessageBox::information(this, "OK","Inserido com Sucesso!");
         ui->txt_nome->clear();
         ui->txt_tel->clear();
         ui->txt_mail->clear();
         ui->txt_nome->setFocus();
    }else{
         QMessageBox::warning(this,"Erro","Registro Não foi Inserido.");
    }
}


void inserir_ctt::on_btn_cancelar_clicked()
{
    close();
}

