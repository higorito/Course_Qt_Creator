#ifndef PESQUISAR_CTT_H
#define PESQUISAR_CTT_H

#include <QDialog>

namespace Ui {
class pesquisar_ctt;
}

class pesquisar_ctt : public QDialog
{
    Q_OBJECT

public:
    explicit pesquisar_ctt(QWidget *parent = nullptr);
    ~pesquisar_ctt();

private slots:
    void on_btn_excluir_clicked();

    void on_btn_editar_clicked();

private:
    Ui::pesquisar_ctt *ui;
};

#endif // PESQUISAR_CTT_H
