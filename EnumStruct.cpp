/*
    Using Enum and Structures
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};
    
    struct Passenger {
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNo;
    };
    
    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};
    Passenger *p;
    
    pass.name = "Pocahontas";
    pass.mealPref = REGULAR;
    
    cout << pass.name << endl;
    cout << pass.mealPref << endl;
    cout << pass.isFreqFlyer << endl;
    cout << pass.freqFlyerNo << endl;
    
    p = new Passenger;
    p->name = "Jane Doe";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";
    
    cout << p->name << endl;
    cout << p->mealPref << endl;
    cout << p->isFreqFlyer << endl;
    cout << p->freqFlyerNo << endl;
    
    
    return 0;
}
