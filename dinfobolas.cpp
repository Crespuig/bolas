#include "dinfobolas.h"
#include <QVector>
#include <QString>
#include <QPainter>
#include <QHBoxLayout>

Onda::Onda(int x, int y) : posX(x), posY(y), ciclos(0){

}
Onda::Onda(){
    ciclos = 0;
}

WidgetOndas::WidgetOndas(int ancho, int alto, QWidget * parent) : anchoPrincipal(ancho), altoPrincipal(alto), QWidget(parent){

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotTemporizador()));

    nuevaOnda(10, 10);
    nuevaOnda(20, 20);
    nuevaOnda(30, 30);
    nuevaOnda(40, 40);
    nuevaOnda(50, 50);
    nuevaOnda(60, 60);


}

void WidgetOndas::paintEvent(QPaintEvent * event){
    QPainter pintor(this);
    //pintor.drawEllipse(20,20,10,10);

    for (int i = 0; i < ondas.size(); i++){
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


DInfoBolas::DInfoBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    vector = bolas;

    connect(temporizador, SIGNAL(timeout()),
        this, SLOT(slotInfoBolas()));

    QHBoxLayout * layout = new QHBoxLayout();
    WidgetOndas *wo = new WidgetOndas(300, 300);
    layout->addWidget(wo);
    frameColisiones->setLayout(layout);
}

QString DInfoBolas::getInformacionBolas(Bola *bola){
    QString info = " Pos x: " + QString::number(bola->posicionX) + ","
                    " Pos y: " + QString::number(bola->posicionY) + ","
                    " Vel x: " + QString::number(bola->velX) + ","
                    " Vel y: " + QString::number(bola->velY) + ",";

    return info;
}

void DInfoBolas::slotInfoBolas(){
    listaBolas->clear();

    for (int i = 0; i < vector->size(); i++){
        listaBolas->addItem(getInformacionBolas(vector->at(i)));
    }
    
}