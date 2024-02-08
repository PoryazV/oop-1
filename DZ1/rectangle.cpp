#include <cmath>
#include "rectangle.hpp"

Rectangle::Rectangle(double _ax, double _ay, double _bx, double _by){
    ax = _ax;
    ay = _ay;
    bx = _bx;
    by = _by;
}
void Rectangle::setA(double _ax, double _ay){ax = _ax; ay = _ay;}
void Rectangle::setB(double _bx, double _by){bx = _bx; by = _by;}

double Rectangle::getAx(){return ax;}
double Rectangle::getAy(){return ay;}
double Rectangle::getBx(){return bx;}
double Rectangle::getBy(){return by;}

double Rectangle::area()
{
    return abs(bx-ax)*abs(by-ay);
}
double Rectangle::length()
{
    return abs(bx-ax)*2 + abs(by-ay)*2;
}