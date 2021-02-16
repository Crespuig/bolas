#include "dNombresBolas.h"
#include <QVector>
#include <QString>
#include "widgetNombreBola.h"


DNombresBolas::DNombresBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent), miVector(bolas){
    setupUi(this);

    tabNombresBolas->clear();

    for (int i = 0; i < bolas->size(); i++){
       tabNombresBolas->addTab(new WidgetNombreBola(bolas->at(i)), QString("Bola ") 
                        + QString::number(i));
    }
    
}

void DNombresBolas::slotBolaNueva(Bola *nueva){
    tabNombresBolas->addTab(new WidgetNombreBola(nueva), QString(nueva->nombre));
}
