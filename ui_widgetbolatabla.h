/********************************************************************************
** Form generated from reading UI file 'widgetbolatabla.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETBOLATABLA_H
#define UI_WIDGETBOLATABLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetBolaTabla
{
public:
    QTableView *tablaHijas;

    void setupUi(QWidget *widgetBolaTabla)
    {
        if (widgetBolaTabla->objectName().isEmpty())
            widgetBolaTabla->setObjectName(QStringLiteral("widgetBolaTabla"));
        widgetBolaTabla->resize(1033, 417);
        tablaHijas = new QTableView(widgetBolaTabla);
        tablaHijas->setObjectName(QStringLiteral("tablaHijas"));
        tablaHijas->setGeometry(QRect(15, 11, 1011, 391));

        retranslateUi(widgetBolaTabla);

        QMetaObject::connectSlotsByName(widgetBolaTabla);
    } // setupUi

    void retranslateUi(QWidget *widgetBolaTabla)
    {
        widgetBolaTabla->setWindowTitle(QApplication::translate("widgetBolaTabla", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetBolaTabla: public Ui_widgetBolaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBOLATABLA_H
