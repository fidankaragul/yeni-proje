#include "classA.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClassA w;
    w.show();

    return a.exec();
}
