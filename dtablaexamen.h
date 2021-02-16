#ifndef _DTABLAEXAMEN_
#define _DTABLAEXAMEN_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_dtablaexamen.h>
#include <QString>
#include <QTimer>
#include <QAbstractTableModel>


class DTablaExamen : public QDialog, public Ui::DTablaExamen{
    Q_OBJECT
    public:
        DTablaExamen(QVector<Bola*> *bolas, QWidget * parent = nullptr);

        QTimer * temporizador;
    

};

class ModeloTablaExamen : public QAbstractTableModel{
    Q_OBJECT
    public:
        ModeloTablaExamen(QVector<Bola*> *lasBolas, QObject * parent = nullptr);

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