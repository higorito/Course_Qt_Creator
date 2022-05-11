#include "janela_tab.h"
#include "ui_janela_tab.h"

Janela_tab::Janela_tab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Janela_tab)
{
    ui->setupUi(this);
}

Janela_tab::~Janela_tab()
{
    delete ui;
}
