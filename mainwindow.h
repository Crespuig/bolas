#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include "bola.h"
#include <QVector>
#include "dinformacion.h"
#include <QKeyEvent>


class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * evento);
    void mousePressEvent(QMouseEvent *eveneto);

    Bola bola;

    float initialClickX;
    float initialClickY;

    QTimer *temporizador;
    QVector <Bola*> bolas;
    //QMenu * menuPartidasGuardadas;
    Bola * bolaJugador;

    void inicializarBolas();
    void incializarMenus();

    DInformacion * dInformacion;
    QAction * accionDInformacion;

public slots:
    void slotRepintar();
    void slotDInformacion();

};


#endif