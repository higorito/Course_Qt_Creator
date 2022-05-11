/********************************************************************************
** Form generated from reading UI file 'pesquisar_ctt.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISAR_CTT_H
#define UI_PESQUISAR_CTT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pesquisar_ctt
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesq_nome;
    QPushButton *btn_pesquisar;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;

    void setupUi(QDialog *pesquisar_ctt)
    {
        if (pesquisar_ctt->objectName().isEmpty())
            pesquisar_ctt->setObjectName(QString::fromUtf8("pesquisar_ctt"));
        pesquisar_ctt->resize(625, 441);
        tableWidget = new QTableWidget(pesquisar_ctt);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 80, 471, 331));
        layoutWidget = new QWidget(pesquisar_ctt);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 461, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_pesq_nome = new QLineEdit(layoutWidget);
        txt_pesq_nome->setObjectName(QString::fromUtf8("txt_pesq_nome"));

        horizontalLayout->addWidget(txt_pesq_nome);


        horizontalLayout_2->addLayout(horizontalLayout);

        btn_pesquisar = new QPushButton(layoutWidget);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));

        horizontalLayout_2->addWidget(btn_pesquisar);

        layoutWidget1 = new QWidget(pesquisar_ctt);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(510, 10, 111, 81));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_excluir = new QPushButton(layoutWidget1);
        btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));

        verticalLayout->addWidget(btn_excluir);

        btn_editar = new QPushButton(layoutWidget1);
        btn_editar->setObjectName(QString::fromUtf8("btn_editar"));

        verticalLayout->addWidget(btn_editar);


        retranslateUi(pesquisar_ctt);

        QMetaObject::connectSlotsByName(pesquisar_ctt);
    } // setupUi

    void retranslateUi(QDialog *pesquisar_ctt)
    {
        pesquisar_ctt->setWindowTitle(QCoreApplication::translate("pesquisar_ctt", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("pesquisar_ctt", "Nome", nullptr));
        btn_pesquisar->setText(QCoreApplication::translate("pesquisar_ctt", "Pesquisar", nullptr));
        btn_excluir->setText(QCoreApplication::translate("pesquisar_ctt", "Excluir", nullptr));
        btn_editar->setText(QCoreApplication::translate("pesquisar_ctt", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pesquisar_ctt: public Ui_pesquisar_ctt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISAR_CTT_H
