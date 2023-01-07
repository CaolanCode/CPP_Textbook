/*
    abstract shape class with area pure virtual function
 */
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Triangle : public Shape
{
    double base, height;
    
public:
    Triangle(double b, double h) : base(b), height(h) {};
    
    double area()
    {
        return 0.5 * base * height;
    }
};

class Square : public Shape
{
    double side;
public:
    Square(double side) : side(side) {};
    
    double area()
    {
        return side * side;
    }
};

int main()
{
    Shape *shape[] =
    {
        new Square(4.5),
        new Triangle(5.9, 4.5),
        new Square(50),
        new Triangle(9.2, 6.5),
    };
    
    for(int i = 0; i < 4; i++) cout << "Shape " << i << " : " << shape[i]->area() << "\n";
    
    return 0;
}
