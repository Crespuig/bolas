#include "dtablabolas.h"
#include <QVector>
#include <QString>


DTablaBolas::DTablaBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    ModeloBolas *m = new ModeloBolas();

    tablaBolas->setModel(m);
    
}


int ModeloBolas::rowCount(const QModelIndex &parent) const{
    return 2;
}

int ModeloBolas::columnCount(const QModelIndex &parent) const{
    return 3;
}

QVariant ModeloBolas::data(const QModelIndex &index, int role) const{
    return QString("hola");
}