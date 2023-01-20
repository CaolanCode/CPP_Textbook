/*
    Cookie class
 */
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Cookie
{
    string colour;
public:
    Cookie(string colour);
    string getColour();
    void setColour(string colour);
};

Cookie::Cookie(string colour) : colour(colour) {};

string Cookie::getColour(){ return this->colour; }

void Cookie::setColour(string colour){ this->colour = colour; }

int main()
{
    Cookie *cookieOne = new Cookie("Green");
    Cookie *cookieTwo = new Cookie("Blue");
    
    cookieOne->setColour("Yellow");
    
    cout << "C1: " << cookieOne->getColour() << endl;
    cout << "C2: " << cookieTwo->getColour() << endl;
    
    return 0;
}
