#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();    //pq nao criar aqui? pq nao pode ser usado em slots entao cria o proprio

    //criando metodos para os slots
public slots:
    void mudarTexto();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
