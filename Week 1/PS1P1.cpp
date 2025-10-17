#include <iostream>
#include <string>
using namespace std;
int main()
{
    // define variable
    string firstname, lastname;
    
    // input phase
    cout << "Enter firstname: ";
    cin >> firstname;
    cout << "Enter lastname: ";
    cin >> lastname;
    
    // process phase
    cout << "Hello " << lastname << endl;
    
    return 0;
    
} // end of main
