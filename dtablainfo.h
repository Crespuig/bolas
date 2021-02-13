#ifndef _DTABLAINFO_
#define _DTABLAINFO_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dtablainfo.h>
#include <QString>
#include <QTimer>
#include <QAbstractTableModel>


class DTablaInfo : public QDialog, public Ui::dTablaInfo{
    Q_OBJECT
    public:
        DTablaInfo(QVector<Bola*> *bolas, QWidget * parent = nullptr);

        QTimer * temporizador;
    

};

class ModeloBolasInfo : public QAbstractTableModel{
    Q_OBJECT
    public:
        ModeloBolasInfo(QVector<Bola*> *lasBolas, QObject * parent = nullptr);

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