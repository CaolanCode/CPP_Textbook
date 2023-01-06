/*
    function counts how many times its called
 */
#include <iostream>
using namespace std;

void counter();

int main()
{
    counter();
    counter();
    counter();
    counter();
    
    return 0;
}
void counter()
{
    static int count = 0;
    cout << "Function has been called: " << ++count << "\n";
}
