/*
    queue class
 */
#include <iostream>
using namespace std;

const int maxQSize = 100;

class Queue
{
    char q[maxQSize];  // array holds the queue
    int size;
    int putloc, getloc;
    
public:
    // constructor
    Queue(int len)
    {
        // queue must be less than max and positive
        if(len > maxQSize) len = maxQSize;
        else if(len <= 0) len = 1;
        
        size = len;
        putloc = getloc = 0;
    }

    // put characters into queue
    void put(char ch)
    {
        if(putloc == size)
        {
            cout << " -- Queue is full\n";
            return;
        }
        putloc++;
        q[putloc] = ch;
    }
    
    // get character from queue
    char get()
    {
        if(getloc == putloc)
        {
            cout << " -- Queue is empty\n";
            return 0;
        }
        
        getloc++;
        return q[getloc];
    }
};
 int main()
{
     Queue bigQ(100);
     Queue smallQ(4);
     char ch;
     int i;
     
     cout << "Using bigQ to store the alphabet\n";
     // put some numbers in bigQ
     for(i = 0; i < 26; i++) bigQ.put('A' + i);
     
     // retrieve and display elements from bigQ
     cout << "Contents of bigQ: ";
     for(i = 0; i < 26; i++)
     {
         ch = bigQ.get();
         if(ch != 0) cout << ch;
     }
     
     cout << "\n\n";
     
     cout << "Using smallQ to generate errors\n";
     for(i = 0; i < 5; i++)
     {
         cout << "Attempting to store " << (char) ('Z' - i);
         smallQ.put('Z' - i);
         cout << "\n";
     }
     cout << "\n";
     
     // more errors on smallQ
     cout << "Contents of smallQ\n";
     for(i = 0; i < 5; i++)
     {
         ch = smallQ.get();
         if(ch != 0) cout << ch;
     }
     cout << "\n";
     
     return 0;
 }
