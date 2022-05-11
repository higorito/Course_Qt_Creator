#include "mainwindow.h"
#include "./ui_mainwindow.h"

static QSqlDatabase bancoDados= QSqlDatabase::addDatabase("QSQLITE");  //criando um objeto tipo QSql e o tipo de database que utilizara

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // bancoDados.setDatabaseName("C:/Users/Higor/Desktop/QT_creator/Curso/windeployBD/build-windeployBancoD-Desktop_Qt_6_3_0_MinGW_64_bit-Release/BancoDeDados/novoBanco.db"); //definiu onde é e o nome

    //isso aq é igual acima, no entando vai permitir mudar as pastas de lugar, visto que applicationDirPath() retorna o endereço(la do.exe) e somente soma com o end do banco de dados
   QString caminho= qApp->applicationDirPath();
    QString caminho_banco= caminho+"/BancoDeDados/novoBanco.db";      //PULO DO GATO vai pegar a pasta do banco de dados e colocar la no .debug ou release que foi criado (isso vai evitar mt problema pra frente)
   bancoDados.setDatabaseName(caminho_banco);                          //pois assim vamos achar o banco de dados fora do QT tambem evita ficar colocando o caminho manualmente

    if(!bancoDados.open()){
        ui->label->setText("Banco de Dados Não foi Aberto!!!");
    }else{
        ui->label->setText("Banco de Dados Aberto!");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

