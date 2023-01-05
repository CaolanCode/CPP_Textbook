/*
    pass array to a function
 */
#include <iostream>
using namespace std;

void cube(int *n, int size);

int main()
{
    int i, nums[10], size = 10;
    
    cout << "Original array: ";
    for(i = 0; i < size; i++)
    {
        nums[i] = i+1;
        cout << nums[i] << " ";
    }
    cout << "\n";
    
    cube(nums, size);
    
    cout << "Modified array: ";
    for(i = 0; i < size; i++) cout << nums[i] << " ";
    cout << "\n";
    
    return 0;
}

void cube(int *n, int size)
{
    while(size)
    {
        *n = *n * *n * *n;
        size--;
        n++;
    }
}
