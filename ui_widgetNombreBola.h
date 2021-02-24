/********************************************************************************
** Form generated from reading UI file 'widgetNombreBola.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETNOMBREBOLA_H
#define UI_WIDGETNOMBREBOLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetNombreBola
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lNombreBola;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboNombre;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QFrame *frameImagen;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *botonCambiarNombre;

    void setupUi(QWidget *WidgetNombreBola)
    {
        if (WidgetNombreBola->objectName().isEmpty())
            WidgetNombreBola->setObjectName(QStringLiteral("WidgetNombreBola"));
        WidgetNombreBola->resize(270, 341);
        verticalLayout_2 = new QVBoxLayout(WidgetNombreBola);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(WidgetNombreBola);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lNombreBola = new QLabel(WidgetNombreBola);
        lNombreBola->setObjectName(QStringLiteral("lNombreBola"));

        horizontalLayout->addWidget(lNombreBola);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(WidgetNombreBola);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboNombre = new QComboBox(WidgetNombreBola);
        comboNombre->setObjectName(QStringLiteral("comboNombre"));

        horizontalLayout_2->addWidget(comboNombre);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        label_3 = new QLabel(WidgetNombreBola);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        frameImagen = new QFrame(WidgetNombreBola);
        frameImagen->setObjectName(QStringLiteral("frameImagen"));
        frameImagen->setMinimumSize(QSize(244, 204));
        frameImagen->setFrameShape(QFrame::StyledPanel);
        frameImagen->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frameImagen);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        botonCambiarNombre = new QPushButton(WidgetNombreBola);
        botonCambiarNombre->setObjectName(QStringLiteral("botonCambiarNombre"));

        horizontalLayout_4->addWidget(botonCambiarNombre);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(WidgetNombreBola);

        QMetaObject::connectSlotsByName(WidgetNombreBola);
    } // setupUi

    void retranslateUi(QWidget *WidgetNombreBola)
    {
        WidgetNombreBola->setWindowTitle(QApplication::translate("WidgetNombreBola", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("WidgetNombreBola", "Nombre Actual", Q_NULLPTR));
        lNombreBola->setText(QApplication::translate("WidgetNombreBola", "Fulano", Q_NULLPTR));
        label_2->setText(QApplication::translate("WidgetNombreBola", "Nuevo Nombre", Q_NULLPTR));
        label_3->setText(QApplication::translate("WidgetNombreBola", "Color o Imagen", Q_NULLPTR));
        botonCambiarNombre->setText(QApplication::translate("WidgetNombreBola", "Cambiar Nombre", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetNombreBola: public Ui_WidgetNombreBola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETNOMBREBOLA_H
