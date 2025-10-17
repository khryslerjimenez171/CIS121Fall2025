#include <iostream>
using namespace std;
int main()
{
    //define variables
    string lastname;
    int dependents;
    float grossincome, adjustedincome, taxrate, tax;

    // input phase
    cout << "Enter Last Name: ";
    cin >> lastname;
    cout << "Enter Number of Dependents: ";
    cin >> dependents;
    cout << "Enter Gross Income: ";
    cin >> grossincome;

    adjustedincome = grossincome - (dependents * 12000);
    
    if (adjustedincome > 50000)
    {
        taxrate = 0.20;
    }
    else
    {
        taxrate = 0.10;
    }

    tax = adjustedincome * taxrate;
    
    if (tax < 0)
    {
        tax = 100.00;
    }
    
    // process phase
    cout << "Last Name: " << lastname << endl;
    cout << "Gross Income: $" << grossincome << endl;
    cout << "Depedents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedincome << endl;
    cout << "Income Tax: $" << tax << endl;

    return 0;

} // end of main
