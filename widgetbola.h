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

        void dragEnterEvent(QDragEnterEvent*);
        void dropEvent(QDropEvent * event);

    public slots:
        void slotBotonParar();
        void slotBotonAcelerar();
        void slotBotonFrenar();

};

#endif