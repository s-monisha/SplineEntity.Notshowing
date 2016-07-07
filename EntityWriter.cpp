#include "EntityWriter.h"
#include<iostream>
#include <typeinfo>
#include<QDebug>
EntityWriter::EntityWriter(dxfRW &dxfW) : dxfW(dxfW) {
}


void EntityWriter::Spline(double ex, double ey, double tgsx, double tgsy, double tgex, double tgey, int flags, int degree)
{
    DRW_Spline spline;
    spline.ex = 0;
    spline.ey = 1;
    spline.ez= 0;
    spline.tgez= 0;
    spline.tgsz= 0;
    spline.tgsx = 3;
    spline.tgsy = 3;
    spline.tgex = 12;
    spline.tgey = 12;
    spline.flags = 0;
    spline.degree = 2;
    spline.layer = "spline";

    dxfW.writeSpline(&spline);
}

void EntityWriter::writeEntities()
{
    Spline(0, 1, 3, 3, 12, 12, 0, 2);
}


