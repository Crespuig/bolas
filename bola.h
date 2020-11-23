#ifndef _BOLA_H
#define _BOLA_H

class Bola {

public:
    Bola(float posicionX, float posicionY, float velX, float velY);
    Bola();

    float posicionX;
    float posicionY;
    float velX;
    float velY;

    void moverBola(int ancho, int alto);


};

#endif