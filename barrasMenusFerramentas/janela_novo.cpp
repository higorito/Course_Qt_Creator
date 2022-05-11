#include "janela_novo.h"
#include "ui_janela_novo.h"

janela_novo::janela_novo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janela_novo)
{
    ui->setupUi(this);
}

janela_novo::~janela_novo()
{
    delete ui;
}
