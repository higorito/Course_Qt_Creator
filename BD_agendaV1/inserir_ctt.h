#ifndef INSERIR_CTT_H
#define INSERIR_CTT_H

#include <QDialog>
#include<QMessageBox>
#include<QtSql>  //p usar a querry

namespace Ui {
class inserir_ctt;
}

class inserir_ctt : public QDialog
{
    Q_OBJECT

public:
    explicit inserir_ctt(QWidget *parent = nullptr);
    ~inserir_ctt();

private slots:
    void on_btn_confirmar_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::inserir_ctt *ui;
};

#endif // INSERIR_CTT_H
