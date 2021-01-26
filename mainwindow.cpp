#include "mainwindow.h"
#include "math.h"
#include "bola.h"
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>
#include <QBrush>
#include <QMenuBar>
#include <QMenu>
#include <QKeyEvent>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDrag>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
        resize(800, 600);

        Bola::vidaInicial = 100;

        temporizador = new QTimer();
        temporizador->setInterval(20);
        temporizador->setSingleShot(false);
        temporizador->start();

        connect(temporizador, SIGNAL(timeout()),
                this, SLOT(slotRepintar()));


        inicializarBolas();
        incializarMenus();
        dInformacion = NULL;
        dInfoBolas = NULL;
        dTablaBolas = NULL;
        dControlBolas = NULL;
        dArbolBolas = NULL;

}

void MainWindow::inicializarBolas(){
        for (int i = 0; i < 5; i++){
              bolas.append(new Bola(random()%width(),
                                random()%height(),
                                ((4 + random()%50 / 50.1) - 0.05),
                                ((4 + random()%50 / 50.1) - 0.05)));
        }
        
        bolaJugador = new Bola(100,100,0,0);
        bolaJugador->color = QColor("black");
        
}

void MainWindow::incializarMenus(){
        
        QMenu * menuFichero = menuBar()->addMenu("Fichero");
        accionDInformacion = new QAction("Informacion basica", this);
        //accionDInformacion->setIcon(QIcon("./images/buscar.jpg"));
        //accionDInformacion->setShortcut(QKeySequence(tr("Ctrl+d")));
        accionDInformacion->setStatusTip("Obtener informacion basica");
        accionDInformacion->setToolTip("Obtener informacion basica");
        connect(accionDInformacion, SIGNAL(triggered()),
                this, SLOT(slotDInformacion()));
        menuFichero->addAction(accionDInformacion);

        QMenu * menuInfoBolas = menuBar()->addMenu("Info bolas");
        accionDInfoBolas = new QAction("Informacion bolas", this);
        //accionDInformacion->setIcon(QIcon("./images/buscar.jpg"));
        //accionDInformacion->setShortcut(QKeySequence(tr("Ctrl+d")));
        accionDInfoBolas->setStatusTip("Obtener informacion bolas");
        accionDInfoBolas->setToolTip("Obtener informacion bolas");
        connect(accionDInfoBolas, SIGNAL(triggered()),
                this, SLOT(slotDInfoBolas()));
        menuInfoBolas->addAction(accionDInfoBolas);

        QMenu * menuTablaBolas = menuBar()->addMenu("Tabla bolas");
        accionDTablaBolas = new QAction("Informacion bolas", this);
        //accionDInformacion->setIcon(QIcon("./images/buscar.jpg"));
        //accionDInformacion->setShortcut(QKeySequence(tr("Ctrl+d")));
        accionDTablaBolas->setStatusTip("Obtener informacion tabla bolas");
        accionDTablaBolas->setToolTip("Obtener informacion bolas");
        connect(accionDTablaBolas, SIGNAL(triggered()),
                this, SLOT(slotDTablaBolas()));
        menuTablaBolas->addAction(accionDTablaBolas);

        QMenu * menuControlBolas = menuBar()->addMenu("Control bolas");
        accionDControlBolas = new QAction("Control bolas", this);
        accionDControlBolas->setStatusTip("Control bolas");
        accionDControlBolas->setToolTip("Control bolas");
        connect(accionDControlBolas, SIGNAL(triggered()),
                this, SLOT(slotDControlBolas()));
        menuControlBolas->addAction(accionDControlBolas);

        QMenu * menuArbolBolas = menuBar()->addMenu("Arbol bolas");
        accionDArbolBolas = new QAction("Arbol bolas", this);
        accionDArbolBolas->setStatusTip("Arbol bolas");
        accionDArbolBolas->setToolTip("Arbol bolas");
        connect(accionDArbolBolas, SIGNAL(triggered()),
                this, SLOT(slotDArbolBolas()));
        menuArbolBolas->addAction(accionDArbolBolas);
        
}
/******************************************** CREAR ACCIONES ******************************************************/



/******************************************************************************************************************/

/********************************************* CREAR MENUS ********************************************************/


/******************************************************************************************************************/

/*********************************************** METODOS **********************************************************/



/******************************************************************************************************************/

/*********************************************** EVENTOS **********************************************************/

void MainWindow::paintEvent(QPaintEvent * evento){
        QPainter pintor(this);
        
        for (int i = 0; i < bolas.size(); i++){
                bolas.at(i)->pintar(pintor);
        }

        bolaJugador->pintar(pintor);

        
       
        
}

void MainWindow::keyPressEvent(QKeyEvent * evento){

        if (evento->key() == Qt::Key_Up){
                bolaJugador->velY = bolaJugador->velY - 0.1;
        }
        if (evento->key() == Qt::Key_Down){
                bolaJugador->velY = bolaJugador->velY + 0.1;
        }
        if (evento->key() == Qt::Key_Right){
                bolaJugador->velX = bolaJugador->velX + 0.1;
        }
        if (evento->key() == Qt::Key_Left){
                bolaJugador->velX = bolaJugador->velX - 0.1;
        }
        

}

void MainWindow::mousePressEvent(QMouseEvent *event){
                
        if (event->button() == Qt::LeftButton){
                startPos = event->pos();
        }
        QMainWindow::mousePressEvent(event);

        if (event->button() == Qt::RightButton){
                initialMouseClickX=event->x();
                initialMouseClickY=event->y();
        }
        
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
        if (event->button() & Qt::LeftButton) {
                int distance = (event->pos() - startPos).manhattanLength();
                if (distance >= QApplication::startDragDistance())
                performDrag();
        }
        QMainWindow::mouseMoveEvent(event);
}

void MainWindow::performDrag(){

        QMimeData *mimeData = new QMimeData;
        mimeData->setText(QString("hola"));

        QDrag *drag = new QDrag(this);
        drag->setMimeData(mimeData);
        drag->setPixmap(QPixmap("./png/abrupt-boy-face.png"));
        drag->exec(Qt::MoveAction) ;
}


void MainWindow::mouseReleaseEvent(QMouseEvent *evento){
        bolas.append(new Bola(initialMouseClickX, initialMouseClickY,
        (float)(evento->x() - initialMouseClickX) / width() * 10,
        (float)(evento->y() - initialMouseClickY) / height() * 10));
}
        
/*****************************************************************************************************************/



/************************************************ SLOTS **********************************************************/

void MainWindow::slotRepintar(){
        for (int i = 0; i < bolas.size(); i++){
                bolas.at(i)->moverBola(width(), height());         
        }
        
        for (int i = 0; i < bolas.size(); i++){
                for (int j = 0; j < bolas.size(); j++){
                       if (bolas.at(i) != bolas.at(j)){
                               if(bolas.at(i)->choca(bolas.at(j))){
                                       bolas.at(i)->vida--;
                                       bolas.at(j)->vida--;
                                       if (bolas.size() < 25){
                                               int numeroRandom = random()%100;
                                               if(numeroRandom < 18){
                                                        Bola *nueva = new Bola(
                                                                bolas.at(i)->posicionX+20,
                                                                bolas.at(i)->posicionY-20,
                                                                ((4 + random()%50 / 50.1) - 0.5),
                                                                (4 + random()%50 / 50.1) - 0.5);
                                                        nueva->padre = bolas.at(i);
                                                        bolas.at(i)->hijas.append(nueva);
                                                        
                                                        bolas.append(nueva);
                                                        emit senyalBolaNueva(nueva);
                                               }       
                                       }
                               }
                       }
                }
        }
        
        for (int i = 0; i < bolas.size(); i++){
                if(bolaJugador->choca(bolas.at(i))){
                        bolaJugador->vida--;
                        bolas.at(i)->vida--;
                }
        }
        bolaJugador->moverBola(width(), height());
        

        update();
}

void MainWindow::slotDInformacion(){
        if (dInformacion == NULL){
                dInformacion = new DInformacion(
                        bolas.size(),
                        0/*width()*/,
                        0/*height()*/

                );
        }
        
        dInformacion->establecerTamanyo(width(), height());

        dInformacion->show();
}

void MainWindow::slotDInfoBolas(){
        if (dInfoBolas == NULL){
                dInfoBolas = new DInfoBolas(&bolas);

        }
        
        dInfoBolas->show();
}

void MainWindow::slotDTablaBolas(){
        if (dTablaBolas == NULL){
                dTablaBolas = new DTablaBolas(&bolas);
                
        }
        
        dTablaBolas->show();
}

void MainWindow::slotDControlBolas(){
        if (dControlBolas == NULL){
                dControlBolas = new DControlBolas(&bolas);
                
                connect(this, SIGNAL(senyalBolaNueva(Bola *)),
                dControlBolas, SLOT(slotBolaNueva(Bola *)));

        }
        
        dControlBolas->show();
}

void MainWindow::slotDArbolBolas(){
        if (dArbolBolas == NULL){
                dArbolBolas = new DArbolBolas(&bolas);
                
                

        }
        
        dArbolBolas->show();
}

/*****************************************************************************************************************/