#ifndef _DINFOBOLAS_
#define _DINFOBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dinfobolas.h>
#include <QString>
#include <QTimer>

class DInfoBolas : public QDialog, public Ui::DInfoBolas{
    Q_OBJECT
    public:
        DInfoBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);

        QVector <Bola*>*vector;
        QTimer *temporizador;

        QString getInformacionBolas(Bola *bola);

    public slots:
        void slotInfoBolas();     

};

#endif