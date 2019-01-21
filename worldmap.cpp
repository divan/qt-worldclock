#include "worldmap.h"

WorldMap::WorldMap(QGraphicsView *parent) : QGraphicsView(parent)
{
    this->scene = new QGraphicsScene();
    QPixmap worldDay = QPixmap(":/maps/world_day.jpg");
    QPixmap worldNight = QPixmap(":/maps/world_night.jpg");
    scene->addPixmap(worldNight.scaledToWidth(1280));
    scene->addPixmap(worldDay.scaledToWidth(1280));

    // draw day/night terminator line according to algorithm
    QPen pen;
    pen.setColor(Qt::red);
    scene->addEllipse( 50, 50, 100, 150, pen, QBrush(Qt::blue) );

    setScene(scene);
    updateGeometry();
    show();
    showFullScreen();
}
