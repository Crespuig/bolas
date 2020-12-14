#ifndef _DTABLABOLAS_
#define _DTABLABOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dtablabolas.h>
#include <QString>
#include <QTimer>
#include <QAbstractTableModel>

class DTablaBolas : public QDialog, public Ui::DTablaBolas{
    Q_OBJECT
    public:
        DTablaBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);


    public slots:
          

};

class ModeloBolas : public QAbstractTableModel{
    public:
        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;

        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)const;
};

#endif