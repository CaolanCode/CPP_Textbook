/*
    Construct XOR operator
    XOR is true is only one is true
 */
#include <iostream>
using namespace::std;

int main()
{
    bool p, q;
    
    p = true;
    q = true;
    
    cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
    
    p = false;
    q = true;
    
    cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
    
    p = true;
    q = false;
    
    cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
    
    p = false;
    q = false;
    
    cout << p << " XOR " << q << " is " << ((p || q) && !(p && q)) << "\n";
    
    return 0;
}
