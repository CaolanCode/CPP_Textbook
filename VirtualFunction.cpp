/*
    a short example that uses a virtual function
 */

#include <iostream>
using namespace std;

class B
{
public:
    virtual void who(){cout << "Base\n";}
};

class D1: public B
{
public: // redefine who
     void who(){cout << "First derivation\n";}
};

class D2: public B
{
public: // redefine who
     void who(){cout << "Second derivation\n";}
};

class D3: public B
{
public: // undefined who
};

int main()
{
    B base_obj;
    B *p;
    D1 D1_obj;
    D2 D2_obj;
    D3 D3_obj;
    
    p = &base_obj;
    p->who(); // access B who()
    
    p = &D1_obj;
    p->who(); // access B who()
    
    p = &D2_obj;
    p->who(); // access B who()
    
    p = &D3_obj;
    p->who(); // access B who()
    
    return 0;
}
