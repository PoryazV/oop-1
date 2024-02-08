#include <iostream>
#include "rectangle.hpp"

int main()
{
    Rectangle r;
    std::cout << "Default rect Area: " << r.area() << std::endl;
    std::cout << "Default rect Length: " << r.length() << std::endl;
    double ax, ay, bx, by;
    std::cin >> ax >> ay >> bx >> by;
    r.setA(ax, ay);
    r.setB(bx, by);
    std::cout << "Given rect Area: " << r.area() << std::endl;
    std::cout << "Given rect Length: " << r.length() << std::endl;
}