/*
    Concatenate Strings
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    
    if(s > t) cout << u << endl;
    
    return 0;
}
