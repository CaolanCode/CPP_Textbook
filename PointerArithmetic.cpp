/*
    Reverse case using pointer arithmetic
 */
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char *ptr;
    char str[80] = "This Is A Test";
    
    cout << "Original string: " << str << "\n";
    
    ptr = str; // assigns ptr the adddress of the start of the array
    
    while(*ptr)  // iterate until NULL Terminator
    {
        if(isupper(*ptr)) // check value at ptr address
        {
            *ptr = tolower(*ptr);
        }
        else if(islower(*ptr))
        {
            *ptr = toupper(*ptr);
        }
        ptr++; // increment ptr address
    }
    
    cout << "Inverted-case string: " << str << "\n";
    
    return 0;
}
