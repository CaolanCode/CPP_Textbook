/*
    assign value with pointer
 */

#include <iostream>
using namespace std;

int main()
{
    int *ptr, num;
    
    ptr = &num;
    
    *ptr = 100;  // value at ptr is 100
    cout << num << ' ';
    
    (*ptr)++;   // increment value at ptr
    cout << num << ' ';
    
    (*ptr)--;   // decrement value at ptr
    cout << num << '\n';
    
    return 0;
}
