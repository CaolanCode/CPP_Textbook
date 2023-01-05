/*
    Program with pointers
 */
#include <iostream>
using namespace std;

int main()
{
    int total;
    int *ptr;
    int val;
    
    total = 3200;
    
    ptr = &total;
    
    val = *ptr;
    
    cout << "Total is: " << val << "\n";
    return 0;
}
