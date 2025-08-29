#include <iostream>
#include <string>
using namespace std;
int main()
{
    // define variables
    string lastname;
    int creditstaken;
    float tuition;
    float ratepercredit = 250;
    float labfee = 100;
    
    // input phase
    cout << "Enter Last Name: ";
    cin >> lastname;
    cout << "Enter Credits Taken: ";
    cin >> creditstaken;
    
    tuition = creditstaken * ratepercredit + labfee;
    
    // output phase
    cout << "Last Name: " << lastname << endl;
    cout << "Total Tuition: $" << tuition << endl;
     
    return 0;
    
} // end of main
