/*
    simple function
 */
#include <iostream>
using namespace std;

void myFunc();

int main()
{
    cout << "Inside main()\n";
    
    myFunc();
    
    cout << "Back in main()\n";
    
    return 0;
}

void myFunc()
{
    cout << "Inside myFunc()\n";
}
