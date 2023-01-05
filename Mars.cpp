/*
    Display how long a radio signal will take to travel from Earth to Mars
    Mars is 34,000,000 miles away from Earth
    Radion signal travels 186,000 miles per second
 */
#include <iostream>
using namespace std;

int main()
{
    double lightspeed, mars, delay, delay_in_mins;
    lightspeed = 186000.0;
    mars = 34000000.0;
    
    delay = mars / lightspeed;
    delay_in_mins = delay / 60;
    
    cout << "The radio signal will take " << delay << " seconds to reach Mars\n";
    cout << "This is " << delay_in_mins << " minutes\n";
    cout << "The bidirectoional delay is " << delay_in_mins * 2 << " minutes.\n";
    
    return 0;
}
