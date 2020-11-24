#include "bola.h"
#include "math.h"
#include <QPainter>
#include <QBrush>
#include <QColor>


Bola::Bola(float posicionX, float posicionY, float velX, float velY){
    this->posicionX = posicionX;
    this->posicionY = posicionY;
    this->velX = velX;
    this->velY = velY;
}

Bola::Bola(){}

void Bola::moverBola(int ancho, int alto){
        //seccion de deteccion de colision contra los bordes
        if (posicionX >= ancho - diametro){
                velX = -fabs(velX);
        }
        
        if (posicionX <= 0){
                velX = fabs(velX);
        }

        if (posicionY >= alto - diametro){
                velY = -fabs(velY);
        }
        
        if (posicionY <= 0){
                velY = fabs(velY);
        }

        //seccion de actualizacion de la posicion
        posicionY = posicionY + velY;
        posicionX = posicionX + velX;

}

void Bola::pintar(QPainter &pintor){
        QBrush brush(color);
        pintor.setBrush(brush);
        pintor.drawEllipse(posicionX, posicionY, diametro, diametro);
}


bool Bola::choca(Bola * otra){
        float distancia = sqrtf(
                powf((posicionX - otra -> posicionX), 2) + powf((posicionY - otra -> posicionY), 2));

        if (distancia <= diametro){
                velX = velY = otra->velX = otra->velY = 0;
        }

        return false;
        
}