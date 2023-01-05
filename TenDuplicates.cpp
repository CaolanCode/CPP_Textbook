/*
    search for 10 duplicate integers in an array
    return the duplicates
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int arr[] = {5, 5, 3, 5, 6, 3, 8, 4, 8, 9};
    int dups[10] = {0};
    int flag, pos = 0;
    
    // print original
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "\n";
    
    // find duplicates
    for(int i = 0; i < 10; i++)
    {
        flag = 0;
        for(int j = 0; j < 10; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                for(int k = 0; k < 10; k++)
                {
                    if(arr[i] == dups[k])
                    {
                        flag = 1;
                    }
                }
                if(flag == 0)
                {
                    dups[pos] = arr[i];
                    pos++;
                }
            }
        }
    }
    
    // print duplicates
    for(int i = 0; i < 10; i++)
    {
        if(dups[i] > 0)
        {
            cout << dups[i] << ", ";
        }
    }
    cout << "\n";
    
    return 0;
}
