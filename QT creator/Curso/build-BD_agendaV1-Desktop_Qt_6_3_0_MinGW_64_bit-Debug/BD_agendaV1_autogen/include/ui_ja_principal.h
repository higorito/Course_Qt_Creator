/********************************************************************************
** Form generated from reading UI file 'ja_principal.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JA_PRINCIPAL_H
#define UI_JA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ja_principal
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add_ctt;
    QPushButton *btn_find_ctt;

    void setupUi(QDialog *ja_principal)
    {
        if (ja_principal->objectName().isEmpty())
            ja_principal->setObjectName(QString::fromUtf8("ja_principal"));
        ja_principal->resize(363, 262);
        label = new QLabel(ja_principal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(80, 60, 191, 121));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAutoFillBackground(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setOpenExternalLinks(false);
        widget = new QWidget(ja_principal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 180, 231, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_add_ctt = new QPushButton(widget);
        btn_add_ctt->setObjectName(QString::fromUtf8("btn_add_ctt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_add_ctt->sizePolicy().hasHeightForWidth());
        btn_add_ctt->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_add_ctt);

        btn_find_ctt = new QPushButton(widget);
        btn_find_ctt->setObjectName(QString::fromUtf8("btn_find_ctt"));
        sizePolicy1.setHeightForWidth(btn_find_ctt->sizePolicy().hasHeightForWidth());
        btn_find_ctt->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(btn_find_ctt);


        retranslateUi(ja_principal);

        QMetaObject::connectSlotsByName(ja_principal);
    } // setupUi

    void retranslateUi(QDialog *ja_principal)
    {
        ja_principal->setWindowTitle(QCoreApplication::translate("ja_principal", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ja_principal", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700;color:#f00;\">LOGOU</span></h1></body></html>", nullptr));
        btn_add_ctt->setText(QCoreApplication::translate("ja_principal", "add contato", nullptr));
        btn_find_ctt->setText(QCoreApplication::translate("ja_principal", "pesquisar ctt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ja_principal: public Ui_ja_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JA_PRINCIPAL_H
