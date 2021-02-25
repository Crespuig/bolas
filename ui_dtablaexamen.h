/********************************************************************************
** Form generated from reading UI file 'dtablaexamen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTABLAEXAMEN_H
#define UI_DTABLAEXAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DTablaExamen
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tablaExamen;

    void setupUi(QDialog *DTablaExamen)
    {
        if (DTablaExamen->objectName().isEmpty())
            DTablaExamen->setObjectName(QString::fromUtf8("DTablaExamen"));
        DTablaExamen->resize(767, 465);
        buttonBox = new QDialogButtonBox(DTablaExamen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(420, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tablaExamen = new QTableView(DTablaExamen);
        tablaExamen->setObjectName(QString::fromUtf8("tablaExamen"));
        tablaExamen->setGeometry(QRect(10, 10, 741, 401));

        retranslateUi(DTablaExamen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DTablaExamen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DTablaExamen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DTablaExamen);
    } // setupUi

    void retranslateUi(QDialog *DTablaExamen)
    {
        DTablaExamen->setWindowTitle(QApplication::translate("DTablaExamen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DTablaExamen: public Ui_DTablaExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTABLAEXAMEN_H
