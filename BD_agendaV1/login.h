#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
//banco de dados
#include<QDebug>
#include<QtSql/QtSql>
#include<QFileInfo>

//a janela principal
#include"ja_principal.h"    //tem que ser aq pq a partir do login que vai abrir a prox janela


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btn_logar_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
