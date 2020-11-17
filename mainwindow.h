#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>


class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);
    
    int posicionX;
    int posicionY;
    bool derecha;
    bool abajo;


    QTimer *temporizador;

public slots:
    void slotRepintar();

};


#endif