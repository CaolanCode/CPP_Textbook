/*
    Reverse a string in place with pointers
 */

#include <iostream>
#include <cstring>
using namespace::std;

int main()
{
    char str[] = "This Is A Test";
    char *start, *end;
    char t;
    int len;
    
    len = strlen(str);
    
    cout << "Original: " << str << "\n";
    
    start = str;
    end = &str[len-1];
    
    while(start < end)
    {
        // swap characters
        t = *start;
        *start = *end;
        *end = t;
        // advance pointers
        start++;
        end--;
    }
    
    cout << "Reversed: " << str << "\n";
    
    return 0;
}
