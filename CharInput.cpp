/*
    Read characters from keyboard until '$'
    Count the number of '.'
 */
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int periods = 0;
   
    do
    {
        cout << "Enter a character ($ to quit) :";
        cin >> ch;
        if(ch == '.')
        {
            periods++;
        }
    }while(ch != '$');
    
    cout << "You entered " << periods << " periods.\n";
    return 0;
}
