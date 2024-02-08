#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
public:
    Rectangle() = default;

    Rectangle(double _ax, double _ay, double _bx, double _by);

    void setA(double _ax, double _ay);
    void setB(double _bx, double _by);

    double getAx();
    double getAy();
    double getBx();
    double getBy();

    double area();
    double length();

private:
    double ax{0.0}, ay{0.0};
    double bx{1.0}, by{1.0};
};

#endif