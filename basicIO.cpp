//
// basic I/O
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int length, width;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    
    cout << "The area of the rectangle is: " << length * width << endl;
    
    return 0;
}
