/*
    Triangle class
    stores base and height
    has hypotenuse and area functions
 */
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
    int base, height;
public:
    // constructor
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    
    // hypotenuse
    double hypot()
    {
        double a;
        a = pow(base, 2) + pow(height, 2);
        return sqrt(a);
    }
    
    double area()
    {
        return 0.5 * base * height * sin(hypot());
    }
};

int main()
{
    Triangle tri(12.5, 6.7);
    
    cout << "Hypotenuse of Triangle: " << tri.hypot() << "\n";
    cout << "Area of Triangle: " << tri.area() << "\n";
    
    return 0;
}
