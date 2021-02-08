#include "dchart.h"
#include <QVector>
#include <QHBoxLayout>
#include <QChart>
#include <QChartView>
#include <QPushButton>
#include <QLineSeries>
#include <QTimer>
#include <QValueAxis>


DChart::DChart(QVector<Bola*> * bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);
    
    miVector = bolas;

    temporizador = new QTimer();
    temporizador->setInterval(500);
    temporizador->setSingleShot(false);
    temporizador->start();

    datosChart = new QChart();
    vistaChart= new QChartView(datosChart);

    QHBoxLayout * layout = new QHBoxLayout();
    frameChart->setLayout(layout);
    layout->addWidget(vistaChart);
    //layout->addWidget(new QPushButton("hola"));

    QLineSeries * serie = new QLineSeries();
    serie->append(1,1);
    serie->append(2,20);
    serie->append(3,25);
    datosChart->addSeries(serie);

    QValueAxis * axisY = new QValueAxis();
    axisY->setRange(0,7);
    axisY->setTitleText("Goles");

    QValueAxis * axisX = new QValueAxis();
    axisX->setRange(0,5);
    axisX->setTitleText("Dias");

    datosChart->addAxis(axisY, Qt::AlignLeft);
    datosChart->addAxis(axisX, Qt::AlignBottom);


}

