#ifndef JANELA_NOVO_H
#define JANELA_NOVO_H

#include <QDialog>

namespace Ui {
class janela_novo;
}

class janela_novo : public QDialog
{
    Q_OBJECT

public:
    explicit janela_novo(QWidget *parent = nullptr);
    ~janela_novo();

private:
    Ui::janela_novo *ui;
};

#endif // JANELA_NOVO_H
