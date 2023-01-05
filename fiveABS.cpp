/*
    Enter five numbers and return the absolute values
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double number;
    
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a value: ";
        cin >> number;
        cout << "The absolute value of " << number << " is " << abs(number)  << "\n";
    }
    
    return 0;
}
