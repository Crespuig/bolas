#include "dchart.h"
#include <QVector>
#include <QHBoxLayout>
#include <QChart>
#include <QChartView>
#include <QPushButton>
#include <QLineSeries>
#include <QTimer>
#include <QValueAxis>
#include <QPen>


DChart::DChart(QVector<Bola*> * bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);
    
    miVector = bolas;

    temporizador = new QTimer();
    temporizador->setInterval(1000);
    temporizador->setSingleShot(false);
    connect(temporizador,
             SIGNAL(timeout()),
             this,SLOT(slotTemporizador()));
                temporizador->start();


    datosChart = new QChart();
    vistaChart= new QChartView(datosChart);

    QHBoxLayout * layout = new QHBoxLayout();
    frameChart->setLayout(layout);
    layout->addWidget(vistaChart);
    //layout->addWidget(new QPushButton("hola"));

    serie = new QLineSeries();
    serie->append(1,1);
    serie->append(2,10);
    serie->append(3,3);
    serie->append(4,18);
    datosChart->addSeries(serie);

    QValueAxis * axisY = new QValueAxis();
    axisY->setRange(0,30);
    axisY->setTitleText("Goles");

    QValueAxis * axisX = new QValueAxis();
    axisX->setRange(0,30);
    axisX->setTitleText("Dias");

    datosChart->addAxis(axisY, Qt::AlignLeft);
    datosChart->addAxis(axisX, Qt::AlignBottom);

    connect(serie,SIGNAL(hovered(const QPointF &,bool)),
            this,SLOT(slotResaltar(const QPointF &,bool)));
    
    vistaChart->setRenderHint(QPainter::Antialiasing);

    serie->attachAxis(axisY);
    serie->attachAxis(axisX);


}

void DChart::slotTemporizador(){    
    serie->replace(serie->count() -1 ,
                     serie->at(serie->count() -1 ).x() + 1,
                     serie->at(serie->count() -1 ).y());
                    
                    
    datosChart->removeSeries(serie);
    datosChart->addSeries(serie);

    QList<QAbstractAxis*> lista = datosChart->axes(Qt::Horizontal);   
    foreach (QAbstractAxis * axis, lista) {
        if (axis->orientation() == Qt::Horizontal) {
            datosChart->removeAxis(axis);
            serie->detachAxis(axis);
            delete axis;
            break;
        }
    }
   
    
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0,serie->at( serie->count() -1 ).y() + 1 );
    axisY->setTitleText("Prueba");
    
    datosChart->addAxis(axisY,Qt::AlignBottom);
    serie->attachAxis(axisY);

}

void DChart::slotResaltar(const QPointF &punto, bool estado){
    
    QPen pen;

    if (estado ) {
        pen.setColor(Qt::red);
        pen.setWidth(3);
        }
    else {
        pen.setColor(Qt::blue);
        pen.setWidth(2);
    }
    serie->setPen(pen);
}


