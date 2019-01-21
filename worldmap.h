#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <QGraphicsScene>
#include <QGraphicsView>

class WorldMap : public QGraphicsView
{
    Q_OBJECT
public:
    explicit WorldMap(QGraphicsView *parent = nullptr);

signals:

public slots:

private:
    QGraphicsScene *scene;
};

#endif // WORLDMAP_H
