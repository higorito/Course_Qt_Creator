#include "ja_principal.h"
#include "ui_ja_principal.h"



ja_principal::ja_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ja_principal)
{
    ui->setupUi(this);
}

ja_principal::~ja_principal()
{
    delete ui;
}

void ja_principal::on_btn_add_ctt_clicked()
{
    inserir_ctt novoCtt;
    novoCtt.exec();        //abriu a janela de inserir contato
}


void ja_principal::on_btn_find_ctt_clicked()
{
    pesquisar_ctt pesquisa;
    pesquisa.exec();
}

