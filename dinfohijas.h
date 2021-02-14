#ifndef _DINFOHIJAS_
#define _DINFOHIJAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dinfohijas.h>
#include <QString>
#include <QTimer>
#include "widgetbolatabla.h"

class DInfoHijas : public QDialog, public Ui::DinfoHijas{
    Q_OBJECT
    public:
    DInfoHijas(QVector<Bola *> * elVector, QWidget * parent = nullptr);
    QVector <Bola *> * miVector;

    public slots:
        void slotBolaNueva(Bola *);

};

#endif