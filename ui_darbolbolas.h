/********************************************************************************
** Form generated from reading UI file 'darbolbolas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARBOLBOLAS_H
#define UI_DARBOLBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DArbolBolas
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *vistaArbol;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DArbolBolas)
    {
        if (DArbolBolas->objectName().isEmpty())
            DArbolBolas->setObjectName(QString::fromUtf8("DArbolBolas"));
        DArbolBolas->resize(479, 399);
        verticalLayout = new QVBoxLayout(DArbolBolas);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        vistaArbol = new QTreeView(DArbolBolas);
        vistaArbol->setObjectName(QString::fromUtf8("vistaArbol"));

        verticalLayout->addWidget(vistaArbol);

        buttonBox = new QDialogButtonBox(DArbolBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DArbolBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DArbolBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DArbolBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DArbolBolas);
    } // setupUi

    void retranslateUi(QDialog *DArbolBolas)
    {
        DArbolBolas->setWindowTitle(QApplication::translate("DArbolBolas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DArbolBolas: public Ui_DArbolBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARBOLBOLAS_H
