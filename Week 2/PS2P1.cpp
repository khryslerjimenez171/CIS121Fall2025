#include <iostream>
using namespace std;
int main()
{
    //define variables
    int quantity;
    float unitprice, extendedprice;
    
    // input phase
    cout << "Enter Quantity: ";
    cin >> quantity;
    cout << "Enter Unit Price: $";
    cin >> unitprice;
    
    extendedprice = quantity * unitprice;
    
    // process phase
    cout << "The Extended Price is: $" << extendedprice << endl;
    
    return 0;
    
} // end of main

