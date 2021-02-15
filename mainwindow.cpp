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
#include <QSystemTrayIcon>
#include <QDebug>

#include <QByteArray>
#include <QBuffer>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>




MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
        resize(alto, ancho);

        altoInicio = alto;
        anchoInicio= ancho;

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
        dChart = NULL;
        dTablaInfo = NULL;
        drag = NULL;
        trayIcon = NULL;
        menuContextual = NULL;
        dInfoHijas = NULL;
        dGuardarConf = NULL;

        if ( QSystemTrayIcon::isSystemTrayAvailable()  == true ) {
                trayIcon = new QSystemTrayIcon(this);
                trayIcon->setContextMenu(menuContextual);
                trayIcon->setIcon(QIcon("./png/bolaIcono.jpg"));
                trayIcon->show();
                connect(this,SIGNAL(jugadorChoqued()),this,SLOT(slotChocar()));    
        }


}

void MainWindow::inicializarBolas(){
        for (int i = 0; i < 5; i++){
              bolas.append(new Bola(random()%width(),
                                random()%height(),
                                ((1 + random()%50 / 50.1) - 0.05),
                                ((1 + random()%50 / 50.1) - 0.05), QString("Bola ") + QString::number(i)));
        }
        
        bolaJugador = new Bola(100,100,0,0,"Bola Jugador");
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

        accionGuardarPartida = new QAction("Guardar partida", this);
        connect(accionGuardarPartida, SIGNAL(triggered()),
                this, SLOT(slotGuardarPartida()));
        menuFichero->addAction(accionGuardarPartida);

        accionCargarPartida = new QAction("Cargar partida", this);
        connect(accionCargarPartida, SIGNAL(triggered()),
                this, SLOT(slotCargarPartida()));
        menuFichero->addAction(accionCargarPartida);

        accionDChart = new QAction("Gráfico", this);
        connect(accionDChart, SIGNAL(triggered()),
                this, SLOT(slotDChart()));
        menuFichero->addAction(accionDChart);

        accionDTablaInfo = new QAction("Tabla de información", this);
        connect(accionDTablaInfo, SIGNAL(triggered()),
                this, SLOT(slotDTablaInfo()));
        menuFichero->addAction(accionDTablaInfo);

        accionDInfoHijas = new QAction("Información hijas", this);
        connect(accionDInfoHijas, SIGNAL(triggered()),
                this, SLOT(slotDInfoHijas()));
        menuFichero->addAction(accionDInfoHijas);

        menuContextual = new QMenu("contexttual");
        menuContextual->addAction(accionDInformacion);
        menuContextual->addAction(accionDInfoBolas);
        menuContextual->addAction(accionDTablaBolas);

        this->setContextMenuPolicy(Qt::ActionsContextMenu);
        this->addAction(accionDInformacion);
        this->addAction(accionDInfoBolas);
        this->addAction(accionDTablaBolas);
        
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
        
        initialMouseClickX=event->x();
        initialMouseClickY=event->y();

        drag = NULL;

        /*if (event->buttons() & Qt::RightButton){
                QManinWindow::mousePressEvent(event);
        }*/
                
}

void MainWindow::mouseReleaseEvent(QMouseEvent *evento){
        bolas.append(new Bola(initialMouseClickX, initialMouseClickY,
        (float)(evento->x() - initialMouseClickX) / width() * 10,
        (float)(evento->y() - initialMouseClickY) / height() * 10,
        QString("Bola ")));
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
        QPoint posInicial(initialMouseClickX, initialMouseClickY);
        QPoint posFinal = event->pos();
        int distance = (posFinal -posInicial).manhattanLength();
        if (distance > QApplication::startDragDistance()) return;

        
        if (drag == NULL){
                QMimeData *mimeData = new QMimeData;
                QPixmap pixmap(size());
                this->render(&pixmap);
                mimeData->setImageData(pixmap);

                drag = new QDrag(this);
                drag->setMimeData(mimeData);
                drag->exec(Qt::MoveAction);
        }
}

void MainWindow::performDrag(){

        QMimeData *mimeData = new QMimeData;
        mimeData->setText(QString("hola"));

        QDrag *drag = new QDrag(this);
        drag->setMimeData(mimeData);
        drag->setPixmap(QPixmap("./png/abrupt-boy-face.png"));
        drag->exec(Qt::MoveAction) ;
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
                                                        Bola *nueva = new Bola(bolas.at(i)->posicionX+20, bolas.at(i)->posicionY-20,
                                                                ((4 + random()%50 / 50.1) - 0.5), ((4 + random()%50 / 50.1) - 0.5), 
                                                                QString ("Bola ") + QString::number(bolas.size() + 1));
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
                        emit jugadorChoqued();
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

void MainWindow::slotChocar(){

        if(trayIcon == NULL) return;

        /*trayIcon->showMessage(QString("hayyyyy choooooqueeee"),
                        QString("Juega mejor! que te van a matar"),
                        QSystemTrayIcon::Information, 1000);*/

}

void MainWindow::slotDChart(){
        if (dChart == NULL){
                dChart = new DChart(&bolas);
                
        }
        
        dChart->show();
}

void MainWindow::slotGuardarPartida(){
        QJsonObject jsonPrincipal;

        QJsonObject jsonJugador;

        jsonJugador["posX"] = bolaJugador->posicionX;
        jsonJugador["velX"] = bolaJugador->velX;
        jsonJugador["posY"] = bolaJugador->posicionY;
        jsonJugador["velY"] = bolaJugador->velY;
        jsonJugador["vida"] = bolaJugador->vida;
        jsonJugador["nombre"] = bolaJugador->nombre;
        jsonJugador["colisiones"] = bolaJugador->colision;
        jsonJugador["colisionesPared"] = bolaJugador->colisionParedes;
        jsonJugador["nombre"] = bolaJugador->nombre;
        jsonJugador["padre"] = bolaJugador->nombre;


        jsonPrincipal["jugador"] = jsonJugador;

        QJsonArray arrayBolas;
        QJsonObject bolaJson;

        for(Bola * b : bolas){
                bolaJson["posX"] = b->posicionX;
                bolaJson["velX"] = b->velX;
                bolaJson["posY"] = b->posicionY;
                bolaJson["velY"] = b->velY;
                bolaJson["vida"] = b->vida;
                bolaJson["colisiones"] = b->colision;
                bolaJson["colisionesPared"] = b->colisionParedes;
                bolaJson["nombre"] = b->nombre;
                bolaJson["padre"] = "NULL";
                if(b->padre != NULL)
                        bolaJson["padre"] = b->padre->nombre;

                //guardar la imagen
                QImage img = b->imagen;
                QByteArray byteArray;
                QBuffer buffer(&byteArray);
                img.save(&buffer, "PNG");
                QString imgBase64 = QString::fromLatin1(byteArray.toBase64().data());

                bolaJson["imagen"] = imgBase64;        
                arrayBolas.append(bolaJson);
        }

        jsonPrincipal["bolas"] = arrayBolas;

        //Siempre igual
        QFile saveFile(QStringLiteral("save.json"));
        saveFile.open(QIODevice::WriteOnly);
        QJsonDocument saveDoc(jsonPrincipal);
        saveFile.write(saveDoc.toJson());
        saveFile.close();

}

void MainWindow::slotCargarPartida(){
        for (int i = 0; i < bolas.size(); i++){
                Bola * pb = bolas[i];
                delete pb;
        }
        
        bolas.clear(); 

        //Siempre igual
        QFile loadFile(QStringLiteral("save.json"));
        if (!loadFile.open(QIODevice::ReadOnly)){
                return;
        }

        QByteArray savedData = loadFile.readAll();
        QJsonDocument readDoc(QJsonDocument::fromJson(savedData));
        QJsonObject jsonPrincipal = readDoc.object();

        if (!(jsonPrincipal.contains("bolas") && jsonPrincipal["bolas"].isArray())){
                qDebug()<< "Cargar partida: bolas no encontradas en el archivo";
                return;
        }

        /*QJsonValue valorJson = jsonPrincipal["bolas"];
        AJsonArray = valorJson.toArray();*/

        QJsonArray arrayBolas = jsonPrincipal["bolas"].toArray();

       
     
        for (int i = 0; i < arrayBolas.size(); i++){
                QJsonObject objetoBola = arrayBolas[i].toObject();
                float posXNuevaBola = objetoBola["posX"].toDouble();
                float velXNuevaBola = objetoBola["velX"].toDouble();
                float posYNuevaBola = objetoBola["posY"].toDouble();
                float velYNuevaBola = objetoBola["velY"].toDouble();
                int vidaNuevaBola = objetoBola["vida"].toDouble();
                int colisionNuevaBola = objetoBola["colision"].toDouble();
                int colisionParedesNuevaBola = objetoBola["colisionParedes"].toDouble();
                QString nombreNuevaBola = objetoBola["nombre"].toString();
                QString nombrePadre = objetoBola["padre"].toString();

                //QString nuevoNombre = objetoBola["Bola "].toString();

                Bola *nb = new Bola(posXNuevaBola,posYNuevaBola,velXNuevaBola,velYNuevaBola, nombreNuevaBola);  
                nb->vida = vidaNuevaBola;     
                nb->colision = colisionNuevaBola;
                nb->colisionParedes = colisionParedesNuevaBola;

                foreach (Bola* b, bolas){
                        if(nombrePadre == b->nombre){
                                b->hijas.append(nb);
                                nb->padre = b;
                        }
                }

                bolas.append(nb);

                QImage imagenNB;
                //leer el elemento json y convertirlo
                QString imgBase64 = objetoBola["imagen"].toString();
                QByteArray byteArray = imgBase64.toLatin1();
                byteArray = QByteArray::fromBase64(byteArray, QByteArray::Base64Encoding);
                QBuffer buffer(&byteArray);
                imagenNB.loadFromData(byteArray, "PNG");
                nb->imagen = imagenNB;
        }

        QJsonObject objetoBolaJugador = jsonPrincipal["jugador"].toObject();
        float posXNuevaBola = objetoBolaJugador["posX"].toDouble();
        float velXNuevaBola = objetoBolaJugador["velX"].toDouble();
        float posYNuevaBola = objetoBolaJugador["posY"].toDouble();
        float velYNuevaBola = objetoBolaJugador["velY"].toDouble();
        int vidaNuevaBola = objetoBolaJugador["vida"].toDouble();
        int colisionNuevaBola = objetoBolaJugador["colision"].toDouble();
        int colisionParedesNuevaBola = objetoBolaJugador["colisionParedes"].toDouble();
        QString nombreNuevaBola = objetoBolaJugador["nombre"].toString();

        //QString nuevoNombre = objetoBolaJugador["Bola "].toString();

        Bola *nbJugador = new Bola(posXNuevaBola,posYNuevaBola,velXNuevaBola,velYNuevaBola, nombreNuevaBola);       
        nbJugador->vida = vidaNuevaBola;
        nbJugador->colision = colisionNuevaBola;
        nbJugador->colisionParedes = colisionParedesNuevaBola;

        QImage imagenNB;
        //leer el elemento json y convertirlo
        QString imgBase64 = objetoBolaJugador["imagen"].toString();
        QByteArray byteArray = imgBase64.toLatin1();
        byteArray = QByteArray::fromBase64(byteArray, QByteArray::Base64Encoding);
        QBuffer buffer(&byteArray);
        imagenNB.loadFromData(byteArray, "PNG");
        nbJugador->imagen = imagenNB;
        
        
        bolaJugador = nbJugador;

}

void MainWindow::slotDTablaInfo(){
        if (dTablaInfo == NULL){
                dTablaInfo = new DTablaInfo(&bolas);
                
        }
        
        dTablaInfo->show();
}

void MainWindow::slotDInfoHijas(){
        if (dInfoHijas == NULL){
                dInfoHijas = new DInfoHijas(&bolas);

                connect(this, SIGNAL(senyalBolaNueva(Bola *)),
                dInfoHijas, SLOT(slotBolaNueva(Bola *)));

        }
        
        dInfoHijas->show();
}

void MainWindow::slotGuardarConfiguracion(){
        QJsonObject jsonPrincipal;

        QJsonObject jsonConfiguracion;

        jsonConfiguracion["alto"] = this->height();
        jsonConfiguracion["ancho"] = this->width();

        jsonPrincipal["configuracion"] = jsonConfiguracion;

        //Siempre igual
        QFile saveFile(QStringLiteral("configuracion.json"));
        saveFile.open(QIODevice::WriteOnly);
        QJsonDocument saveDoc(jsonPrincipal);
        saveFile.write(saveDoc.toJson());
        saveFile.close();

}

void MainWindow::closeEvent(QCloseEvent *event){
        if (dGuardarConf == NULL){
                dGuardarConf = new DGuardarConf();
        }
        
        dGuardarConf->exec();
}

void MainWindow::slotCargarConfiguracion(){
        for (int i = 0; i < bolas.size(); i++){
                Bola * pb = bolas[i];
                delete pb;
        }
        
        bolas.clear(); 

        //Siempre igual
        QFile loadFile(QStringLiteral("save.json"));
        if (!loadFile.open(QIODevice::ReadOnly)){
                return;
        }

        QByteArray savedData = loadFile.readAll();
        QJsonDocument readDoc(QJsonDocument::fromJson(savedData));
        QJsonObject jsonPrincipal = readDoc.object();

        if (!(jsonPrincipal.contains("bolas") && jsonPrincipal["bolas"].isArray())){
                qDebug()<< "Cargar partida: bolas no encontradas en el archivo";
                return;
        }

        /*QJsonValue valorJson = jsonPrincipal["bolas"];
        AJsonArray = valorJson.toArray();*/

        QJsonArray arrayBolas = jsonPrincipal["bolas"].toArray();

       
     
        for (int i = 0; i < arrayBolas.size(); i++){
                QJsonObject objetoBola = arrayBolas[i].toObject();
                float posXNuevaBola = objetoBola["posX"].toDouble();
                float velXNuevaBola = objetoBola["velX"].toDouble();
                float posYNuevaBola = objetoBola["posY"].toDouble();
                float velYNuevaBola = objetoBola["velY"].toDouble();
                int vidaNuevaBola = objetoBola["vida"].toDouble();
                int colisionNuevaBola = objetoBola["colision"].toDouble();
                int colisionParedesNuevaBola = objetoBola["colisionParedes"].toDouble();
                QString nombreNuevaBola = objetoBola["nombre"].toString();
                QString nombrePadre = objetoBola["padre"].toString();

                //QString nuevoNombre = objetoBola["Bola "].toString();

                Bola *nb = new Bola(posXNuevaBola,posYNuevaBola,velXNuevaBola,velYNuevaBola, nombreNuevaBola);  
                nb->vida = vidaNuevaBola;     
                nb->colision = colisionNuevaBola;
                nb->colisionParedes = colisionParedesNuevaBola;

                foreach (Bola* b, bolas){
                        if(nombrePadre == b->nombre){
                                b->hijas.append(nb);
                                nb->padre = b;
                        }
                }

                bolas.append(nb);

                QImage imagenNB;
                //leer el elemento json y convertirlo
                QString imgBase64 = objetoBola["imagen"].toString();
                QByteArray byteArray = imgBase64.toLatin1();
                byteArray = QByteArray::fromBase64(byteArray, QByteArray::Base64Encoding);
                QBuffer buffer(&byteArray);
                imagenNB.loadFromData(byteArray, "PNG");
                nb->imagen = imagenNB;
        }

        QJsonObject objetoBolaJugador = jsonPrincipal["jugador"].toObject();
        float posXNuevaBola = objetoBolaJugador["posX"].toDouble();
        float velXNuevaBola = objetoBolaJugador["velX"].toDouble();
        float posYNuevaBola = objetoBolaJugador["posY"].toDouble();
        float velYNuevaBola = objetoBolaJugador["velY"].toDouble();
        int vidaNuevaBola = objetoBolaJugador["vida"].toDouble();
        int colisionNuevaBola = objetoBolaJugador["colision"].toDouble();
        int colisionParedesNuevaBola = objetoBolaJugador["colisionParedes"].toDouble();
        QString nombreNuevaBola = objetoBolaJugador["nombre"].toString();

        //QString nuevoNombre = objetoBolaJugador["Bola "].toString();

        Bola *nbJugador = new Bola(posXNuevaBola,posYNuevaBola,velXNuevaBola,velYNuevaBola, nombreNuevaBola);       
        nbJugador->vida = vidaNuevaBola;
        nbJugador->colision = colisionNuevaBola;
        nbJugador->colisionParedes = colisionParedesNuevaBola;

        QImage imagenNB;
        //leer el elemento json y convertirlo
        QString imgBase64 = objetoBolaJugador["imagen"].toString();
        QByteArray byteArray = imgBase64.toLatin1();
        byteArray = QByteArray::fromBase64(byteArray, QByteArray::Base64Encoding);
        QBuffer buffer(&byteArray);
        imagenNB.loadFromData(byteArray, "PNG");
        nbJugador->imagen = imagenNB;
        
        
        bolaJugador = nbJugador;

}


/*****************************************************************************************************************/