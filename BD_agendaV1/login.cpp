#include "login.h"
#include "./ui_login.h"

//static pq tudo que for acessar sera desse msm ed. de memoria
static QSqlDatabase bancoDados= QSqlDatabase::addDatabase("QSQLITE");  //criando um objeto tipo QSql e o tipo de database que utilizara

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);



    bancoDados.setDatabaseName("C:/Users/Higor/Desktop/QT_creator/Curso/BD_agendaV1/bancoDados/db_agenda.db"); //definiu onde é e o nome

    if(!bancoDados.open()){
        ui->label->setText("Banco de Dados Não foi Aberto!!!");
    }else{
        ui->label->setText("Banco de Dados Aberto!");
    }

}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_logar_clicked()
{
    QString username= ui->txt_user->text();
    QString senha= ui->txt_senha->text();

    if(!bancoDados.open()){
        qDebug()<<"Não está aberto";
        return;
    }

    QSqlQuery consulta;

    if(consulta.exec("select *from tb_dados where user='"+username+"' and password='"+senha+"'")){  //o exec retorna booleano
        int cont=0;
        while (consulta.next()) {  //enquanto essa setença /\ estiver acontecendo vai somando  (espera ser 1-depois pode proteger)
            cont++;
        }
        if(cont>0){  //se for maior que zero entao encontrou no banco de dados e LOGA
            this->close();
            ja_principal mainJanela;
            mainJanela.setModal(true);
            mainJanela.exec();
        }else{
            ui->label->clear();
            ui->label->setText("Usuário ou Senha INCORRETOS!");

            ui->txt_senha->clear();
            ui->txt_user->setFocus();
        }
    }
}

