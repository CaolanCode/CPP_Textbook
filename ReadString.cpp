//
//  ReadString.cpp
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];
    
    cout << "Enter a string: ";
    gets(str);
    cout << "Here is the string: ";
    cout << str << "\n";
    return 0;
}
