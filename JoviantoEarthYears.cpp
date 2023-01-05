/*
    Convert Earth years to Jovian
    It takes Jupiter 12 Earths years to travel around the Sun
    allow fractional years
 */
#include <iostream>
using namespace std;

int main()
{
    double earth;
    
    cout << "Enter Earth years: ";
    cin >> earth;
    cout << earth << " years on Earth is equivalent to ";
    cout << earth / 12.0 << " years on Jupiter.\n";
    
    return 0;
}
