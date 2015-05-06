#include "mu0.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mu0 w;
    w.setWindowFlags(Qt::CustomizeWindowHint);
    w.show();

    return a.exec();
}
