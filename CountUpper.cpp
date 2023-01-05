/*
    count uppercase letters in a string
 */

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char str[] = "This Is A Test For Uppercases";
    char *ptr;
    int upper = 0;
    
    ptr = str;
    
    while(*ptr)
    {
        if(isupper(*ptr))
        {
            upper++;
        }
        ptr++;
    }
    
    cout << "\"" << str << "\"" << " has " << upper << " uppercase characters.\n";
    
    return 0;
}
