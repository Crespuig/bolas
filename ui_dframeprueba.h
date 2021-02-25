/********************************************************************************
** Form generated from reading UI file 'dframeprueba.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFRAMEPRUEBA_H
#define UI_DFRAMEPRUEBA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_DFramePrueba
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *framePrueba;

    void setupUi(QDialog *DFramePrueba)
    {
        if (DFramePrueba->objectName().isEmpty())
            DFramePrueba->setObjectName(QString::fromUtf8("DFramePrueba"));
        DFramePrueba->resize(567, 488);
        buttonBox = new QDialogButtonBox(DFramePrueba);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(150, 440, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        framePrueba = new QFrame(DFramePrueba);
        framePrueba->setObjectName(QString::fromUtf8("framePrueba"));
        framePrueba->setGeometry(QRect(90, 20, 400, 400));
        framePrueba->setFrameShape(QFrame::StyledPanel);
        framePrueba->setFrameShadow(QFrame::Raised);

        retranslateUi(DFramePrueba);
        QObject::connect(buttonBox, SIGNAL(accepted()), DFramePrueba, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DFramePrueba, SLOT(reject()));

        QMetaObject::connectSlotsByName(DFramePrueba);
    } // setupUi

    void retranslateUi(QDialog *DFramePrueba)
    {
        DFramePrueba->setWindowTitle(QApplication::translate("DFramePrueba", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFramePrueba: public Ui_DFramePrueba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFRAMEPRUEBA_H
