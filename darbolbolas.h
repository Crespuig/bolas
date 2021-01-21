#ifndef _DARBOLBOLAS_
#define _DARBOLBOLAS_

#include <QDialog>
#include <QLabel>
#include <QVector>
#include <bola.h>
#include <ui_darbolbolas.h>
#include <QString>
#include <QTimer>
#include <QAbstractItemModel>


class DArbolBolas : public QDialog, public Ui::DArbolBolas{
    Q_OBJECT
    public:
        DArbolBolas(QVector<Bola*> *bolas, QWidget * parent = nullptr);
    

};

class ModeloArbol : public QAbstractItemModel{
    Q_OBJECT
    public:
        ModeloArbol(QVector<Bola*> *bolas);
        QVector<Bola *> *bolas;

        int rowCount(const QModelIndex &parent = QModelIndex())const;
        int columnCount(const QModelIndex &parent = QModelIndex())const;
        
        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)const;
        
        QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex())const;
        
        QModelIndex parent(const QModelIndex &index)const;

        

        public slots:
           
};

#endif