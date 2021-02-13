/********************************************************************************
** Form generated from reading UI file 'dtablainfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DTABLAINFO_H
#define UI_DTABLAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_dTablaInfo
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tablaInfo;

    void setupUi(QDialog *dTablaInfo)
    {
        if (dTablaInfo->objectName().isEmpty())
            dTablaInfo->setObjectName(QStringLiteral("dTablaInfo"));
        dTablaInfo->resize(829, 602);
        buttonBox = new QDialogButtonBox(dTablaInfo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(470, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tablaInfo = new QTableView(dTablaInfo);
        tablaInfo->setObjectName(QStringLiteral("tablaInfo"));
        tablaInfo->setGeometry(QRect(5, 11, 811, 551));

        retranslateUi(dTablaInfo);
        QObject::connect(buttonBox, SIGNAL(accepted()), dTablaInfo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dTablaInfo, SLOT(reject()));

        QMetaObject::connectSlotsByName(dTablaInfo);
    } // setupUi

    void retranslateUi(QDialog *dTablaInfo)
    {
        dTablaInfo->setWindowTitle(QApplication::translate("dTablaInfo", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dTablaInfo: public Ui_dTablaInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DTABLAINFO_H
