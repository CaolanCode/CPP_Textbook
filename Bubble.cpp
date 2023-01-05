/*
    Bubble sort algorithm
    passes through the array one less that its total size
 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nums[10];
    int a, b, t;
    int size;
    
    size = 10; // number of elements
    
    // assign random values to array elements
    for(t = 0; t < size; t++)
    {
        nums[t] = rand();
    }
    
    // print original array
    cout << "Original array:\n";
    for(t = 0; t < size; t++)
    {
        cout << nums[t] << " ";
    }
    cout << "\n";
    
    // sort array
    for(a = 1; a < size; a++)
    {
        for(b = size-1; b >= a; b--)
        {
            if(nums[b-1] > nums[b]) // out of order
            {
                t = nums[b-1];
                nums[b-1] = nums[b];
                nums[b] = t;
            }
        }
    }
    
    // print sorted array
    cout << "\nSorted array is: \n";
    for(t = 0; t < size; t++)
    {
        cout << nums[t] << " ";
    }
    return 0;
}
