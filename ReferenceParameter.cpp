/*
    pass by reference
    swap values of variables
 */
#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
    int i, j;
    i = 10;
    j = 20;
    
    cout << "i = " << i << ", j = " << j << "\n";
    
    swap(i, j);
    
    cout << "i = " << i << ", j = " << j << "\n";
    
    return 0;
}

void swap(int &x, int &y)
{
    int temp = y;
    y = x;
    x = temp;
}
