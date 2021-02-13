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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetBola
{
public:
    QPushButton *botonColor;
    QPushButton *botonParar;

    void setupUi(QWidget *WidgetBola)
    {
        if (WidgetBola->objectName().isEmpty())
            WidgetBola->setObjectName(QStringLiteral("WidgetBola"));
        WidgetBola->resize(171, 111);
        botonColor = new QPushButton(WidgetBola);
        botonColor->setObjectName(QStringLiteral("botonColor"));
        botonColor->setGeometry(QRect(40, 10, 89, 25));
        botonParar = new QPushButton(WidgetBola);
        botonParar->setObjectName(QStringLiteral("botonParar"));
        botonParar->setGeometry(QRect(40, 50, 89, 25));

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
