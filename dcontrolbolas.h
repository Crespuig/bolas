#ifndef _DCONTROLBOLAS_
#define _DCONTROLBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dcontrolbolas.h>
#include <QString>
#include <QTimer>
#include "widgetbola.h"

class DControlBolas : public QDialog, public Ui::DControlBolas{
    Q_OBJECT
    public:
    DControlBolas(QVector<Bola *> * elVector, QWidget * parent = nullptr);
    QVector <Bola *> * miVector;

    public slots:
        void slotBotonPararBola();
        void slotBolaNueva(Bola *);

};

#endif