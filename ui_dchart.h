/********************************************************************************
** Form generated from reading UI file 'dchart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCHART_H
#define UI_DCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_DChart
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frameChart;

    void setupUi(QDialog *DChart)
    {
        if (DChart->objectName().isEmpty())
            DChart->setObjectName(QString::fromUtf8("DChart"));
        DChart->resize(735, 497);
        buttonBox = new QDialogButtonBox(DChart);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(380, 450, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frameChart = new QFrame(DChart);
        frameChart->setObjectName(QString::fromUtf8("frameChart"));
        frameChart->setGeometry(QRect(20, 20, 691, 421));
        frameChart->setFrameShape(QFrame::StyledPanel);
        frameChart->setFrameShadow(QFrame::Raised);

        retranslateUi(DChart);
        QObject::connect(buttonBox, SIGNAL(accepted()), DChart, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DChart, SLOT(reject()));

        QMetaObject::connectSlotsByName(DChart);
    } // setupUi

    void retranslateUi(QDialog *DChart)
    {
        DChart->setWindowTitle(QApplication::translate("DChart", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DChart: public Ui_DChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCHART_H
