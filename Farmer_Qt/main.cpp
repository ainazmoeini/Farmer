#include "Farmer_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Farmer_Qt w;
    w.show();
    return a.exec();
}
