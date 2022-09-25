#include "creditcalc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    creditcalc w;
    w.show();
    return a.exec();
}
