#ifndef _WIDGETBOLA_
#define _WIDGETBOLA_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_widgetbola.h>
#include <QString>
#include <QTimer>

class WidgetBola : public QWidget, public Ui::WidgetBola{
    Q_OBJECT
    public:
        WidgetBola(Bola *bola, QWidget * parent = nullptr);
        Bola * miBola;

    public slots:
        void slotBotonParar();

};

#endif