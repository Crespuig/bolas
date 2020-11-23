#include "mainwindow.h"
#include "math.h"
#include "bola.h"
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>
#include <QBrush>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
        resize(800, 600);

        temporizador = new QTimer();
        temporizador->setInterval(20);
        temporizador->setSingleShot(false);
        temporizador->start();

        connect(temporizador, SIGNAL(timeout()),
                this, SLOT(slotRepintar()));

        bola = Bola(20, 40, 0.23, 0.5);

}

/******************************************** CREAR ACCIONES ***************************************************/



/***************************************************************************************************************/

/******************************************** CREAR MENUS ******************************************************/


/***************************************************************************************************************/

/******************************************** METODOS **********************************************************/



/***************************************************************************************************************/

/******************************************** EVENTOS **********************************************************/

void MainWindow::paintEvent(QPaintEvent * evento){
        QPainter pintor(this);
        QBrush brush(QColor("red"));
        pintor.setBrush(brush);
        pintor.drawEllipse(bola.posicionX, bola.posicionY, 200, 200);       
}
        
/**************************************************************************************************************/



/******************************************** SLOTS **********************************************************/

void MainWindow::slotRepintar(){
        bola.moverBola(width(), height());
        
        update();
}

/*************************************************************************************************************/