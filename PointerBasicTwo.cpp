/*
    Program with pointers
 */
#include <iostream>
using namespace std;

int main()
{
    char ch = 'Q';
    char *p = &ch;
    cout << *p << endl;
    ch = 'Z';
    cout << *p << endl;
    *p = 'X';
    cout << ch << endl;
    
    return 0;
}
