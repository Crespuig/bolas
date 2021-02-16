/********************************************************************************
** Form generated from reading UI file 'dinfobolas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFOBOLAS_H
#define UI_DINFOBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DInfoBolas
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listaBolas;
    QLabel *txtFrecuencia;
    QComboBox *listaFrecuencia;

    void setupUi(QDialog *DInfoBolas)
    {
        if (DInfoBolas->objectName().isEmpty())
            DInfoBolas->setObjectName(QString::fromUtf8("DInfoBolas"));
        DInfoBolas->resize(524, 452);
        buttonBox = new QDialogButtonBox(DInfoBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(170, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listaBolas = new QListWidget(DInfoBolas);
        listaBolas->setObjectName(QString::fromUtf8("listaBolas"));
        listaBolas->setGeometry(QRect(10, 10, 501, 271));
        txtFrecuencia = new QLabel(DInfoBolas);
        txtFrecuencia->setObjectName(QString::fromUtf8("txtFrecuencia"));
        txtFrecuencia->setGeometry(QRect(10, 300, 191, 17));
        listaFrecuencia = new QComboBox(DInfoBolas);
        listaFrecuencia->setObjectName(QString::fromUtf8("listaFrecuencia"));
        listaFrecuencia->setGeometry(QRect(210, 300, 86, 25));

        retranslateUi(DInfoBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DInfoBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DInfoBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DInfoBolas);
    } // setupUi

    void retranslateUi(QDialog *DInfoBolas)
    {
        DInfoBolas->setWindowTitle(QApplication::translate("DInfoBolas", "Dialog", nullptr));
        txtFrecuencia->setText(QApplication::translate("DInfoBolas", "Frecuencia de actualizaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DInfoBolas: public Ui_DInfoBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFOBOLAS_H
