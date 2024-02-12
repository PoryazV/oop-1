#include <iostream>
#include "rectangle.hpp"

int main()
{
    Rectangle r;
    std::cout << "Default rect Length: " << r.length() << std::endl;
    std::cout << "Default rect Width: " << r.width() << std::endl;
    std::cout << "Default rect Area: " << r.area() << std::endl;
    std::cout << "Default rect Edge length: " << r.edgeLength() << std::endl;
    double ax, ay, bx, by;
    std::cout << "Enter: Ax, Ay, Bx, By" << std::endl;
    std::cin >> ax >> ay >> bx >> by;
    r.setA(ax, ay);
    r.setB(bx, by);
    std::cout << "Given rect Length: " << r.length() << std::endl;
    std::cout << "Given rect Width: " << r.width() << std::endl;
    std::cout << "Given rect Area: " << r.area() << std::endl;
    std::cout << "Given rect Edge length: " << r.edgeLength() << std::endl;
}