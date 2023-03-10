/*
    Product class
 */
#include <iostream>
#include <cstring>
using namespace std;

class Product
{
    const int id;
    char *name;
    int quantity;
    static int totalProducts;
public:
    Product(const Product &p);
    ~Product();
    Product(int id, char *n, int q);
    const int getID();
    void setName(char *n);
    const char* getName();
    void setQuantity(int q);
    const int getQuantity();
    void display();
    static int getTotalProduct() { return totalProducts; }
};

Product::Product(int id, char *n, int q): id(id), quantity(q)
{
    name = new char(strlen(n) + 1);
    strcpy(name, n);
    totalProducts++;
}

Product::Product(const Product &p): id(p.id)
{
    this->name = new char(strlen(p.name) + 1);
    strcpy(this->name, p.name);
    quantity = p.quantity;
}

Product::~Product()
{
    cout << "Deleted object" << endl;
}

const int Product::getID(){ return id; }

void Product::setName(char *n) { name = n;  }

const char* Product::getName(){ return name; }

void Product::setQuantity(int q){ quantity = q; }

const int Product::getQuantity(){ return quantity; }

void Product::display()
{
    cout << "ID: " << getID() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Quantity: " << getQuantity() << endl;
}

int Product::totalProducts = 0;

int main()
{
    int id = 100;
    char name[] = "abcd";
    int quantity = 20;
    Product p1(id, name, quantity);
    id++;
    p1.display();
    cout << Product::getTotalProduct() << endl;
    
    name[3] = 'f';
    quantity = 30;
    Product p2(id, name, quantity);
    p2.display();
    id++;
    p1.display();
    cout << Product::getTotalProduct() << endl;
    
    return 0;
}
