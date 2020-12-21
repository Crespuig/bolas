#include "dtablabolas.h"
#include <QVector>
#include <QString>
#include <QColor>


DTablaBolas::DTablaBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    ModeloBolas *m = new ModeloBolas(bolas);

    tablaBolas->setModel(m);

    /*connect(botonActualizar, SIGNAL(clicked()),
        m, SLOT(slotActualizarDatos()));*/

    connect(temporizador, SIGNAL(timeout()),
        m, SLOT(slotActualizarDatosTemp()));
    
}

ModeloBolas::ModeloBolas (QVector<Bola *> * bolas, QObject * parent): QAbstractTableModel(parent){
    vector = bolas;
}

int ModeloBolas::rowCount(const QModelIndex &parent) const{
    return vector->size();
}

int ModeloBolas::columnCount(const QModelIndex &parent) const{
    return 4;
}

QVariant ModeloBolas::data(const QModelIndex &index, int role) const{
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

QVariant ModeloBolas::headerData(int section, Qt::Orientation orientation, int role) const{

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


void ModeloBolas::slotActualizarDatos(){
    
    emit layoutChanged();
    
}

void ModeloBolas::slotActualizarDatosTemp(){
    QModelIndex topLeft = index(0, 0);
    QModelIndex bottomRight = index(vector->size(), 3);
    
    emit dataChanged(topLeft, bottomRight);
    emit layoutChanged();
    
}
