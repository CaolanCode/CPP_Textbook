/*
    round function that rounds a double to the nearest whole number
 */

#include <iostream>
#include <cmath>
using namespace std;

void Round(double &number, double &newNumber);

int main()
{
    double number;
    double newNumber;
    
    cout << "Enter a double number to round: ";
    cin >> number;
    
    
    
    cout << number << " as a whole number is ";
    Round(number, newNumber);
    cout << newNumber << "\n";
    
    return 0;
}
 
void Round(double &number, double &newNumber)
{
    modf(number, &newNumber);
}
