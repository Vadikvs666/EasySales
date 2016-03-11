#include "easysales.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EasySales w;
    w.show();

    return a.exec();
}
