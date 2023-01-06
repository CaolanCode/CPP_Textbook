/*
    compute the length of a hypotenuse of a right angle triangle given the lengths of the two opposite sides
*/
#include <iostream>
#include <cmath>
using namespace std;

void hypot(double *a, double *b, double *c);

int main()
{
    double a, b, c;
    
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    
    hypot(&a, &b, &c);
    
    cout << "Hypotenuse of this triange: " << c << "\n";
    return 0;
}

void hypot(double *a, double *b, double *c)
{
    *c = pow(*a, 2) + pow(*b, 2);
    *c = sqrt(*c);
}
