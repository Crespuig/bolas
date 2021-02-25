#include "dinfobolas.h"
#include <QVector>
#include <QString>
#include <QPainter>
#include <QHBoxLayout>
#include <QDebug>
#include <QVariant>
#include <QMouseEvent>


Onda::Onda(int x, int y) : posX(x), posY(y), ciclos(0){

}
Onda::Onda(){
    ciclos = 0;
}

WidgetOndas::WidgetOndas(int ancho, int alto, QWidget * parent) : anchoPrincipal(ancho), altoPrincipal(alto), QWidget(parent){

    temporizador = new QTimer();
    temporizador->setInterval(100);
    temporizador->setSingleShot(false);
    temporizador->start();

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotTemporizador()));

    /*nuevaOnda(10, 10);
    nuevaOnda(20, 20);
    nuevaOnda(30, 30);
    nuevaOnda(40, 40);
    nuevaOnda(50, 50);
    nuevaOnda(60, 60);*/

    bola = NULL;


}

void WidgetOndas::paintEvent(QPaintEvent * event){
    QPainter pintor(this);
    //pintor.drawEllipse(20,20,10,10);

    for (int i = 0; i < ondas.size(); i++){
        QBrush brush(ondas[i].color);
        pintor.setBrush(brush);
        pintor.drawEllipse(ondas[i].posX, ondas[i].posY, 4 + 2 * ondas[i].ciclos, 4 + 2 * ondas[i].ciclos);
    }

    for (int i = 0; i < ondas.size(); i++){
        if (ondas[i].ciclos++ >= 10){
            ondas.remove(i);
            return;
        }
        
    }
    
}

void WidgetOndas::nuevaOnda(int x, int y){
    float xDibujo = (float) x * (float) ((float)width() / (float) anchoPrincipal);
    float yDibujo = (float) y * (float) ((float)height() / (float) altoPrincipal);
    
    Onda nueva(xDibujo, yDibujo);

    ondas.append(nueva);
}

void WidgetOndas::slotTemporizador(){
    
    update();

}

void WidgetOndas::mousePressEvent(QMouseEvent * event){
    if(bola != NULL){
        bola->posicionX = event->x() * 2;
        bola->posicionY = event->y() * 2;
    }
    

}

void WidgetOndas::recogerBola(Bola * bola){
    bola = bola;
}


DInfoBolas::DInfoBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    vector = bolas;

    bolaSeleccionada = NULL;

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotInfoBolas()));

    connect(listaBolas, SIGNAL(itemClicked(QListWidgetItem *)),
        this, SLOT(slotRecogerBola(QListWidgetItem *)));

    
    QHBoxLayout * layout = new QHBoxLayout();
    wo = new WidgetOndas(800, 600);
    layout->addWidget(wo);
    frameColisiones->setLayout(layout);
}

QListWidgetItem * DInfoBolas::getInformacionBolas(Bola *bola){
    QString info = (bola->nombre) + ","
                    " Pos x: " + QString::number(bola->posicionX) + ","
                    " Pos y: " + QString::number(bola->posicionY) + ","
                    " Vel x: " + QString::number(bola->velX) + ","
                    " Vel y: " + QString::number(bola->velY) + ",";

    QListWidgetItem * item = new QListWidgetItem(info);
    

    for (int i = 0; i < vector->size(); i++){
        if (vector->at(i) == bola){
            //item->setData(1, QVariant(i));
            item->setText(info);
        }
            
    }
    
    //qDebug()<<item->text();

    return item;
}

void DInfoBolas::slotInfoBolas(){
    listaBolas->clear();

    for (int i = 0; i < vector->size(); i++){
        listaBolas->addItem(getInformacionBolas(vector->at(i)));
    }
    
}

void DInfoBolas::slotOnda(int posX, int posY, Bola* bolaRecibida){
    if(bolaSeleccionada != NULL){
        if (bolaRecibida == bolaSeleccionada){
            wo->nuevaOnda(posX/2, posY/2);
        }
    }else{
        wo->nuevaOnda(posX/2, posY/2);
    }
}

 void DInfoBolas::slotRecogerBola(QListWidgetItem * item){
     bolaSeleccionada = vector->at(listaBolas->row(item));
     wo->recogerBola(bolaSeleccionada);
}


/*

1. Una clase en el cpp
2. hereda de Qwidget o de QFrame
3. Cear layout y añadirlo.

*/