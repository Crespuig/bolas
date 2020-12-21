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

        QTimer * temporizador;
    

};

class ModeloBolas : public QAbstractTableModel{
    Q_OBJECT
    public:
        ModeloBolas(QVector<Bola*> *lasBolas, QObject * parent = nullptr);

        QVector<Bola*> *vector;
        QString getInformacionBolas(Bola *bola);

        int rowCount(const QModelIndex &parent = QModelIndex()) const;
        int columnCount(const QModelIndex &parent = QModelIndex()) const;

        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)const;
        QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole)const;

        public slots:
            void slotActualizarDatos();
            void slotActualizarDatosTemp();
};

#endif