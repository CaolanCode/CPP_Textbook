/*
    Vehicle class
 */
#include <iostream>
using namespace std;

class Vehicle
{
int passengers;
int fuelcap;
int mpg;
public:
    // constructor
    Vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcap = f;
        mpg = m;
    };
    
    // return range
    int range(){ return fuelcap * mpg; }
    
    // accessors
    int get_passenger(){ return passengers;}
    int get_fuelcap(){ return fuelcap;}
    int get_mpg(){ return mpg;}
};



int main()
{
    Vehicle minivan(7, 16, 21);
    Vehicle sportscar(2, 14, 12);
    int range1, range2;
    
    range1 = minivan.range();
    range2 = sportscar.range();
    
    cout << "Minivan can carry " << minivan.get_passenger() << " with a range of " << range1 << "\n";
    cout << "Sportscar can carry " << sportscar.get_passenger() << " with a range of " << range2 << "\n";
    
    return 0;
}
