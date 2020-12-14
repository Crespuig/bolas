#include "dinfobolas.h"
#include <QVector>
#include <QString>


DInfoBolas::DInfoBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    vector = bolas;

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotInfoBolas()));
}

QString DInfoBolas::getInformacionBolas(Bola *bola){
    QString info = "Pos x: " + QString::number(bola->posicionX) + ","
                    "Pos y: " + QString::number(bola->posicionY) + ","
                    "Vel x: " + QString::number(bola->velX) + ","
                    "Vel y: " + QString::number(bola->velY) + ",";

    return info;
}

void DInfoBolas::slotInfoBolas(){
    listaBolas->clear();

    for (int i = 0; i < vector->size(); i++){
        listaBolas->addItem(getInformacionBolas(vector->at(i)));
    }
    
}