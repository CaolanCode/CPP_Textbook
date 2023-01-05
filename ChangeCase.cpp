/*
    change all lowercase to uppercase and vice versa
    ASCII uppercase = 65 - 90, lowercase = 97 - 122
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    do{
        cout << "Enter a character to change its case: ";
        cin >> ch;
        
        if(ch >= 65 && ch <= 90) // uppercase
        {
            cout << ch << ", ";
            ch += 32;
            cout << ch << "\n";
        }
        else if(ch >= 97 && ch <= 122) // lowercase
        {
            cout << ch << ", ";
            ch -= 32;
            cout << ch << "\n";
        }
        
    }while(ch != '.');
    return 0;
}
