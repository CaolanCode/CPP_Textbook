/*
    compare strings for equality
    get user to enter string
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[80];
    char *ptr;
    
    cout << "Enter a string: ";
    cin >> str;
    
    ptr = str;
    
    while(*ptr)
    {
        *ptr = toupper(*ptr);
        ptr++;
    }
    
    if(!strcmp(str, "OK"))
    {
        cout << "The strings are equal\n";
    }
    else
    {
        cout << "The strings are not equal\n";
    }
    return 0;
}
