#ifndef _DNOMBRESBOLAS_
#define _DNOMBRESBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dNombresBolas.h>
#include <QString>
#include <QTimer>
#include <QAbstractItemModel>
#include "widgetNombreBola.h"


class DNombresBolas : public QDialog, public Ui::DNombresBolas{
    Q_OBJECT
    public:
        DNombresBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);
        QVector <Bola *> * miVector;

    public slots:
        void slotBolaNueva(Bola *);
    

};

#endif