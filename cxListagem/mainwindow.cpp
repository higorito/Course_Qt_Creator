#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /* aqui consegue add por codigo,  mas tem jeitos melhores
    ui->comboBox->addItem("Java");
    ui->comboBox->addItem("Python");
    ui->comboBox->addItem("PHP");
    ui->comboBox->addItem("Ruby");*/

    QString linguagens[5]={"Python","Java","Php","Ruby","JavaScript"};

    QString icons[5]={":/icons/icon_python.png",":/icons/icon_java.png",":/icons/icon_php.png",":/icons/icon_ruby.png",":/icons/icon_js.png"};

    for (int i = 0; i < 5; ++i) {
        ui->comboBox->addItem(QIcon(icons[i]),linguagens[i]);     //p add os icons bastou adicionar o QIcon(icons[i]) e ja aproveitou o msm for
    }

    ui->comboBox->insertItem(3,QIcon(":/icons/icon_cpp.png"),"C++");  //a diferença é que aqui pode escolher a posição que entrara (se quiser usar icone é a msm coisa)
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"Linguagens",ui->comboBox->currentText());
}

