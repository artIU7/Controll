#include "maincontrollclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainControllClass w;
    w.show();

    return a.exec();
}
