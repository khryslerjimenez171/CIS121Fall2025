#include <iostream>
using namespace std;
int main()
{
    //define variables
    float annualsalary, taxrate, taxamount;

    // input phase
    cout << "Enter Annual Salary: $";
    cin >> annualsalary;

    if (annualsalary > 100000)
    {
        taxrate = 0.40;
    }
    else if (annualsalary >= 50000)
    {
        taxrate = 0.35;
    }
    else
    {
        taxrate = 0.25;
        return 1;
    }

    taxamount = annualsalary * taxrate;
    
    // process phase
    cout << "Annual Salary: $" << annualsalary << endl;
    cout << "Tax Rate: " << (taxrate * 100) << "%" << endl;
    cout << "Tax Amount: $" << taxamount << endl;

    return 0;

} // end of main
