#ifndef JA_PRINCIPAL_H
#define JA_PRINCIPAL_H

#include <QDialog>

#include"inserir_ctt.h"   //p conseguir chamar a janela de inserir a partir da principal

#include"pesquisar_ctt.h"  //p abrir a de pesquisa

namespace Ui {
class ja_principal;
}

class ja_principal : public QDialog
{
    Q_OBJECT

public:
    explicit ja_principal(QWidget *parent = nullptr);
    ~ja_principal();

private slots:
    void on_btn_add_ctt_clicked();

    void on_btn_find_ctt_clicked();

private:
    Ui::ja_principal *ui;
};

#endif // JA_PRINCIPAL_H
