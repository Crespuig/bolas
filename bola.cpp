#include "bola.h"
#include "math.h"
#include <QPainter>
#include <QBrush>
#include <QColor>
#include <QDebug>
#include <QImage>

int Bola::vidaInicial;

Bola::Bola(float posicionX, float posicionY, float velX, float velY, QString nombre){
        this->posicionX = posicionX;
        this->posicionY = posicionY;
        this->velX = velX;
        this->velY = velY;
        this->nombre = nombre;
        vida = vidaInicial;

        colision = 0;
        colisionParedes = 0;
        //nombre
        //numero

        padre = NULL;
        imagen = QImage("./png/abrupt-boy-face.png");
        imagen = imagen.scaled(Bola::diametro, Bola::diametro);
        mostrarImagen = true;
}

Bola::Bola(){
        padre =NULL;
        imagen = QImage("./png/abrupt-boy-face.png");
        imagen = imagen.scaled(Bola::diametro, Bola::diametro);
        mostrarImagen = true;
}



void Bola::moverBola(int ancho, int alto){
        //seccion de deteccion de colision contra los bordes
        if (posicionX >= ancho - diametro){
                velX = -fabs(velX);
                colisionParedes++;
        }
        
        if (posicionX <= 0){
                velX = fabs(velX);
                colisionParedes++;
        }

        if (posicionY >= alto - diametro){
                velY = -fabs(velY);
                colisionParedes++;
        }
        
        if (posicionY <= 0){
                velY = fabs(velY);
                colisionParedes++;
        }

        //seccion de actualizacion de la posicion
        posicionY = posicionY + velY;
        posicionX = posicionX + velX;

}

void Bola::pintar(QPainter &pintor){
        QBrush brush(color);
        pintor.setBrush(brush);
        pintor.drawEllipse(posicionX, posicionY, diametro, diametro);

        int ancho = diametro;
        float anchoVerde = (((float)vida) / vidaInicial) * (float)ancho;
        float anchoRojo = (ancho - (float)anchoVerde);
        pintor.setBrush(Qt::green);
        pintor.drawRect(posicionX, posicionY, anchoVerde, 3);
        pintor.setBrush(Qt::red);
        pintor.drawRect(posicionX + anchoVerde, posicionY, anchoRojo, 3);

        if (vida < 0){
                vida = 0;
        }

        if (mostrarImagen){
                pintor.drawImage(posicionX,posicionY,imagen);
        } else {
                pintor.drawEllipse(posicionX,posicionY,Bola::diametro,Bola::diametro);
        }

        pintor.drawText(posicionX + 17,
                        posicionY - 5,
                        QString::number(vida));
        
        pintor.drawText(posicionX + 10,
                        posicionY + 65,
                        QString(nombre)); 

        pintor.drawText(posicionX - 10, 
                        posicionY - 20, 
                        QString("Colisiones: ") + QString::number(colision));
        pintor.drawText(posicionX - 10, 
                        posicionY - 35, 
                        QString("Colisiones Pared: ") + QString::number(colisionParedes));
}


bool Bola::choca(Bola * otra){

        Bola *derecha, *izquierda;
        Bola *arriba, *abajo;
        bool rebote = false;

        if (this == otra){
                return false;
        }
        
        float distancia = sqrtf(
                powf((posicionX - otra -> posicionX), 2) + powf((posicionY - otra -> posicionY), 2));

        if (distancia > diametro){
                return false;
        }

        if (this->posicionX > otra->posicionX){
                derecha=this;
                izquierda=otra;
        }else{
                izquierda=this;
                derecha=otra;
        }

        if (this->posicionY > otra->posicionY){
                abajo=this;
                arriba=otra;
                
        }else{
                arriba=this;
                abajo=otra;
        }

        if (izquierda->velX > derecha->velX){
                float temp = izquierda->velX;
                izquierda->velX = derecha->velX;
                derecha->velX=temp;
                rebote = true;
        }

        if (arriba->velY > abajo->velY){
                float temp = abajo->velY;
                abajo->velY = arriba->velY;
                arriba->velY = temp;
                rebote = true;
        }
        

        if (rebote){
                colision++;
                otra->colision++;
        }
        
        
        
        return rebote;
}


