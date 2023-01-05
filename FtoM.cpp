//
//  FtoM.cpp
//  convert feet to metres
//
//

#include <iostream>
using namespace std;

int main(){
    double f, m;
    
    cout << "Enter the measurement in feet: ";
    cin >> f;
    
    m = f / 3.28;
    
    cout << f << " feet is " << m << " metres." << endl;
    
    return 0;
}
