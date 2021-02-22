#ifndef _DINFOBOLAS_
#define _DINFOBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dinfobolas.h>
#include <QString>
#include <QTimer>
#include <QPaintEvent>

class Onda{
    public:
        Onda();
        Onda(int x, int y);
        int posX, posY, ciclos;

};

//paso importante
class WidgetOndas : public QWidget {
Q_OBJECT
    public:
        int anchoPrincipal, altoPrincipal;
        WidgetOndas(int ancho, int alto, QWidget * parent = NULL);
        QVector<Onda> ondas;

        void paintEvent (QPaintEvent *);

        void nuevaOnda(int x, int y);

};

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