#include <iostream>
using namespace std;
int main()
{
    //define variables
    float currentstockprice, quantityofstock, currentvalueofstock;
    
    // input phase
    cout << "Enter Current Stock Price: $";
    cin >> currentstockprice;
    cout << "Enter Quantity of Stock: ";
    cin >> quantityofstock;

    currentvalueofstock = currentstockprice * quantityofstock;
    
    // process phase
    cout << "Current Value of Stock: $" << currentvalueofstock << endl;
    
    return 0;
    
} // end of main


