#ifndef _DCHART_H
#define _DCHART_H

#include <QDialog>
#include <QLabel>
#include <QVector>
#include "ui_dchart.h"
#include "bola.h"
#include <QChartView>
#include <QChart>
#include <QTimer>
#include <QLineSeries>


QT_CHARTS_USE_NAMESPACE


class DChart : public QDialog, public Ui::DChart{
    Q_OBJECT
    public:
        DChart(QVector<Bola*> * elVector, QWidget * parent = nullptr);
        QVector <Bola *> * miVector;
        QVector <QLineSeries * > miVectorSeries;
        int colisiones;

        QChartView * vistaChart;
        QChart * datosChart;
        QTimer *temporizador;
        QLineSeries * serie;

    public slots:
        void slotResaltar(const QPointF &punto, bool estado);
        void slotTemporizador();
        

};

#endif