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
    return 4;
}

QVariant ModeloBolasInfo::data(const QModelIndex &index, int role) const{
    int fila = index.row();
    int columna = index.column();   
    
    QString dato = QString::number(fila) + QString("-") + QString::number(columna);

    if (role != Qt::DisplayRole && role != Qt::DecorationRole){
        return QVariant();
    }

    if (role == Qt::DecorationRole && columna == 2){
        if (vector->at(fila)->velX >= 0){
            QColor colorGreen = "green";
            return QVariant(colorGreen);
        }else{
            QColor colorRed = "red";
            return QVariant(colorRed);
        }
    }

    if (role == Qt::DecorationRole && columna == 3){
        if (vector->at(fila)->velY >= 0){
            QColor colorGreen = "green";
            return QVariant(colorGreen);
        }else{
            QColor colorRed = "red";
            return QVariant(colorRed);
        }  
    }

    if (role == Qt::DecorationRole && columna <= 1){
        QColor color = vector->at(fila)->color;
        return QVariant(color); 
    }
    

    switch (columna){
    case 0:
        return vector->at(fila)->posicionX;
        break;
    case 1:
        return vector->at(fila)->posicionY;
        break;
    case 2:
        return vector->at(fila)->velX;
        break;
    case 3:
        return vector->at(fila)->velY;
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
            return QString("PosX");
            break;
        case 1:
            return QString("PosY");
            break;
        case 2:
            return QString("VelX");
            break;
        case 3:
            return QString("VelY");
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
