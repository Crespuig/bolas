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
    WidgetBola(QWidget * parent = nullptr);

    

};

#endif