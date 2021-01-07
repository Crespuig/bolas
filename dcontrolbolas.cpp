#include "dcontrolbolas.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QPushButton>
#include "widgetbola.h"


DControlBolas::DControlBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);

    tabBolas->clear();

    //tabBolas->addTab(widgetBola, QString("bola"));

    for (int i = 0; i < bolas->size(); i++){
       tabBolas->addTab(new WidgetBola(), QString("Bola ") 
                        + QString::number(i));
    }
    

    /*tabBolas->addTab(new QPushButton("botoncito"), QString("Juan"));
    QWidget * widget = new QWidget();
    tabBolas->addTab(widget, QString("Perico"));
    tabBolas->addTab(new QWidget, QString("Andres"));*/
}
