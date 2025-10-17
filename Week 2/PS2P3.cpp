#include <iostream>
#include <string>
using namespace std;
int main()
{
    // define variables
    int length, width, area, circumference;
    
    // input phase
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
    
    area = length * width;
    circumference = 2 * length + 2 * width;
    
    // process phase
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    
    return 0;
    
} // end of main
