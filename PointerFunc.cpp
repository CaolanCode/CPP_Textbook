/*
    pass pointers in function
 */
#include <iostream>
using namespace std;

void f(int *j);
void g(int *j);

int main()
{
    int i;
    int *p;
    
    p = &i;
    
    f(p); // pass pointer to address
    cout << i << "\n";
    
    g(&i); // pass address of i
    cout << i << "\n";
    
    return 0;
}

void f(int *j)
{
    *j = 100; // value at j = 100
}

void g(int *j)
{
    *j = 300; // value at j = 100
}
