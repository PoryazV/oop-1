#include <iostream>
#include "rectangle.hpp"

int main()
{
    double ax, ay, bx, by;
    std::cin >> ax >> ay >> bx >> by;
    Rectangle r;
    r.setA(ax, ay);
    r.setB(bx, by);
    std::cout << r.getArea();
}