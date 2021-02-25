/********************************************************************************
** Form generated from reading UI file 'dinfohijas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFOHIJAS_H
#define UI_DINFOHIJAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DinfoHijas
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabBolasHijas;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QDialog *DinfoHijas)
    {
        if (DinfoHijas->objectName().isEmpty())
            DinfoHijas->setObjectName(QString::fromUtf8("DinfoHijas"));
        DinfoHijas->resize(1058, 752);
        buttonBox = new QDialogButtonBox(DinfoHijas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(710, 710, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabBolasHijas = new QTabWidget(DinfoHijas);
        tabBolasHijas->setObjectName(QString::fromUtf8("tabBolasHijas"));
        tabBolasHijas->setGeometry(QRect(10, 10, 1041, 691));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabBolasHijas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabBolasHijas->addTab(tab_2, QString());

        retranslateUi(DinfoHijas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DinfoHijas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DinfoHijas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DinfoHijas);
    } // setupUi

    void retranslateUi(QDialog *DinfoHijas)
    {
        DinfoHijas->setWindowTitle(QApplication::translate("DinfoHijas", "Dialog", nullptr));
        tabBolasHijas->setTabText(tabBolasHijas->indexOf(tab), QApplication::translate("DinfoHijas", "Tab 1", nullptr));
        tabBolasHijas->setTabText(tabBolasHijas->indexOf(tab_2), QApplication::translate("DinfoHijas", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DinfoHijas: public Ui_DinfoHijas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFOHIJAS_H
