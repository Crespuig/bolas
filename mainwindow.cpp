#include "mainwindow.h"
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
        resize(800, 600);

        temporizador = new QTimer();
        temporizador->setInterval(5);
        temporizador->setSingleShot(false);
        temporizador->start();

        connect(temporizador, SIGNAL(timeout()),
                this, SLOT(slotRepintar()));

        posicionX = 300;
        posicionY = 100;
        derecha = true;
        abajo = true;

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
        pintor.fillRect(posicionX, posicionY, 200, 200, QColor("red"));       
}
        
/**************************************************************************************************************/



/******************************************** SLOTS **********************************************************/

void MainWindow::slotRepintar(){ 
        // pedir al motor Qt que repinte la ventana
        if (posicionX >= 600){
                derecha = false;
        }else if (posicionX <= 0){
                derecha = true;
        }
        if (posicionY >= 400){
                abajo = false;
        }else if (posicionY <= 0){
                abajo = true;
        }
        
        if (derecha >= true){
                posicionX++;
        }else if(derecha <= false){
                posicionX--;
        }
        if (abajo >= true){
                posicionY++;
        }else if(abajo <= false){
                posicionY--;
        }

        update();
}

/*************************************************************************************************************/