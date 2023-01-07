/*
    Create a subclass of Vehicle called Truck
 */
#include <iostream>
using namespace std;

// Declare Vehicle class
class Vehicle
{
    int passengers;
    int fuelcap;
    int mpg;
public:
    Vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }
    
    int range() { return mpg * fuelcap;}
    
    // Accessor functions
    int get_passengers(){ return passengers;}
    int get_fuelcap(){ return fuelcap;}
    int get_mpg(){ return mpg;}
};

class Truck : public Vehicle
{
    int cargocap;
public:
    Truck(int p, int f, int m, int c) : Vehicle(p, f, m)
    {
        cargocap = c;
    }
    
    // Accessor function
    int get_cargocap(){return cargocap; }
};

int main()
{
    Truck semi(2, 200, 7, 44000);
    Truck pickup(3, 28, 15, 2000);
    int dist = 252;
    
    cout << "Semi can carry " << semi.get_cargocap() << " pounds\n";
    cout << "It has a range of " << semi.range() << " gallons of fuel\n";
    cout << "To go " << dist << " miles semi needs " << dist / semi.get_mpg() << " gallons of fuel \n\n";
    cout << "Pickup can carry " << pickup.get_cargocap() << " pounds\n";
    cout << "It has a range of " << pickup.range() << " miles\n";
    cout << "To go " << dist << " miles pickup needs " << dist / pickup.get_mpg() << " gallons of fuel \n\n";
    
    return 0;
}
