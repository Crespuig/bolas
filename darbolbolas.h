#ifndef _DARBOLBOLAS_
#define _DARBOLBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_darbolbolas.h>
#include <QString>
#include <QTimer>
#include <QAbstractTableModel>


class DArbolBolas : public QDialog, public Ui::DArbolBolas{
    Q_OBJECT
    public:
        DArbolBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);
    

};



#endif