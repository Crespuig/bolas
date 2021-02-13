#ifndef _BOLA_H
#define _BOLA_H

#include <QPainter>
#include <QColor>
#include <QVector>
#include <QImage>
#include <QString>

class Bola {

public:
    Bola(float posicionX, float posicionY, float velX, float velY, QString nombre);
    Bola();

    float posicionX;
    float posicionY;
    float velX;
    float velY;

    int colision, colisionParedes;

    QImage imagen;
    bool mostrarImagen;
    QString nombre;
    
    int vida;
    static int vidaInicial;
    float anchoVerde;
    float anchoRojo;

    Bola * padre;
    QVector<Bola*> hijas;

    QColor color = QColor(random()%256, random()%256, random()%256);
     
    static const int diametro = 50;

    void moverBola(int ancho, int alto); //anchura y altura del area de juego
    void pintar(QPainter &pintor);
    bool choca(Bola * otra);
    void ponImagen(QImage&);
    /*void acelerar();
    void frenar();*/

};

#endif
