#ifndef RECTANGLE
#define RECTANGLE

class Rectangle
{
public:
    Rectangle() = default;

    Rectangle(double _ax, double _ay, double _bx, double _by){
        ax = _ax;
        ay = _ay;
        bx = _bx;
        by = _by;
    }
    void setA(double _ax, double _ay){ax = _ax; ay = _ay;}
    void setB(double _bx, double _by){bx = _bx; by = _by;}

    double getAx(){return ax;}
    double getAy(){return ay;}
    double getBx(){return bx;}
    double getBy(){return by;}

    double length()
    {
        return abs(by-ay);
    }
    double width()
    {
        return abs(bx-ax);
    }
    double area()
    {
        return length() * width();
    }
    double edgeLength()
    {
        return length()*2 + width()*2;
    }

private:
    double ax{0.0}, ay{0.0};
    double bx{1.0}, by{1.0};
};

#endif