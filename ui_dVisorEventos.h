/********************************************************************************
** Form generated from reading UI file 'dVisorEventos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DVISOREVENTOS_H
#define UI_DVISOREVENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DVisorEventos
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBEliminar;
    QRadioButton *rBMostrar;
    QRadioButton *rBOcultar;
    QRadioButton *radioButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *labelInfoNuevoEvento;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboFiltroTipo;
    QListWidget *listaEventos;
    QTableView *vistaTablaEventos;

    void setupUi(QDialog *DVisorEventos)
    {
        if (DVisorEventos->objectName().isEmpty())
            DVisorEventos->setObjectName(QString::fromUtf8("DVisorEventos"));
        DVisorEventos->resize(912, 581);
        buttonBox = new QDialogButtonBox(DVisorEventos);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(330, 540, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(DVisorEventos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 380, 161, 113));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rBEliminar = new QRadioButton(groupBox);
        rBEliminar->setObjectName(QString::fromUtf8("rBEliminar"));

        verticalLayout->addWidget(rBEliminar);

        rBMostrar = new QRadioButton(groupBox);
        rBMostrar->setObjectName(QString::fromUtf8("rBMostrar"));

        verticalLayout->addWidget(rBMostrar);

        rBOcultar = new QRadioButton(groupBox);
        rBOcultar->setObjectName(QString::fromUtf8("rBOcultar"));

        verticalLayout->addWidget(rBOcultar);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);


        horizontalLayout_2->addLayout(verticalLayout);

        label = new QLabel(DVisorEventos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 57, 16));
        label_3 = new QLabel(DVisorEventos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 510, 101, 16));
        labelInfoNuevoEvento = new QLabel(DVisorEventos);
        labelInfoNuevoEvento->setObjectName(QString::fromUtf8("labelInfoNuevoEvento"));
        labelInfoNuevoEvento->setGeometry(QRect(140, 510, 181, 16));
        widget = new QWidget(DVisorEventos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(390, 370, 229, 28));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboFiltroTipo = new QComboBox(widget);
        comboFiltroTipo->setObjectName(QString::fromUtf8("comboFiltroTipo"));

        horizontalLayout_3->addWidget(comboFiltroTipo);

        listaEventos = new QListWidget(DVisorEventos);
        listaEventos->setObjectName(QString::fromUtf8("listaEventos"));
        listaEventos->setGeometry(QRect(21, 31, 281, 331));
        vistaTablaEventos = new QTableView(DVisorEventos);
        vistaTablaEventos->setObjectName(QString::fromUtf8("vistaTablaEventos"));
        vistaTablaEventos->setGeometry(QRect(320, 30, 581, 331));

        retranslateUi(DVisorEventos);
        QObject::connect(buttonBox, SIGNAL(accepted()), DVisorEventos, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DVisorEventos, SLOT(reject()));

        QMetaObject::connectSlotsByName(DVisorEventos);
    } // setupUi

    void retranslateUi(QDialog *DVisorEventos)
    {
        DVisorEventos->setWindowTitle(QApplication::translate("DVisorEventos", "Visor Eventos", nullptr));
        groupBox->setTitle(QApplication::translate("DVisorEventos", "Acci\303\263n Doble click", nullptr));
        rBEliminar->setText(QApplication::translate("DVisorEventos", "Eliminar", nullptr));
        rBMostrar->setText(QApplication::translate("DVisorEventos", "Mostrar", nullptr));
        rBOcultar->setText(QApplication::translate("DVisorEventos", "Ocultar", nullptr));
        radioButton->setText(QApplication::translate("DVisorEventos", "Editar", nullptr));
        label->setText(QApplication::translate("DVisorEventos", "Lista", nullptr));
        label_3->setText(QApplication::translate("DVisorEventos", "Nuevo Evento : ", nullptr));
        labelInfoNuevoEvento->setText(QApplication::translate("DVisorEventos", "Info NUEVOEVENTO", nullptr));
        label_2->setText(QApplication::translate("DVisorEventos", "Filtrar Por Tipo de Evento ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DVisorEventos: public Ui_DVisorEventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DVISOREVENTOS_H
