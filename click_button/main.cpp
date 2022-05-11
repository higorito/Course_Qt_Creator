#include "mainwindow.h"

#include <QApplication>        //os metodos exec, bip... vem daqui

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    //vai rodar, aqui controla a aplicação
    MainWindow w;       //clica um objeto w
    w.show();           //metodo show
    return a.exec();
}
