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


        inicializarBolas();

}

void MainWindow::inicializarBolas(){
        for (int i = 0; i < 50; i++){
              bolas.append(new Bola(random()%width(),
                                random()%height(),
                                ((4 + random()%50 / 50.1) - 0.5),
                                ((4 + random()%50 / 50.1) - 0.5)));
        }
        
        
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
        
        for (int i = 0; i < bolas.size(); i++){
                bolas.at(i)->pintar(pintor);
        }
       
        
}
        
/**************************************************************************************************************/



/******************************************** SLOTS **********************************************************/

void MainWindow::slotRepintar(){
        for (int i = 0; i < bolas.size(); i++){
                bolas.at(i)->moverBola(width(), height());         
        }
        
        for (int i = 0; i < bolas.size(); i++){
                for (int j = 0; j < bolas.size(); j++){
                       if (bolas.at(i) != bolas.at(j)){
                               bolas.at(i)->choca(bolas.at(j));
                       }
                }
                
        }
        

        update();
}

/*************************************************************************************************************/