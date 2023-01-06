/*
    duplicate of strlen function
 */
#include <iostream>
using namespace std;

int mystrlen(char *str);

int main()
{
    int size;
    char str[80];
    
    cout << "Enter string: ";
    gets(str);
    
    cout << "Length of string: " << mystrlen(str) << "\n";
    
    return 0;
}

int mystrlen(char *str)
{
    int size = 0;
    
    while(*str)
    {
        size++;
        str++;
    }
    return size;
}
