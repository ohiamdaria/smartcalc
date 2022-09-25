#include "depositcalc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    depositcalc w;
    w.show();
    return a.exec();
}
