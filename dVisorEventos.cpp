#include "dVisorEventos.h"
#include <QVector>
#include <QString>
#include <QPainter>
#include <QHBoxLayout>
#include <QDebug>
#include <QVariant>
#include <QMouseEvent>
#include "evento.h"


WidgetEventos::WidgetEventos(QWidget * parent) : QWidget(parent){

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotTemporizador()));


    bola = NULL;


}

/*void WidgetEventos::recogerBola(Evento * evento){
    evento = evento;
}*/

DVisorEventos::DVisorEventos(QVector<Evento> *eventos, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    vector = eventos;



    ModeloEventos *m = new ModeloEventos(eventos);

    vistaTablaEventos->setModel(m);

    connect(temporizador, SIGNAL(timeout()),
        m, SLOT(slotActualizarDatosTemp()));

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotVisorEventos()));

    QString dato = QString::number(evento.instante);

    labelInfoNuevoEvento->setText("Instante " + dato);

    if (rBEliminar->isChecked()){
        delete &evento;
    }
    
    
    
}

QListWidgetItem * DVisorEventos::getInformacionEventos(Evento evento){
    QString info = (evento.tipo) + ","
                    " Pos x: " + QString::number(evento.posX) + ","
                    " Pos y: " + QString::number(evento.posY) + ","
                    " Vel x: " + QString::number(evento.instante) + ","
                    " Vel y: " + QString::number(evento.tecla) + ",";

    QListWidgetItem * item = new QListWidgetItem(info);
    
    

    return item;
}

void DVisorEventos::slotVisorEventos(){
    listaEventos->clear();

    for (int i = 0; i < vector->size(); i++){
        listaEventos->addItem(getInformacionEventos(vector->at(i)));
    }
    
}

ModeloEventos::ModeloEventos (QVector<Evento> *eventos, QObject * parent): QAbstractTableModel(parent){
    vector = eventos;
}

int ModeloEventos::rowCount(const QModelIndex &parent) const{
    return vector->size();
}

int ModeloEventos::columnCount(const QModelIndex &parent) const{
    return 4;
}

QVariant ModeloEventos::data(const QModelIndex &index, int role) const{
    int fila = index.row();
    int columna = index.column();   
    
    QString dato = QString::number(fila) + QString("-") + QString::number(columna);
    

    switch (columna){
    case 0:
        return vector->at(fila).tipo;
        break;
    case 1:
        return vector->at(fila).posX;
        break;
    case 2:
        return vector->at(fila).posY;
        break;
    case 3:
        return vector->at(fila).instante;
        break;   
    
    };
    return QVariant(); 

}



void ModeloEventos::slotActualizarDatosTemp(){
    QModelIndex topLeft = index(0, 0);
    QModelIndex bottomRight = index(vector->size(), 3);
    
    emit dataChanged(topLeft, bottomRight);
    emit layoutChanged();
    
}


