#include <cmath>

#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
public:
    void setA(double _ax, double _ay){ax = _ax; ay = _ay;}
    void setB(double _bx, double _by){bx = _bx; by = _by;}
    double getAx(){return ax;}
    double getAy(){return ay;}
    double getBx(){return bx;}
    double getBy(){return by;}
    double getArea()
    {
        return abs(bx-ax)*abs(by-ay);
    }
    double getLength()
    {
        return abs(bx-ax)*2 + abs(by-ay)*2;
    }
private:
    double ax{0.0}, ay{0.0};
    double bx{0.0}, by{0.0};
};

#endif