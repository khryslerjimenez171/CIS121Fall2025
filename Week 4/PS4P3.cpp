#include <iostream>
using namespace std;
int main()
{
    //define variables
    int numberofbooks;
    float costperbook, ordertotal, shipping;

    
    // input phase
    cout << "Enter Number of Books: ";
    cin >> numberofbooks;
    cout << "Enter Cost Per Book: $";
    cin >> costperbook;
    
    ordertotal = numberofbooks * costperbook;
    
    if (ordertotal > 50.00)
    {
    shipping = 0.00;
    }
    else
    {
        shipping = 25.00;
    }
    
    // process phase
    cout << "Order Total: $" << ordertotal << endl;
    cout << "Shipping Charge: $" << shipping << endl;
    
    return 0;
    
} // end of main

