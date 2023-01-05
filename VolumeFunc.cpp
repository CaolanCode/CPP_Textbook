/*
    Return volume of a box
 */
#include <iostream>
using namespace std;

double box(double length, double width, double height);

int main()
{
    int sum = box(7.1, 20.4, 4.9) + box(4.5, 3.3, 9.5) + box(12.2, 8.4, 13.1);
    
    cout << "Sum of the volume of the three boxes: " << sum << "\n";
    cout << "Average volume of the three boxes: " << sum / 3 << "\n";
    
    return 0;
}


double box(double length, double width, double height)
{
    return length * width * height;
}
