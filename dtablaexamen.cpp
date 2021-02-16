#include "dtablaexamen.h"
#include <QVector>
#include <QString>
#include <QColor>


DTablaExamen::DTablaExamen(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    ModeloTablaExamen *m = new ModeloTablaExamen(bolas);

    tablaExamen->setModel(m);

    connect(temporizador, SIGNAL(timeout()),
        m, SLOT(slotActualizarDatosTemp()));
    
}

ModeloTablaExamen::ModeloTablaExamen (QVector<Bola *> * bolas, QObject * parent): QAbstractTableModel(parent){
    vector = bolas;
}

int ModeloTablaExamen::rowCount(const QModelIndex &parent) const{
    return vector->size();
}

int ModeloTablaExamen::columnCount(const QModelIndex &parent) const{
    return 2;
}

QVariant ModeloTablaExamen::data(const QModelIndex &index, int role) const{
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
        return vector->at(fila)->lista;
        break;
    
    
    };
    return QVariant(); 

}

QVariant ModeloTablaExamen::headerData(int section, Qt::Orientation orientation, int role) const{

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
            return QString("Cant.mismo");
            break;
    };
    return QVariant();
}


void ModeloTablaExamen::slotActualizarDatos(){
    
    emit layoutChanged();
    
}

void ModeloTablaExamen::slotActualizarDatosTemp(){
    QModelIndex topLeft = index(0, 0);
    QModelIndex bottomRight = index(vector->size(), 3);
    
    emit dataChanged(topLeft, bottomRight);
    emit layoutChanged();
    
}
