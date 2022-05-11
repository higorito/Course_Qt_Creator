#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)    //construtor
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //adicionando a conexão(que é o de arrastar la do .ui (edit signal)

   //segunda maneira// connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));   //param: objeto sinal(receber evento), sinal(evento em si), objeto slot(quem vai ser associado), slot(ação)


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()   //aq terceiro metodo e mais usado
{
    //ja esta na janela e tal basta chamar
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QString css="background-color:#f00;color:#000;";  //pode fazer assim ou digitra ali dentro de uma vez
    ui->label->setStyleSheet(css);     //aqui basicamente ta mandando uma variavel do tipo string pro metodo que seta a cor do label
                                       //isso permite fazer tanta coisa(baseado em css) por exemplo vc clicar e a label ou botao mudar de cor
}

