#include "dtablabolas.h"
#include <QVector>
#include <QString>


DTablaBolas::DTablaBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    ModeloBolas *m = new ModeloBolas(bolas);

    tablaBolas->setModel(m);
    
}

ModeloBolas::ModeloBolas (QVector<Bola *> * lasBolas, QObject * parent): QAbstractTableModel(parent){
    vector = lasBolas;
}

int ModeloBolas::rowCount(const QModelIndex &parent) const{
    return 3;
}

int ModeloBolas::columnCount(const QModelIndex &parent) const{
    return 4;
}

QVariant ModeloBolas::data(const QModelIndex &index, int role) const{
    int fila = index.row();
    int columna = index.column();   
    
    QString dato = QString::number(fila) + QString("-") + QString::number(columna);

    if (role != Qt::DisplayRole){
        return QVariant();
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