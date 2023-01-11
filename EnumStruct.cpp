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
    
    pass.name = "Pocahontas";
    pass.mealPref = REGULAR;
    
    cout << pass.name << endl;
    cout << pass.mealPref << endl;
    cout << pass.isFreqFlyer << endl;
    cout << pass.freqFlyerNo << endl;
    
    return 0;
}
