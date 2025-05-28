#include <QApplication>

#include "Gallery.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Gallery g;
    g.show();

    return a.exec();
}
