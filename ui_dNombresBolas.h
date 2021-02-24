/********************************************************************************
** Form generated from reading UI file 'dNombresBolas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DNOMBRESBOLAS_H
#define UI_DNOMBRESBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            DNombresBolas->setObjectName(QStringLiteral("DNombresBolas"));
        DNombresBolas->resize(420, 413);
        verticalLayout = new QVBoxLayout(DNombresBolas);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabNombresBolas = new QTabWidget(DNombresBolas);
        tabNombresBolas->setObjectName(QStringLiteral("tabNombresBolas"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabNombresBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabNombresBolas->addTab(tab_2, QString());

        verticalLayout->addWidget(tabNombresBolas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkResaltar = new QCheckBox(DNombresBolas);
        checkResaltar->setObjectName(QStringLiteral("checkResaltar"));

        horizontalLayout->addWidget(checkResaltar);

        botonMenu = new QPushButton(DNombresBolas);
        botonMenu->setObjectName(QStringLiteral("botonMenu"));

        horizontalLayout->addWidget(botonMenu);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DNombresBolas);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
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
        DNombresBolas->setWindowTitle(QApplication::translate("DNombresBolas", "Dialog", Q_NULLPTR));
        tabNombresBolas->setTabText(tabNombresBolas->indexOf(tab), QApplication::translate("DNombresBolas", "Tab 1", Q_NULLPTR));
        tabNombresBolas->setTabText(tabNombresBolas->indexOf(tab_2), QApplication::translate("DNombresBolas", "Tab 2", Q_NULLPTR));
        checkResaltar->setText(QApplication::translate("DNombresBolas", "Resaltar Mismo Nombre", Q_NULLPTR));
        botonMenu->setText(QApplication::translate("DNombresBolas", "Bola Actual a Men\303\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DNombresBolas: public Ui_DNombresBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DNOMBRESBOLAS_H
