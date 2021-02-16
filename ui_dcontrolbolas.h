/********************************************************************************
** Form generated from reading UI file 'dcontrolbolas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONTROLBOLAS_H
#define UI_DCONTROLBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DControlBolas
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabBolas;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *botonPararBola;
    QCheckBox *checkTodas;
    QPushButton *botonAcelerar;
    QPushButton *botonFrenar;

    void setupUi(QDialog *DControlBolas)
    {
        if (DControlBolas->objectName().isEmpty())
            DControlBolas->setObjectName(QString::fromUtf8("DControlBolas"));
        DControlBolas->resize(573, 408);
        buttonBox = new QDialogButtonBox(DControlBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 370, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabBolas = new QTabWidget(DControlBolas);
        tabBolas->setObjectName(QString::fromUtf8("tabBolas"));
        tabBolas->setGeometry(QRect(10, 10, 541, 311));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabBolas->addTab(tab_2, QString());
        botonPararBola = new QPushButton(DControlBolas);
        botonPararBola->setObjectName(QString::fromUtf8("botonPararBola"));
        botonPararBola->setGeometry(QRect(10, 340, 89, 25));
        checkTodas = new QCheckBox(DControlBolas);
        checkTodas->setObjectName(QString::fromUtf8("checkTodas"));
        checkTodas->setGeometry(QRect(110, 340, 92, 23));
        botonAcelerar = new QPushButton(DControlBolas);
        botonAcelerar->setObjectName(QString::fromUtf8("botonAcelerar"));
        botonAcelerar->setGeometry(QRect(470, 330, 89, 25));
        botonFrenar = new QPushButton(DControlBolas);
        botonFrenar->setObjectName(QString::fromUtf8("botonFrenar"));
        botonFrenar->setGeometry(QRect(370, 330, 89, 25));

        retranslateUi(DControlBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DControlBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DControlBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DControlBolas);
    } // setupUi

    void retranslateUi(QDialog *DControlBolas)
    {
        DControlBolas->setWindowTitle(QApplication::translate("DControlBolas", "Dialog", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab), QApplication::translate("DControlBolas", "Tab 1", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab_2), QApplication::translate("DControlBolas", "Tab 2", nullptr));
        botonPararBola->setText(QApplication::translate("DControlBolas", "Parar bola", nullptr));
        checkTodas->setText(QApplication::translate("DControlBolas", "CheckBox", nullptr));
        botonAcelerar->setText(QApplication::translate("DControlBolas", "Acelerar", nullptr));
        botonFrenar->setText(QApplication::translate("DControlBolas", "Frenar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DControlBolas: public Ui_DControlBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONTROLBOLAS_H
