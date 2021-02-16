/********************************************************************************
** Form generated from reading UI file 'dNombresBolas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNOMBRESBOLAS_H
#define UI_DNOMBRESBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DNombresBolas
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabNombresBolas;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkResaltar;
    QPushButton *botonMenu;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DNombresBolas)
    {
        if (DNombresBolas->objectName().isEmpty())
            DNombresBolas->setObjectName(QString::fromUtf8("DNombresBolas"));
        DNombresBolas->resize(420, 413);
        verticalLayout = new QVBoxLayout(DNombresBolas);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabNombresBolas = new QTabWidget(DNombresBolas);
        tabNombresBolas->setObjectName(QString::fromUtf8("tabNombresBolas"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabNombresBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabNombresBolas->addTab(tab_2, QString());

        verticalLayout->addWidget(tabNombresBolas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkResaltar = new QCheckBox(DNombresBolas);
        checkResaltar->setObjectName(QString::fromUtf8("checkResaltar"));

        horizontalLayout->addWidget(checkResaltar);

        botonMenu = new QPushButton(DNombresBolas);
        botonMenu->setObjectName(QString::fromUtf8("botonMenu"));

        horizontalLayout->addWidget(botonMenu);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DNombresBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DNombresBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DNombresBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DNombresBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DNombresBolas);
    } // setupUi

    void retranslateUi(QDialog *DNombresBolas)
    {
        DNombresBolas->setWindowTitle(QApplication::translate("DNombresBolas", "Dialog", nullptr));
        tabNombresBolas->setTabText(tabNombresBolas->indexOf(tab), QApplication::translate("DNombresBolas", "Tab 1", nullptr));
        tabNombresBolas->setTabText(tabNombresBolas->indexOf(tab_2), QApplication::translate("DNombresBolas", "Tab 2", nullptr));
        checkResaltar->setText(QApplication::translate("DNombresBolas", "Resaltar Mismo Nombre", nullptr));
        botonMenu->setText(QApplication::translate("DNombresBolas", "Bola Actual a Men\303\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DNombresBolas: public Ui_DNombresBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNOMBRESBOLAS_H
