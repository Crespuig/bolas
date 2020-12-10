#ifndef _DINFOBOLAS_
#define _DINFOBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dinfobolas.h>


class DInfoBolas : public QDialog, Ui::DInfoBolas{
    Q_OBJECT
    public:
        DInfoBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);

         

};

#endif