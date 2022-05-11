#include "mainwindow.h"
#include <QApplication>

#include<QTimer>
#include<QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSplashScreen *tela_ini=new QSplashScreen();
    tela_ini->setPixmap(QPixmap(":/img/img_inicial.png"));
    tela_ini->show();

    QTimer::singleShot(2000, tela_ini, SLOT(close()));    //tempo em ms, receiver (tela),  o q fazer

    QTimer::singleShot(2000, &w, SLOT(show()));
    //w.show();
    return a.exec();
}
