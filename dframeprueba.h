#ifndef _DFRAMEPRUEBA_
#define _DFRAMEPRUEBA_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dframeprueba.h>
#include <QString>
#include <QTimer>
#include <QPaintEvent>

/*class Onda{
    public:
        Onda();
        Onda(int x, int y);
        int posX, posY, ciclos;

};*/

//paso importante
class WidgetLineas : public QWidget {
Q_OBJECT
    public:
        int anchoPrincipal, altoPrincipal;
        WidgetLineas(int ancho, int alto, QVector<Bola *>*,QWidget * parent = NULL);
        QVector<Bola *> *vector;

        void paintEvent (QPaintEvent *);

        QTimer *temporizador;

    public slots:
        void slotTemporizador();    

};

class DFramePrueba : public QDialog, public Ui::DFramePrueba{
    Q_OBJECT
    public:
        DFramePrueba(QVector<Bola*> *bolas, QWidget * parent = nullptr);

        QVector <Bola*>*vector;

        WidgetLineas * wl;

        QTimer *temporizador;
        
    public slots:
        //void slotActualizarVector(); 
};

#endif