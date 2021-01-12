#include "dcontrolbolas.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QPushButton>
#include "widgetbola.h"


DControlBolas::DControlBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent), miVector(bolas){
    setupUi(this);

    tabBolas->clear();

    for (int i = 0; i < bolas->size(); i++){
       tabBolas->addTab(new WidgetBola(bolas->at(i)), QString("Bola ") 
                        + QString::number(i + 1));
    }

    connect(botonPararBola, SIGNAL(clicked()),
        this, SLOT(slotBotonPararBola()));
}

void DControlBolas::slotBotonPararBola(){
    if (checkTodas->isChecked()){
        for (int i = 0; i < tabBolas->count(); i++){
            QWidget * unWidget = tabBolas->widget(i);
            WidgetBola * unWidgetBola = qobject_cast<WidgetBola*>(unWidget);
            unWidgetBola->slotBotonParar();
        }    
    }else{
        QWidget * unWidget = tabBolas->currentWidget();
        WidgetBola * unWidgetBola = qobject_cast<WidgetBola*>(unWidget);
        unWidgetBola->slotBotonParar();
    }
    
}

void DControlBolas::slotBolaNueva(Bola *nueva){
    tabBolas->addTab(new WidgetBola(nueva), QString("Bola "));
}
