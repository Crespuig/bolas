#include "widgetbola.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QImage>
#include <bola.h>



WidgetBola::WidgetBola(Bola * bola, QWidget * parent) : QWidget(parent), miBola(bola){
    setupUi(this);

    connect(botonParar, SIGNAL(clicked()),
        this, SLOT(slotBotonParar()));

    connect(botonParar, SIGNAL(clicked()),
        this, SLOT(slotBotonAcelerar()));
    
    connect(botonParar, SIGNAL(clicked()),
        this, SLOT(slotBotonFrenar()));

    setAcceptDrops(true);

}

void WidgetBola::slotBotonParar(){
    miBola->velX = 0;
    miBola->velY = 0;
}

void WidgetBola::slotBotonAcelerar(){
    miBola->velX = miBola->velX * 1.05;
    miBola->velY = miBola->velX * 1.05;
}

void WidgetBola::slotBotonFrenar(){
    miBola->velX = miBola->velX / 2;
    miBola->velY = miBola->velY / 2;
}

void WidgetBola::dragEnterEvent ( QDragEnterEvent * event ) {
    event->acceptProposedAction();
}

void WidgetBola::dropEvent ( QDropEvent * event ){
    
    //averiguar qué tipo mime tiene event ó verificar que si es de texto
    if ( ! event->mimeData()->hasUrls() ) return;
    
    // sacar el texto y mostrarlo en el cumessachbocs siguienteí
    QString text = (event->mimeData()->urls()).first().path();

    /*QMessageBox::warning(this, tr("DropEvent triggered"),
                                tr("El archivo arrastrado es") + text,
                                QMessageBox::Save | QMessageBox::Discard,
                                QMessageBox::Cancel,
                                QMessageBox::Save);*/

    miBola->imagen = QImage(text);
    miBola->imagen = miBola->imagen.scaled(Bola::diametro, Bola::diametro);

}


