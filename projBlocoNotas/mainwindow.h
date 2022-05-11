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
    ~MainWindow();

private slots:
    void on_actionNovo_triggered();

    void on_actionAbrir_triggered();

    void on_actionSalvar_como_triggered();

    void on_actionSalvar_triggered();

    void on_actionSair_triggered();

    void on_actionCopiar_triggered();

    void on_actionColar_triggered();

    void on_actionRecortar_triggered();

    void on_actionDesfazer_triggered();

    void on_actionRefazer_triggered();

    void on_actionFonte_triggered();

    void on_actionCor_triggered();


    void on_actionCor_Fundo_Letras_triggered();

    void on_actionImprimir_triggered();

    void on_actionSobre_triggered();

    void on_actionAutor_triggered();

private:
    Ui::MainWindow *ui;
    QString local_arq;
};
#endif // MAINWINDOW_H
