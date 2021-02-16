#include "widgetNombreBola.h"
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
#include <QComboBox>
#include <QFrame>
#include <QCheckBox>


WidgetNombreBola::WidgetNombreBola(Bola * bola, QWidget * parent) : QWidget(parent), miBola(bola){
    setupUi(this);

    for (int i = 0; i < bola->lista.size(); i++){
        comboNombre->addItem(bola->lista.at(i));
        lNombreBola->setText(bola->nombre);
        //bola->imagen = new QFrame();
        //frameImagen->
    }
    
    
        
    
}

