#include "pesquisar_ctt.h"
#include "ui_pesquisar_ctt.h"

#include<QMessageBox>
#include<QtSql>

#include"editctts.h"

pesquisar_ctt::pesquisar_ctt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pesquisar_ctt)
{
    ui->setupUi(this);

    QSqlQuery consulta;
    consulta.prepare("select *from tb_contatos");  //preparando comando de mostrar todos
    if(consulta.exec()){
        QMessageBox::information(this, "Sucesso","Banco de Dados Carregado com Sucesso!");
        int linhaCont=0;
        ui->tableWidget->setColumnCount(4);  //determinando as colunas da tabela do programa mostrara
        while (consulta.next()) {   //enquanto tper proximo vamos inserindo
            ui->tableWidget->insertRow(linhaCont);    //inserindo linha de acordo com o cont

            ui->tableWidget->setItem(linhaCont, 0, new QTableWidgetItem(consulta.value(0).toString()));      //passar linha, coluna, e criar um objeto qtable widget para passar(meio que uma conversão("tipecast"))
                      //primeira coluna da primeira linha          //passando um item no indice 0 e o converte p string
            //faz pra todos agora
            ui->tableWidget->setItem(linhaCont, 1, new QTableWidgetItem(consulta.value(1).toString()));
            ui->tableWidget->setItem(linhaCont, 2, new QTableWidgetItem(consulta.value(2).toString()));
            ui->tableWidget->setItem(linhaCont, 3, new QTableWidgetItem(consulta.value(3).toString()));
            //definindo altura
            ui->tableWidget->setRowHeight(linhaCont,20);  //o 20 define a altura

            linhaCont++;    //incrementa aq pra passar p proxima linha
        }
        //customizando as colunas
        ui->tableWidget->setColumnWidth(0,20);
        ui->tableWidget->setColumnWidth(1,140);
        ui->tableWidget->setColumnWidth(3,200);

        //customizando os cabeçalhos da tabela
        QStringList cabecalho={"ID","Nome","Telefone","E-Mail"};
        ui->tableWidget->setHorizontalHeaderLabels(cabecalho);

        //nao poder editar
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        //selecionar a linha toda
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        //desabilitar num das linhas
        ui->tableWidget->verticalHeader()->setVisible(false);

        //cor seleção
        ui->tableWidget->setStyleSheet("QTableView {selection-background-color:#00f}");   //da pra ser via css

    }else{
        QMessageBox::warning(this,"Erro","Registro Não foi Inserido.");
    }
}

pesquisar_ctt::~pesquisar_ctt()
{
    delete ui;
}

void pesquisar_ctt::on_btn_excluir_clicked()
{
    int linAux= ui->tableWidget->currentRow();  //a linha que ta selecionada
    QString idAux= ui->tableWidget->item(linAux, 0)->text();          //linha coluna //pega o texto desse item

    QSqlQuery consulta;
    consulta.prepare("delete from tb_contatos where id_ctt="+idAux);
    if(consulta.exec()){
         ui->tableWidget->removeRow(linAux);
         QMessageBox::information(this, "OK","Removido com Sucesso!");
    }else{
         QMessageBox::warning(this,"Erro","Registro Não foi Removido.");
    }

}


void pesquisar_ctt::on_btn_editar_clicked()
{   int linAux= ui->tableWidget->currentRow();
    int id= ui->tableWidget->item(linAux, 0)->text().toInt();  //a primeira coluna da linha atual

    editCtts editarCtts(this, id);    //aq vai passar o ID de quem sera editado
    editarCtts.exec();
    //apos atualizar la deve atualizar aqui...

    QSqlQuery atualizadora;
    atualizadora.prepare("select * from tb_contatos where id_ctt="+QString::number(id));

    if(atualizadora.exec()){
        atualizadora.first();  //o resultado dela
        ui->tableWidget->setItem(linAux, 1, new QTableWidgetItem(atualizadora.value(1).toString()));  //vai ter que criar um new QTable igual anteriormente
        ui->tableWidget->setItem(linAux, 2, new QTableWidgetItem(atualizadora.value(2).toString()));  //tel
        ui->tableWidget->setItem(linAux, 3, new QTableWidgetItem(atualizadora.value(3).toString()));  //email (apenas mudando os num)
    }else{
        QMessageBox::warning(this,"Erro","Registro Não foi Atualizado.");
   }
}

