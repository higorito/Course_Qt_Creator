/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSair;
    QAction *actionCopiar;
    QAction *actionColar;
    QAction *actionRecortar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionPesquisar;
    QAction *actionSobre;
    QAction *actionFonte;
    QAction *actionCor;
    QAction *actionCor_Fundo;
    QAction *actionTemas;
    QAction *actionTela_Cheia;
    QAction *actionCor_Fundo_Letras;
    QAction *actionImprimir;
    QAction *actionAutor;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuAjuda;
    QMenu *menuFormatar;
    QMenu *menuPersonalizar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(511, 368);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icon_salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName(QString::fromUtf8("actionSalvar_como"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icon_salvar_como.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_como->setIcon(icon1);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icon_novo_arq_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon2);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icon_abrir_arq.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon3);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icon_fechar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSair->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icon_copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/icon_colar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon6);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icon_recortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon7);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icon_desfazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon8);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icon_refazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon9);
        actionPesquisar = new QAction(MainWindow);
        actionPesquisar->setObjectName(QString::fromUtf8("actionPesquisar"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icon_pesquisar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPesquisar->setIcon(icon10);
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/icon_ajuda.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre->setIcon(icon11);
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        actionCor_Fundo = new QAction(MainWindow);
        actionCor_Fundo->setObjectName(QString::fromUtf8("actionCor_Fundo"));
        actionTemas = new QAction(MainWindow);
        actionTemas->setObjectName(QString::fromUtf8("actionTemas"));
        actionTela_Cheia = new QAction(MainWindow);
        actionTela_Cheia->setObjectName(QString::fromUtf8("actionTela_Cheia"));
        actionCor_Fundo_Letras = new QAction(MainWindow);
        actionCor_Fundo_Letras->setObjectName(QString::fromUtf8("actionCor_Fundo_Letras"));
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icon_imprimir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon12);
        actionAutor = new QAction(MainWindow);
        actionAutor->setObjectName(QString::fromUtf8("actionAutor"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 511, 311));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 511, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuAjuda = new QMenu(menubar);
        menuAjuda->setObjectName(QString::fromUtf8("menuAjuda"));
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName(QString::fromUtf8("menuFormatar"));
        menuPersonalizar = new QMenu(menubar);
        menuPersonalizar->setObjectName(QString::fromUtf8("menuPersonalizar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuPersonalizar->menuAction());
        menubar->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuEditar->addSeparator();
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuEditar->addSeparator();
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionColar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addSeparator();
        menuEditar->addAction(actionPesquisar);
        menuAjuda->addAction(actionSobre);
        menuAjuda->addAction(actionAutor);
        menuFormatar->addAction(actionFonte);
        menuFormatar->addAction(actionCor);
        menuFormatar->addAction(actionCor_Fundo_Letras);
        menuPersonalizar->addAction(actionCor_Fundo);
        menuPersonalizar->addAction(actionTemas);
        menuPersonalizar->addAction(actionTela_Cheia);
        toolBar->addAction(actionNovo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionSalvar_como);
        toolBar->addSeparator();
        toolBar->addAction(actionDesfazer);
        toolBar->addAction(actionRefazer);
        toolBar->addSeparator();
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionColar);
        toolBar->addAction(actionRecortar);
        toolBar->addSeparator();
        toolBar->addAction(actionPesquisar);
        toolBar->addAction(actionSobre);
        toolBar->addSeparator();
        toolBar->addAction(actionSair);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_como->setText(QCoreApplication::translate("MainWindow", "Salvar como...", nullptr));
        actionNovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionColar->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionDesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer ", nullptr));
        actionRefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
        actionPesquisar->setText(QCoreApplication::translate("MainWindow", "Pesquisar", nullptr));
        actionSobre->setText(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        actionFonte->setText(QCoreApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor->setText(QCoreApplication::translate("MainWindow", "Cor da Fonte", nullptr));
        actionCor_Fundo->setText(QCoreApplication::translate("MainWindow", "Cor de Fundo", nullptr));
        actionTemas->setText(QCoreApplication::translate("MainWindow", "Temas", nullptr));
        actionTela_Cheia->setText(QCoreApplication::translate("MainWindow", "Tela Cheia", nullptr));
        actionCor_Fundo_Letras->setText(QCoreApplication::translate("MainWindow", "Cor Fundo Letras", nullptr));
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
        actionAutor->setText(QCoreApplication::translate("MainWindow", "Autor", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuAjuda->setTitle(QCoreApplication::translate("MainWindow", "Ajuda", nullptr));
        menuFormatar->setTitle(QCoreApplication::translate("MainWindow", "Formatar", nullptr));
        menuPersonalizar->setTitle(QCoreApplication::translate("MainWindow", "Personalizar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
