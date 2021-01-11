#include "widgetbola.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QPushButton>
#include <QDebug>
#include <bola.h>



WidgetBola::WidgetBola(Bola * bola, QWidget * parent) : QWidget(parent), miBola(bola){
    setupUi(this);

    connect(botonParar, SIGNAL(clicked()),
        this, SLOT(slotBotonParar()));

    

    
}

void WidgetBola::slotBotonParar(){
    //parar la puta bola
    miBola->velX = 0;
    miBola->velY = 0;
    //qDebug() << "Para la bola";
}

