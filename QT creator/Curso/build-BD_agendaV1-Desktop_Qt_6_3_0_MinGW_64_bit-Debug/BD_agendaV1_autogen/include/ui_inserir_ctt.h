/********************************************************************************
** Form generated from reading UI file 'inserir_ctt.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERIR_CTT_H
#define UI_INSERIR_CTT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inserir_ctt
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_confirmar;
    QPushButton *btn_cancelar;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_tel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_mail;

    void setupUi(QDialog *inserir_ctt)
    {
        if (inserir_ctt->objectName().isEmpty())
            inserir_ctt->setObjectName(QString::fromUtf8("inserir_ctt"));
        inserir_ctt->resize(470, 229);
        widget = new QWidget(inserir_ctt);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 431, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_confirmar = new QPushButton(widget);
        btn_confirmar->setObjectName(QString::fromUtf8("btn_confirmar"));

        horizontalLayout_4->addWidget(btn_confirmar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_tel = new QLineEdit(widget);
        txt_tel->setObjectName(QString::fromUtf8("txt_tel"));

        horizontalLayout_2->addWidget(txt_tel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_mail = new QLineEdit(widget);
        txt_mail->setObjectName(QString::fromUtf8("txt_mail"));

        horizontalLayout_3->addWidget(txt_mail);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(inserir_ctt);

        QMetaObject::connectSlotsByName(inserir_ctt);
    } // setupUi

    void retranslateUi(QDialog *inserir_ctt)
    {
        inserir_ctt->setWindowTitle(QCoreApplication::translate("inserir_ctt", "Dialog", nullptr));
        btn_confirmar->setText(QCoreApplication::translate("inserir_ctt", "Confirmar", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("inserir_ctt", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("inserir_ctt", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("inserir_ctt", "Telefone", nullptr));
        label_3->setText(QCoreApplication::translate("inserir_ctt", "E-mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inserir_ctt: public Ui_inserir_ctt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERIR_CTT_H
