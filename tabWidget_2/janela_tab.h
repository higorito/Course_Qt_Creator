#ifndef JANELA_TAB_H
#define JANELA_TAB_H

#include <QWidget>

namespace Ui {
class Janela_tab;
}

class Janela_tab : public QWidget
{
    Q_OBJECT

public:
    explicit Janela_tab(QWidget *parent = nullptr);
    ~Janela_tab();

private:
    Ui::Janela_tab *ui;
};

#endif // JANELA_TAB_H
