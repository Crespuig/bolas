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

    setAcceptDrops(true);

}

void WidgetBola::slotBotonParar(){
    miBola->velX = 0;
    miBola->velY = 0;
}

