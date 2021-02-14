#include "dinfohijas.h"
#include <QVector>
#include <QString>
#include <QColor>
#include <QPushButton>
#include "widgetbolatabla.h"


DInfoHijas::DInfoHijas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent), miVector(bolas){
    setupUi(this);

    tabBolasHijas->clear();

    for (int i = 0; i < bolas->size(); i++){
       tabBolasHijas->addTab(new WidgetBolaTabla(bolas->at(i)), QString("Bola ") 
                        + QString::number(i + 1));
    }

}

void DInfoHijas::slotBolaNueva(Bola *nueva){
    tabBolasHijas->addTab(new WidgetBolaTabla(nueva), QString("Bola "));
}