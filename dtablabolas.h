#ifndef _DTABLABOLAS_
#define _DTABLABOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dtablabolas.h>
#include <QString>
#include <QTimer>

class DTablaBolas : public QDialog, public Ui::DTablaBolas{
    Q_OBJECT
    public:
        DTablaBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);


    public slots:
          

};

#endif