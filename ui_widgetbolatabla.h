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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widgetBolaTabla
{
public:
    QTableView *tablaHijas;
    QCheckBox *checkBoxHijas;
    QComboBox *listaHijas;
    QFrame *frameCoordenadas;

    void setupUi(QWidget *widgetBolaTabla)
    {
        if (widgetBolaTabla->objectName().isEmpty())
            widgetBolaTabla->setObjectName(QStringLiteral("widgetBolaTabla"));
        widgetBolaTabla->resize(1033, 600);
        tablaHijas = new QTableView(widgetBolaTabla);
        tablaHijas->setObjectName(QStringLiteral("tablaHijas"));
        tablaHijas->setGeometry(QRect(15, 11, 1011, 391));
        checkBoxHijas = new QCheckBox(widgetBolaTabla);
        checkBoxHijas->setObjectName(QStringLiteral("checkBoxHijas"));
        checkBoxHijas->setGeometry(QRect(330, 500, 92, 23));
        listaHijas = new QComboBox(widgetBolaTabla);
        listaHijas->setObjectName(QStringLiteral("listaHijas"));
        listaHijas->setGeometry(QRect(260, 410, 171, 31));
        frameCoordenadas = new QFrame(widgetBolaTabla);
        frameCoordenadas->setObjectName(QStringLiteral("frameCoordenadas"));
        frameCoordenadas->setGeometry(QRect(440, 410, 361, 181));
        frameCoordenadas->setFrameShape(QFrame::StyledPanel);
        frameCoordenadas->setFrameShadow(QFrame::Raised);

        retranslateUi(widgetBolaTabla);

        QMetaObject::connectSlotsByName(widgetBolaTabla);
    } // setupUi

    void retranslateUi(QWidget *widgetBolaTabla)
    {
        widgetBolaTabla->setWindowTitle(QApplication::translate("widgetBolaTabla", "Form", Q_NULLPTR));
        checkBoxHijas->setText(QApplication::translate("widgetBolaTabla", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class widgetBolaTabla: public Ui_widgetBolaTabla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBOLATABLA_H
