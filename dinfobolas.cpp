#include "dinfobolas.h"
#include <QVector>

DInfoBolas::DInfoBolas(QVector<Bola*> *bolas, QWidget * parent) : QDialog(parent){
    setupUi(this);
}