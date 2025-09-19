#include <iostream>
using namespace std;
int main()
{
    //define variables
    float weight, rate, total;

    // input phase
    cout << "Enter Weight of Metal (lbs): ";
    cin >> weight;

    if (weight > 100)
    {
        rate = 0.50;
    }
    else if (weight >= 30)
    {
        rate = 0.25;
    }
    else if (weight >= 20)
    {
        rate = 0.20;
    }
    else
    {
        rate = 0.10;
        return 1;
    }

    total = weight * rate;
    
    // process phase
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate Per Pount: $" << rate << endl;
    cout << "Total: $" << total << endl;

    return 0;

} // end of main
