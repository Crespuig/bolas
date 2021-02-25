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
#include <QtWidgets/QFrame>
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
    QFrame *frameColisiones;
    QLabel *label;

    void setupUi(QDialog *DInfoBolas)
    {
        if (DInfoBolas->objectName().isEmpty())
            DInfoBolas->setObjectName(QString::fromUtf8("DInfoBolas"));
        DInfoBolas->resize(862, 743);
        buttonBox = new QDialogButtonBox(DInfoBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(510, 700, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listaBolas = new QListWidget(DInfoBolas);
        listaBolas->setObjectName(QString::fromUtf8("listaBolas"));
        listaBolas->setGeometry(QRect(10, 10, 501, 271));
        txtFrecuencia = new QLabel(DInfoBolas);
        txtFrecuencia->setObjectName(QString::fromUtf8("txtFrecuencia"));
        txtFrecuencia->setGeometry(QRect(570, 20, 191, 17));
        listaFrecuencia = new QComboBox(DInfoBolas);
        listaFrecuencia->setObjectName(QString::fromUtf8("listaFrecuencia"));
        listaFrecuencia->setGeometry(QRect(770, 20, 86, 25));
        frameColisiones = new QFrame(DInfoBolas);
        frameColisiones->setObjectName(QString::fromUtf8("frameColisiones"));
        frameColisiones->setGeometry(QRect(220, 300, 400, 400));
        frameColisiones->setFrameShape(QFrame::StyledPanel);
        frameColisiones->setFrameShadow(QFrame::Raised);
        label = new QLabel(DInfoBolas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 310, 81, 16));

        retranslateUi(DInfoBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DInfoBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DInfoBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DInfoBolas);
    } // setupUi

    void retranslateUi(QDialog *DInfoBolas)
    {
        DInfoBolas->setWindowTitle(QApplication::translate("DInfoBolas", "Dialog", nullptr));
        txtFrecuencia->setText(QApplication::translate("DInfoBolas", "Frecuencia de actualizaci\303\263n", nullptr));
        label->setText(QApplication::translate("DInfoBolas", "Colisiones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DInfoBolas: public Ui_DInfoBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFOBOLAS_H
