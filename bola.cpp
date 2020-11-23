#include "bola.h"
#include "math.h"

Bola::Bola(float posicionX, float posicionY, float velX, float velY){
    this->posicionX = posicionX;
    this->posicionY = posicionY;
    this->velX = velX;
    this->velY = velY;
}

Bola::Bola(){}

void Bola::moverBola(int ancho, int alto){
    if (posicionX >= ancho){
                velX = -fabs(velX);
        }
        
        if (posicionX <= 0){
                velX = fabs(velX);
        }

        if (posicionY >= alto){
                velY = -fabs(velY);
        }
        
        if (posicionY <= 0){
                velY = fabs(velY);
        }

        posicionY = posicionY + velY;
        posicionX = posicionX + velX;

}