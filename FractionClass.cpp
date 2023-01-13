/*
    Fraction Class
 */
#include <iostream>
#include <numeric>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;
    
public:
    Fraction(int numerator, int denominator);
    void print();
    void add(Fraction const &f); 
    void simplify();
};


Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

void Fraction::print()
{
    cout << numerator << "/" << denominator << endl;
}

void Fraction::add(Fraction const &f)  // const
{
    int lcm = denominator * f.denominator;
    int x = lcm / denominator;
    int y = lcm / f.denominator;
    int num = x * numerator + y * f.numerator;
    
    numerator = num;
    denominator = lcm;
    simplify();
}

void Fraction::simplify()
{
    int num = gcd(numerator, denominator);
    numerator = numerator/num;
    denominator = denominator/num;
}

int main()
{
    Fraction f1(5, 6);
    Fraction f2(4, 9);
    
    cout << "f1: ";
    f1.print();
    cout << "f2: ";
    f2.print();
    
    f1.add(f2);
    
    cout << "f1: ";
    f1.print();
    
    return 0;
}
