#include <iostream>
#include <string>
using namespace std;

int main()
{
    //define variables
    string lastname;
    double hours, payrate, grosspay;
    
    // input phase
    cout << "Enter Last Name: ";
    cin >> lastname;
    
    cout << "Enter Hours Worked: ";
    cin >> hours;
    
    cout << "Enter Pay Rate: ";
    cin >> payrate;
    
    grosspay = hours * payrate;
    
    // process phase
    cout << "Last Name: " << lastname << endl;
    cout << "Gross Pay: $" << grosspay << endl;
    
    return 0;
    
} // end of main
