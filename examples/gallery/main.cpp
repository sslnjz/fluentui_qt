#include <QApplication>

#include "Gallery.h"

int main(int argc, char* argv[])
{
    QApplication::setHighDpiScaleFactorRoundingPolicy(
        Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

    QApplication a(argc, argv);

    Gallery g;
    g.show();

    return a.exec();
}
