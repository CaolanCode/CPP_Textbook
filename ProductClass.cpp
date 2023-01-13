/*
    Product class
 */
#include <iostream>
using namespace std;

int setID();

class Product
{
    int id;
    string name;
    int quantity;
public:
    Product();
    ~Product();
    Product(string n, int q);
    int getID();
    void setName(string n);
    string getName();
    void setQuantity(int q);
    int getQuantity();
    void display();
};

Product::Product(){ id = setID(); };

Product::Product(string n, int q)
{
    id = setID();
    name = n;
    quantity = q;
}

Product::~Product()
{
    cout << "Deleted object" << endl;
}

int Product::getID(){ return id; }

void Product::setName(string n) { name = n;  }

string Product::getName(){ return name; }

void Product::setQuantity(int q){ quantity = q; }

int Product::getQuantity(){ return quantity; }

void Product::display()
{
    cout << "ID: " << getID() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Quantity: " << getQuantity() << endl;
}

int setID()
{
    static int id = 0;
    
    return ++id;
}

int main()
{
    string name;
    int quantity;
    cout << "Enter the products name: ";
    getline(cin, name);
    cout << "Enter the quantity of the product: ";
    cin >> quantity;
    
    Product *p = new Product(name, quantity);
    
    p->display();
    
    delete p;
    
    
    return 0;
}
