/********************************************************************************
** Form generated from reading UI file 'editctts.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCTTS_H
#define UI_EDITCTTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editCtts
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *txt_id;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_telefone;
    QPushButton *btn_salvar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_email;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *editCtts)
    {
        if (editCtts->objectName().isEmpty())
            editCtts->setObjectName(QString::fromUtf8("editCtts"));
        editCtts->resize(555, 244);
        widget = new QWidget(editCtts);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 40, 451, 144));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_id = new QLabel(widget);
        txt_id->setObjectName(QString::fromUtf8("txt_id"));

        horizontalLayout_4->addWidget(txt_id);


        formLayout->setLayout(0, QFormLayout::LabelRole, horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(0, QFormLayout::FieldRole, horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_2->addWidget(txt_telefone);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout_2);

        btn_salvar = new QPushButton(widget);
        btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));

        formLayout->setWidget(2, QFormLayout::FieldRole, btn_salvar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));

        horizontalLayout_3->addWidget(txt_email);


        formLayout->setLayout(3, QFormLayout::LabelRole, horizontalLayout_3);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        formLayout->setWidget(3, QFormLayout::FieldRole, btn_cancelar);


        retranslateUi(editCtts);

        QMetaObject::connectSlotsByName(editCtts);
    } // setupUi

    void retranslateUi(QDialog *editCtts)
    {
        editCtts->setWindowTitle(QCoreApplication::translate("editCtts", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("editCtts", "ID", nullptr));
        txt_id->setText(QCoreApplication::translate("editCtts", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("editCtts", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("editCtts", "Telefone", nullptr));
        btn_salvar->setText(QCoreApplication::translate("editCtts", "Salvar", nullptr));
        label_3->setText(QCoreApplication::translate("editCtts", "E-mail", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("editCtts", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editCtts: public Ui_editCtts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCTTS_H
