/*
    Reverse case using array indexing
 */

#include <iostream>
#include "cctype"
using namespace std;

int main()
{
    int i;
    char str[80] = "This Is A Test";
    
    cout << "Original string: " << str << "\n";
    
    for(i = 0; str[i]; i++)
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    
    cout << "Inverted-case string: " << str << "\n";
    
    return 0;
}
