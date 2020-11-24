#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include "bola.h"
#include <QVector>


class MainWindow : public QMainWindow{
Q_OBJECT

public:
    MainWindow(QWidget *parent = NULL);

    void paintEvent(QPaintEvent *event);

    Bola bola;

    QTimer *temporizador;

    QVector <Bola*> bolas;

    void inicializarBolas();

public slots:
    void slotRepintar();

};


#endif