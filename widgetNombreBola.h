#ifndef _WIDGETNOMBREBOLA_
#define _WIDGETNOMBREBOLA_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_widgetNombreBola.h>
#include <QString>
#include <QTimer>

class WidgetNombreBola : public QWidget, public Ui::WidgetNombreBola{
    Q_OBJECT
    public:
        WidgetNombreBola(Bola *bola, QWidget * parent = nullptr);
        Bola * miBola;

      
        

};



#endif