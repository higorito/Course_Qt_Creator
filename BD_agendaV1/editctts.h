#ifndef EDITCTTS_H
#define EDITCTTS_H

#include <QDialog>

namespace Ui {
class editCtts;
}

class editCtts : public QDialog
{
    Q_OBJECT

public:
    explicit editCtts(QWidget *parent = nullptr, int id_contato=0);   //aqui é o construtor da classe/janela
    ~editCtts();

private slots:
    void on_btn_cancelar_clicked();

    void on_btn_salvar_clicked();

private:
    Ui::editCtts *ui;
};

#endif // EDITCTTS_H
