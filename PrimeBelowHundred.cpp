/*
    Find all prime numbers below 100
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for(int i = 2; i < 100; i++)
    {
        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
            else if(j + 1 > sqrt((double)i))
            {
                cout << i << "\n";
            }
        }
    }
    
    return 0;
}
