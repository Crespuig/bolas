/********************************************************************************
** Form generated from reading UI file 'widgetbola.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETBOLA_H
#define UI_WIDGETBOLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
            WidgetBola->setObjectName(QStringLiteral("WidgetBola"));
        WidgetBola->resize(663, 353);
        botonColor = new QPushButton(WidgetBola);
        botonColor->setObjectName(QStringLiteral("botonColor"));
        botonColor->setGeometry(QRect(0, 10, 89, 25));
        botonParar = new QPushButton(WidgetBola);
        botonParar->setObjectName(QStringLiteral("botonParar"));
        botonParar->setGeometry(QRect(0, 40, 89, 25));
        tablaInfoHijas = new QTableView(WidgetBola);
        tablaInfoHijas->setObjectName(QStringLiteral("tablaInfoHijas"));
        tablaInfoHijas->setGeometry(QRect(100, 10, 551, 311));

        retranslateUi(WidgetBola);

        QMetaObject::connectSlotsByName(WidgetBola);
    } // setupUi

    void retranslateUi(QWidget *WidgetBola)
    {
        WidgetBola->setWindowTitle(QApplication::translate("WidgetBola", "Form", Q_NULLPTR));
        botonColor->setText(QApplication::translate("WidgetBola", "Elegir color", Q_NULLPTR));
        botonParar->setText(QApplication::translate("WidgetBola", "Parar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WidgetBola: public Ui_WidgetBola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBOLA_H
