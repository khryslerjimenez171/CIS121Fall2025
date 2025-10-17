#include <iostream>
using namespace std;
int main()
{
    //define variables
    float total, tip, totalwithtip;
    
    // input phase
    cout << "Enter Total: $";
    cin >> total;

    tip = total * 0.15;
    totalwithtip = total + tip;
    
    // process phase
    cout << "Tip: $" << tip << endl;
    cout << "Total with Tip: $" << totalwithtip << endl;
    
    return 0;
    
} // end of main



