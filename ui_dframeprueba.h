/********************************************************************************
** Form generated from reading UI file 'dframeprueba.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFRAMEPRUEBA_H
#define UI_DFRAMEPRUEBA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DFramePrueba
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *framePrueba;

    void setupUi(QDialog *DFramePrueba)
    {
        if (DFramePrueba->objectName().isEmpty())
            DFramePrueba->setObjectName(QStringLiteral("DFramePrueba"));
        DFramePrueba->resize(567, 488);
        buttonBox = new QDialogButtonBox(DFramePrueba);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 440, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        framePrueba = new QFrame(DFramePrueba);
        framePrueba->setObjectName(QStringLiteral("framePrueba"));
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
        DFramePrueba->setWindowTitle(QApplication::translate("DFramePrueba", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DFramePrueba: public Ui_DFramePrueba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFRAMEPRUEBA_H
