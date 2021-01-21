#include "darbolbolas.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QVariant>


DArbolBolas::DArbolBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    ModeloArbol * m = new ModeloArbol(bolas);
    vistaArbol->setModel(m);
}

ModeloArbol::ModeloArbol(QVector<Bola*> *bolasPasadas){
    bolas = bolasPasadas;
}

int ModeloArbol::rowCount(const QModelIndex &parent)const{
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
    
    return 1;
    
}
        
QVariant ModeloArbol::data(const QModelIndex &index, int role)const{
    Bola * bolaPreguntada;
    void * puntero = index.internalPointer();
    bolaPreguntada = static_cast<Bola *> (puntero); 

    return QVariant(QString::number(bolaPreguntada->posicionX));
}
        
QModelIndex ModeloArbol::index(int row, int column, const QModelIndex &parent)const{

    if (parent.isValid()){
        Bola * pPadre;
        void * puntero = parent.internalPointer();
        pPadre = static_cast<Bola *> (puntero); 

        int numHija = row;
        Bola * hija = pPadre->hijas.at(numHija);

        QModelIndex indiceDevuelto = createIndex(row, column, hija);
        return indiceDevuelto;
    } else {
        
        for (int i = 0; i < bolas->size(); i++){
            
        }
    }
}
        
QModelIndex ModeloArbol::parent(const QModelIndex &index)const{

    Bola * pHija = static_cast<Bola *>(index.internalPointer());

    if (pHija == NULL){
        return QModelIndex();
    }
    
    QModelIndex indiceDevuelto = createIndex(0, 0, pHija->padre);
    return indiceDevuelto;

}