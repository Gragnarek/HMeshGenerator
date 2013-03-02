#include <QApplication>

#include "../SRC/Generator/DataType/vector.h"
#include "../SRC/Generator/DataType/vector3d.h"

#include <iostream>

int main (int argc, char** argv)
{
    QApplication a(argc, argv);

    Vector l;

    return a.exec();
}
