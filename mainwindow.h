#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include "bola.h"
#include <QVector>
#include "dinformacion.h"
#include "dinfobolas.h"
#include "dtablabolas.h"
#include "dcontrolbolas.h"
#include "darbolbolas.h"
#include <QKeyEvent>
#include <QDrag>
#include <QSystemTrayIcon>

class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * evento);
    void mousePressEvent(QMouseEvent *evento);
    void mouseReleaseEvent(QMouseEvent * evento);
    void mouseMoveEvent(QMouseEvent *event);


    Bola bola;

    float initialMouseClickX;
    float initialMouseClickY;

    QTimer *temporizador;
    QVector <Bola*> bolas;
    //QMenu * menuPartidasGuardadas;
    Bola * bolaJugador;
    QDrag *drag;
    QSystemTrayIcon *trayIcon;

    void inicializarBolas();
    void incializarMenus();

    QMenu * menuContextual;

    DInformacion * dInformacion;
    DInfoBolas * dInfoBolas;
    DTablaBolas * dTablaBolas;
    DControlBolas * dControlBolas;
    DArbolBolas * dArbolBolas;
    
    QAction * accionDInformacion;
    QAction * accionDInfoBolas;
    QAction * accionDTablaBolas;
    QAction * accionDControlBolas;
    QAction * accionDArbolBolas;
    QAction * accionGuardarPartida;

private:
    void performDrag();
    QPoint startPos;



public slots:
    void slotRepintar();
    void slotDInformacion();
    void slotDInfoBolas();
    void slotDTablaBolas();
    void slotDControlBolas();
    void slotDArbolBolas();
    void slotChocar();
    void slotGuardarPartida();

signals:
    void senyalBolaNueva(Bola *);
    void jugadorChoqued();

};


#endif