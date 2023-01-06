/*
    Check is password is correct
 */
#include <iostream>
#include <cstring>
using namespace std;

void CheckPassword();

int main()
{
    
    CheckPassword();
    
    return 0;
}

void CheckPassword()
{
    char pwd[] = "Password";
    char NewPwd[80];
    
    cout << "Enter password: ";
    cin >> NewPwd;
    
    if(!strcmp(pwd, NewPwd)) cout << "Correct Password\n";
    else cout << "Incorrect Password\n";
    
}
