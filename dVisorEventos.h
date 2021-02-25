#ifndef _DVISOREVENTOS_
#define _DVISOREVENTOS

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dVisorEventos.h>
#include <QString>
#include <QTimer>
#include <QPaintEvent>
#include "evento.h"



class WidgetEventos : public QWidget {
Q_OBJECT
    public:
        int anchoPrincipal, altoPrincipal;
        WidgetEventos(QWidget * parent = NULL);
        QVector<Bola *> *vector;

        //void paintEvent (QPaintEvent *);

        QTimer *temporizador;

        Bola * bola;

        //void recogerBola(Evento *);

    protected:
        //void mousePressEvent(QMouseEvent *);    

    public slots:
        //void slotTemporizador();    

};

class ModeloEventos : public QAbstractTableModel{
    Q_OBJECT
    public:
        ModeloEventos(QVector<Evento> *eventos, QObject * parent = nullptr);

        QVector<Evento> *vector;
        QString getInformacionEventoTabla(Evento );

        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;

        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)const;
        //QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole)const;

        public slots:
            //void slotActualizarDatos();
            void slotActualizarDatosTemp();
};

class DVisorEventos : public QDialog, public Ui::DVisorEventos{
    Q_OBJECT
    public:
        DVisorEventos(QVector<Evento> *eventos, QWidget * parent = nullptr);

        QVector <Evento>*vector;

        //WidgetLineas * wl;

        QTimer *temporizador;
        
        Evento evento;

        WidgetEventos *we;

        QListWidgetItem * getInformacionEventos(Evento );

    public slots:
        void slotVisorEventos();     
        //void slotRecogerBola(QListWidgetItem *);
        //void slotTemporizador();

};

#endif