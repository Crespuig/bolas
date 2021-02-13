#include "dtablainfo.h"
#include <QVector>
#include <QString>
#include <QColor>


DTablaInfo::DTablaInfo(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    ModeloBolasInfo *m = new ModeloBolasInfo(bolas);

    tablaInfo->setModel(m);

    /*connect(botonActualizar, SIGNAL(clicked()),
        m, SLOT(slotActualizarDatos()));*/

    connect(temporizador, SIGNAL(timeout()),
        m, SLOT(slotActualizarDatosTemp()));
    
}

ModeloBolasInfo::ModeloBolasInfo (QVector<Bola *> * bolas, QObject * parent): QAbstractTableModel(parent){
    vector = bolas;
}

int ModeloBolasInfo::rowCount(const QModelIndex &parent) const{
    return vector->size();
}

int ModeloBolasInfo::columnCount(const QModelIndex &parent) const{
    return 6;
}

QVariant ModeloBolasInfo::data(const QModelIndex &index, int role) const{
    int fila = index.row();
    int columna = index.column();   
    
    QString dato = QString::number(fila) + QString("-") + QString::number(columna);

    if (role != Qt::DisplayRole && role != Qt::DecorationRole){
        return QVariant();
    }

    if (role == Qt::DecorationRole && columna == 3){
        if (vector->at(fila)->vida <= 0){
            QColor colorGreen = "red";
            return QVariant(colorGreen);
        }else{
            QColor colorRed = "green";
            return QVariant(colorRed);
        }
    }


    if (role == Qt::DecorationRole && columna <= 1){
        QColor color = vector->at(fila)->color;
        return QVariant(color); 
    }
    

    switch (columna){
    case 0:
        return vector->at(fila)->nombre;
        break;
    case 1:
        return vector->at(fila)->colision;
        break;
    case 2:
        return vector->at(fila)->colisionParedes;
        break;
    case 3:
        return vector->at(fila)->vida;
        break;
    case 4:
        return vector->at(fila)->hijas.size();
        break;
    case 5:
        if(vector->at(fila)->padre != NULL)
            return vector->at(fila)->padre->nombre;
        return QString("Sin padre");
        break;
    
    };
    return QVariant(); 

}

QVariant ModeloBolasInfo::headerData(int section, Qt::Orientation orientation, int role) const{

    if (role != Qt::DisplayRole){
        return QVariant();
    }

    if (orientation == Qt::Vertical){
        return section;
    }
    
    switch (section){
        case 0:
            return QString("nombre");
            break;
        case 1:
            return QString("Colisiones");
            break;
        case 2:
            return QString("Col. pared");
            break;
        case 3:
            return QString("Vida");
            break;
        case 4:
            return QString("Hijas");
            break;
        case 5:
            return QString("Padre");
            break;
    };
    return QVariant();
}


void ModeloBolasInfo::slotActualizarDatos(){
    
    emit layoutChanged();
    
}

void ModeloBolasInfo::slotActualizarDatosTemp(){
    QModelIndex topLeft = index(0, 0);
    QModelIndex bottomRight = index(vector->size(), 3);
    
    emit dataChanged(topLeft, bottomRight);
    emit layoutChanged();
    
}
