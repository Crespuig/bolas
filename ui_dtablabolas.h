/********************************************************************************
** Form generated from reading UI file 'dtablabolas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTABLABOLAS_H
#define UI_DTABLABOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DTablaBolas
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tablaBolas;
    QPushButton *botonActualizar;

    void setupUi(QDialog *DTablaBolas)
    {
        if (DTablaBolas->objectName().isEmpty())
            DTablaBolas->setObjectName(QStringLiteral("DTablaBolas"));
        DTablaBolas->resize(506, 395);
        buttonBox = new QDialogButtonBox(DTablaBolas);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tablaBolas = new QTableView(DTablaBolas);
        tablaBolas->setObjectName(QStringLiteral("tablaBolas"));
        tablaBolas->setGeometry(QRect(20, 11, 431, 321));
        botonActualizar = new QPushButton(DTablaBolas);
        botonActualizar->setObjectName(QStringLiteral("botonActualizar"));
        botonActualizar->setGeometry(QRect(50, 350, 89, 25));

        retranslateUi(DTablaBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DTablaBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DTablaBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DTablaBolas);
    } // setupUi

    void retranslateUi(QDialog *DTablaBolas)
    {
        DTablaBolas->setWindowTitle(QApplication::translate("DTablaBolas", "Dialog", Q_NULLPTR));
        botonActualizar->setText(QApplication::translate("DTablaBolas", "Actualizar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DTablaBolas: public Ui_DTablaBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTABLABOLAS_H
