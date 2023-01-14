/*
    Vector practice
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> *vp = new vector<int>();
    vector<int> v;
    
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    
    vp->push_back(90);
    vp->push_back(100);
    vp->push_back(110);
    vp->push_back(120);
    
    
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
    
    for(int i = 0; i < vp->size(); i++) cout << (*vp)[i] << endl;
    
    cout << v.at(2) << endl;
    
    delete vp;
    return 0;
}
