/*
    Have global variable hold a value and and a function to increment the number by three
 */
#include <iostream>
using namespace std;

int number = 0;

void reset();
void ByThrees();

int main()
{
    cout << number;
    ByThrees();
    reset();
    ByThrees();
    
    return 0;
}

void ByThrees()
{
    cout << "Increment number: ";
    for(int i = 0; i < 10; i++)
    {
        number++;
        cout << number << ", ";
    }
    cout << "\n";
}

void reset()
{
    number = 0;
    cout << "Reset number to: " << number << "\n";
}
