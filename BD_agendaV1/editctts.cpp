#include "editctts.h"
#include "ui_editctts.h"

#include<QtSql>
#include<QMessageBox>

static int id_global_aux;

editCtts::editCtts(QWidget *parent, int id_contato) :   //basicamente vai passar um ID quando chamar essa janela
    QDialog(parent),
    ui(new Ui::editCtts)
{
    ui->setupUi(this);

    id_global_aux= id_contato;

    QSqlQuery seletora;
    seletora.prepare("select * from tb_contatos where id_ctt="+QString::number(id_contato));  //seleciona o contato de acordo com o ID

    if(seletora.exec()){
        seletora.first();
        //aq basicamente ta pegando do banco de dados e colocando nos campos convertando p string
        ui->txt_nome->setText(seletora.value(1).toString());     //o 1 é o nome e converte pra string e assim por diante
        ui->txt_telefone->setText(seletora.value(2).toString());
        ui->txt_email->setText(seletora.value(3).toString());
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível selecionar contato.");
    }
}

editCtts::~editCtts()
{
    delete ui;
}

void editCtts::on_btn_cancelar_clicked()
{
    close();
}


void editCtts::on_btn_salvar_clicked()
{
    //aq inverte... pega dos campos e coloca de volta no banco
    QString nome= ui->txt_nome->text();
    QString tel= ui->txt_telefone->text();
    QString email= ui->txt_email->text();

    QSqlQuery atualizadora;
    atualizadora.prepare("update tb_contatos set nome_ctt='"+nome+"', telefone_ctt='"+tel+"', email_ctt='"+email+"' where id_ctt="+QString::number(id_global_aux));

    if(atualizadora.exec()){
        this->close();
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível editar.");
    }
}

