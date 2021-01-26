#include "darbolbolas.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QVariant>
#include <QDebug>


DArbolBolas::DArbolBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    ModeloArbol * m = new ModeloArbol(bolas);
    vistaArbol->setModel(m);
}

ModeloArbol::ModeloArbol(QVector<Bola*> *bolasPasadas){
    bolas = bolasPasadas;
}

int ModeloArbol::rowCount(const QModelIndex &parent)const{
    //qDebug ("row");
    if (!parent.isValid()){ //nos preguntan por la bola raiz
        int bolasSinPadre = 0;
        for (int i = 0; i < bolas->size(); i++){
            if (bolas->at(i)->padre == NULL){
                bolasSinPadre++;
            }
        }
        return bolasSinPadre;
        
    }else{ // nos preguntan cuantas hijas tiene la bola dada
        void *pPadre = parent.internalPointer();
        Bola * bolaPadre = static_cast<Bola *> (pPadre);    
        return bolaPadre->hijas.size();
    }
}

int ModeloArbol::columnCount(const QModelIndex &parent)const{
    //qDebug ("column");
    return 2;
    
}
        
QVariant ModeloArbol::data(const QModelIndex &index, int role)const{
    //qDebug ("inici data");
    Bola * bolaPreguntada;
    
    void * puntero = index.internalPointer();
    bolaPreguntada = static_cast<Bola *> (puntero); 
    /*if (bolaPreguntada == NULL)
        {
            qDebug()<<"Error";
        }*/
    if (role == Qt::DecorationRole){
        return QVariant((bolaPreguntada->color));
    }
    
    if (role == Qt::DisplayRole){
        return QVariant(QString::number(bolaPreguntada->posicionX));
    }
    return QVariant();
}
        
QModelIndex ModeloArbol::index(int numHija, int column, const QModelIndex &parent)const{
    //qDebug ("inici index");
    if (parent.isValid()){
        Bola * pPadre;
        void * puntero = parent.internalPointer();
        pPadre = static_cast<Bola *> (puntero); 

        Bola * hija = pPadre->hijas.at(numHija);

        QModelIndex indiceDevuelto = createIndex(numHija, column, hija);
        /*if (pPadre == NULL)
        {
            qDebug()<<"Error";
        }*/
        
        return indiceDevuelto;
    } else {
        int locaEncontrada = -1;
        for (int i = 0; i < bolas->size(); i++){
            if(bolas->at(i)->padre == NULL){
                locaEncontrada++;  
            }
            if (locaEncontrada == numHija){
                //qDebug ("encontrado index");
                return createIndex(numHija, column, bolas->at(i));
                
            }
        }
    }
    //qDebug()<<"Final index";
}
        
QModelIndex ModeloArbol::parent(const QModelIndex &index)const{
    //qDebug ("parent");
    Bola * pHija = static_cast<Bola *>(index.internalPointer());
    
    if (pHija->padre == NULL){
        return QModelIndex();
    }
    
    QModelIndex indiceDevuelto = createIndex(0, 0, pHija->padre);
    return indiceDevuelto;

}