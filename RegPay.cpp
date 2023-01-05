/*
    Compute the regular payments on a loan
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double Principal, IntRate, PayPerYear, NumYears, Payment, TotalInt;
    double numer, denom; // temp work variables
    double b, e; // base, exponient
    
    cout << "Enter Principal: ";
    cin >> Principal;
    
    cout << "Enter interest rate (i.e., 0.075): ";
    cin >> IntRate;
    
    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;
    
    cout << "Enter number of years: ";
    cin >> NumYears;
    
    numer = IntRate * Principal / PayPerYear;
    
    e = - (PayPerYear * NumYears);
    
    b = (IntRate / PayPerYear) + 1;
    
    denom = 1 - pow(b, e);
    
    Payment = numer / denom;
    TotalInt = IntRate * Principal * NumYears;
    
    cout << "Payment is " << Payment << "\n";
    cout << "Total Interest paid is " << TotalInt << "\n";
    
    return 0;
}
