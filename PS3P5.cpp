#include <iostream>
using namespace std;
int main()
{
    //define variables
    float fixedcosts, priceperunit, costperunit, breakevenpoint;
    
    
    // input phase
    cout << "Fixed Costs: $";
    cin >> fixedcosts;
    cout << "Enter Price Per Unit: $";
    cin >> priceperunit;
    cout << "Enter Cost Per Unit: $";
    cin >> costperunit;
    
    breakevenpoint = fixedcosts/(priceperunit - costperunit);
    
    // process phase
    cout << "Break Even Pount: $" << breakevenpoint << endl;
    
    return 0;
    
} // end of main


