/*
    The moon's gravity is about 17 percent that of Earth's
    Write a program that displays a table that shows Earth pounds and their equivalent moon weight
    Have a table run from 1 to 100 pounds
    Output newline after 25 pounds
 */
#include <iostream>
using namespace std;

int main()
{
    double moon;
    int earth, count;
    count = 0;
    
    for(earth = 1; earth <= 100; earth++)
    {
        moon = earth * 0.17;
        cout << earth << " pounds on Earth is equivalent to ";
        cout << moon << " pounds on the Moon.\n";
        count++;
        
        if(count == 25)
        {
            cout << "\n";
            count = 0;
        }
    }
    return 0;
}
