#include "darbolbolas.h"
#include <QVector>
#include <QString>
#include <QColor>


DArbolBolas::DArbolBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    
}

int ModeloArbol::rowCount(const QModelIndex &paren){
    if (!parent.isValid()){ //nos preguntan por la bola raiz
        
    }else{ // nos preguntan cuantas hijas tiene la bola dada
        void *pPadre = parent.internalPointer();
        Bola * bolaPadre = static_cast<Bola *> (pPadre);    
        return bolaPadre->hijas.size();
    }
}

int ModeloArbol:: columnCount(const QModelIndex &parent){
    
    return 1;
    
}
        
QVariant ModeloArbol::data(const QModelIndex &index, int role){

}
        
QMoldeIndex ModeloArbol::index(int row, int column, const QModelIndex &parent){

}
        
QModelIndex ModeloArbol::parent(const QModelIndex &index){

}