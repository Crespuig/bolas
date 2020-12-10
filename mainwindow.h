#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include "bola.h"
#include <QVector>
#include "dinformacion.h"
#include "dinfobolas.h"
#include <QKeyEvent>


class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * evento);
    void mousePressEvent(QMouseEvent *evento);
    void mouseReleaseEvent(QMouseEvent * evento);

    Bola bola;

    float initialMouseClickX;
    float initialMouseClickY;

    QTimer *temporizador;
    QVector <Bola*> bolas;
    //QMenu * menuPartidasGuardadas;
    Bola * bolaJugador;

    void inicializarBolas();
    void incializarMenus();

    DInformacion * dInformacion;
    DInfoBolas * dInfoBolas;
    QAction * accionDInformacion;
    QAction * accionDInfoBolas;

public slots:
    void slotRepintar();
    void slotDInformacion();
    void slotDInfoBolas();

};


#endif