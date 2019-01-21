#include "worldmap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WorldMap w;
    w.show();

    return a.exec();
}
