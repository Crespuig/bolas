/********************************************************************************
** Form generated from reading UI file 'dcontrolbolas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONTROLBOLAS_H
#define UI_DCONTROLBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
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
            DControlBolas->setObjectName(QStringLiteral("DControlBolas"));
        DControlBolas->resize(573, 408);
        buttonBox = new QDialogButtonBox(DControlBolas);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(220, 370, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabBolas = new QTabWidget(DControlBolas);
        tabBolas->setObjectName(QStringLiteral("tabBolas"));
        tabBolas->setGeometry(QRect(10, 10, 541, 311));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabBolas->addTab(tab_2, QString());
        botonPararBola = new QPushButton(DControlBolas);
        botonPararBola->setObjectName(QStringLiteral("botonPararBola"));
        botonPararBola->setGeometry(QRect(10, 340, 89, 25));
        checkTodas = new QCheckBox(DControlBolas);
        checkTodas->setObjectName(QStringLiteral("checkTodas"));
        checkTodas->setGeometry(QRect(110, 340, 92, 23));
        botonAcelerar = new QPushButton(DControlBolas);
        botonAcelerar->setObjectName(QStringLiteral("botonAcelerar"));
        botonAcelerar->setGeometry(QRect(470, 330, 89, 25));
        botonFrenar = new QPushButton(DControlBolas);
        botonFrenar->setObjectName(QStringLiteral("botonFrenar"));
        botonFrenar->setGeometry(QRect(370, 330, 89, 25));

        retranslateUi(DControlBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DControlBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DControlBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DControlBolas);
    } // setupUi

    void retranslateUi(QDialog *DControlBolas)
    {
        DControlBolas->setWindowTitle(QApplication::translate("DControlBolas", "Dialog", Q_NULLPTR));
        tabBolas->setTabText(tabBolas->indexOf(tab), QApplication::translate("DControlBolas", "Tab 1", Q_NULLPTR));
        tabBolas->setTabText(tabBolas->indexOf(tab_2), QApplication::translate("DControlBolas", "Tab 2", Q_NULLPTR));
        botonPararBola->setText(QApplication::translate("DControlBolas", "Parar bola", Q_NULLPTR));
        checkTodas->setText(QApplication::translate("DControlBolas", "CheckBox", Q_NULLPTR));
        botonAcelerar->setText(QApplication::translate("DControlBolas", "Acelerar", Q_NULLPTR));
        botonFrenar->setText(QApplication::translate("DControlBolas", "Frenar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DControlBolas: public Ui_DControlBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONTROLBOLAS_H
