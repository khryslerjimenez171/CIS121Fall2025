#include <iostream>
#include <string>
using namespace std;
int main()
{
    // define variables
    int n1, n2, sum, product, difference;
    
    // input phase
    cout << "Enter two real numbers: ";
    cin >> n1 >> n2;
    
    sum = n1 + n2;
    product = n1 * n2;
    difference = n1 - n2;
    
    
    // process phase
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    
    return 0;
    
} // end of main
