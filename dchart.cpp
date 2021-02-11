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
#include <QDebug>


DChart::DChart(QVector<Bola*> * bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);
    
    miVector = bolas;
    colisiones = 0;

    miVectorSeries;

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


    


    QValueAxis * axisY = new QValueAxis();
    axisY->setRange(0,60);
    axisY->setTitleText("Goles");

    QValueAxis * axisX = new QValueAxis();
    axisX->setRange(0,60);
    axisX->setTitleText("Dias");

    datosChart->addAxis(axisY, Qt::AlignLeft);
    datosChart->addAxis(axisX, Qt::AlignBottom);

    
    
    vistaChart->setRenderHint(QPainter::Antialiasing);

    for (int i = 0; i < miVector->size(); i++){
        serie = new QLineSeries();
        miVectorSeries.append(serie);
        datosChart->addSeries(miVectorSeries.at(i));        
        serie->append(0,0);
        //serie->append(1,i);

        serie->attachAxis(axisY);
        serie->attachAxis(axisX);
        
    }
    


}

void DChart::slotTemporizador(){ 
    static int count = 2;
    count++;   

    int totalColisiones = 0;
    for (int i = 0; i < miVector->size(); i++){
        totalColisiones+=miVector->at(i)->colision;
    }
    for (int j = 0; j < miVectorSeries.size(); j++){
        
        miVectorSeries.at(j)->append(count, miVector->at(j)->colision);
        //qDebug()<<"colisiones bola"<< j << "total " <<miVector->at(j)->colision;

    }
    
    

    QList<QAbstractAxis*> lista = datosChart->axes(Qt::Horizontal);   
    
    foreach (QAbstractAxis * axis, lista) {
        if (axis->orientation() == Qt::Horizontal) {
            serie->detachAxis(axis);
            datosChart->removeAxis(axis);
            delete axis;
            break;
        }
    }
   
    QValueAxis *axisX = new QValueAxis;
    axisX->setRange(0,count +1);
    axisX->setTitleText("Tiempo");
    
 
    datosChart->addAxis(axisX,Qt::AlignBottom);
    serie->attachAxis(axisX);
    
    
    

    /*---------------------------------------------------------------------------------*/

    lista = datosChart->axes(Qt::Vertical);
    
    foreach (QAbstractAxis * axis, lista) {
            if (axis->orientation() == Qt::Vertical) {
            serie->detachAxis(axis);
            datosChart->removeAxis(axis);
            delete axis;
            break;
        }
    }
    
    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0,totalColisiones+1);
    axisY->setTitleText("Colisiones");
    
    datosChart->addAxis(axisY,Qt::AlignLeft);
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


