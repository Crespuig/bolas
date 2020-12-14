/********************************************************************************
** Form generated from reading UI file 'dtablabolas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTABLABOLAS_H
#define UI_DTABLABOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DTablaBolas
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tablaBolas;

    void setupUi(QDialog *DTablaBolas)
    {
        if (DTablaBolas->objectName().isEmpty())
            DTablaBolas->setObjectName(QString::fromUtf8("DTablaBolas"));
        DTablaBolas->resize(505, 395);
        buttonBox = new QDialogButtonBox(DTablaBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tablaBolas = new QTableView(DTablaBolas);
        tablaBolas->setObjectName(QString::fromUtf8("tablaBolas"));
        tablaBolas->setGeometry(QRect(20, 11, 461, 321));

        retranslateUi(DTablaBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DTablaBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DTablaBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DTablaBolas);
    } // setupUi

    void retranslateUi(QDialog *DTablaBolas)
    {
        DTablaBolas->setWindowTitle(QApplication::translate("DTablaBolas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DTablaBolas: public Ui_DTablaBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTABLABOLAS_H
