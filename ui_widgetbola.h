/********************************************************************************
** Form generated from reading UI file 'widgetbola.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETBOLA_H
#define UI_WIDGETBOLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetBola
{
public:
    QPushButton *botonColor;
    QPushButton *botonParar;
    QTableView *tablaInfoHijas;

    void setupUi(QWidget *WidgetBola)
    {
        if (WidgetBola->objectName().isEmpty())
            WidgetBola->setObjectName(QString::fromUtf8("WidgetBola"));
        WidgetBola->resize(663, 353);
        botonColor = new QPushButton(WidgetBola);
        botonColor->setObjectName(QString::fromUtf8("botonColor"));
        botonColor->setGeometry(QRect(0, 10, 89, 25));
        botonParar = new QPushButton(WidgetBola);
        botonParar->setObjectName(QString::fromUtf8("botonParar"));
        botonParar->setGeometry(QRect(0, 40, 89, 25));
        tablaInfoHijas = new QTableView(WidgetBola);
        tablaInfoHijas->setObjectName(QString::fromUtf8("tablaInfoHijas"));
        tablaInfoHijas->setGeometry(QRect(100, 10, 551, 311));

        retranslateUi(WidgetBola);

        QMetaObject::connectSlotsByName(WidgetBola);
    } // setupUi

    void retranslateUi(QWidget *WidgetBola)
    {
        WidgetBola->setWindowTitle(QApplication::translate("WidgetBola", "Form", nullptr));
        botonColor->setText(QApplication::translate("WidgetBola", "Elegir color", nullptr));
        botonParar->setText(QApplication::translate("WidgetBola", "Parar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetBola: public Ui_WidgetBola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBOLA_H
