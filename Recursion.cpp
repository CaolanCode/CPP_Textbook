/*
    Demonstrate Recursion
 */
#include <iostream>
using namespace std;

int factr(int n);

int main()
{
    cout << "4 factorial is " << factr(4) << "\n";
    return 0;
}

int factr(int n)
{
    int answer;
    
    if(n == 1) return 1;
    
    answer = factr(n-1) * n;
    return answer;
}
