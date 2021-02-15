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
#include "dinfohijas.h"
#include "dtablainfo.h"
#include "dchart.h"
#include "darbolbolas.h"
#include <QKeyEvent>
#include <QDrag>
#include <QSystemTrayIcon>
#include <QChartView>
#include <QCloseEvent>
#include "dguardarconf.h"

QT_CHARTS_USE_NAMESPACE

class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent * evento);
    void mousePressEvent(QMouseEvent *evento);
    void mouseReleaseEvent(QMouseEvent * evento);
    void mouseMoveEvent(QMouseEvent *event);
    void closeEvent(QCloseEvent *event);


    Bola bola;

    float initialMouseClickX;
    float initialMouseClickY;
    //QString nombre;

    QTimer *temporizador;
    QVector <Bola*> bolas;
    //QMenu * menuPartidasGuardadas;
    Bola * bolaJugador;
    QDrag *drag;
    QSystemTrayIcon *trayIcon;

    int alto = 800;
    int ancho = 600;
    int altoInicio, anchoInicio;

    void inicializarBolas();
    void incializarMenus();

    QMenu * menuContextual;

    DInformacion * dInformacion;
    DInfoBolas * dInfoBolas;
    DTablaBolas * dTablaBolas;
    DControlBolas * dControlBolas;
    DArbolBolas * dArbolBolas;
    DTablaInfo * dTablaInfo;
    DChart * dChart;
    DInfoHijas * dInfoHijas;
    DGuardarConf * dGuardarConf;
    
    QAction * accionDInformacion;
    QAction * accionDInfoBolas;
    QAction * accionDTablaBolas;
    QAction * accionDControlBolas;
    QAction * accionDArbolBolas;
    QAction * accionGuardarPartida;
    QAction * accionCargarPartida;
    QAction * accionDChart;
    QAction * accionDTablaInfo;
    QAction * accionDInfoHijas;
    

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
    void slotCargarPartida();
    void slotDChart();
    void slotDTablaInfo();
    void slotDInfoHijas();
    void slotGuardarConfiguracion(int, int);
    void slotCargarConfiguracion();

signals:
    void senyalBolaNueva(Bola *);
    void jugadorChoqued();

};


#endif