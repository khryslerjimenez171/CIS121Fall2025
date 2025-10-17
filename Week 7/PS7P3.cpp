#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // define variables
    string city;
    float miles, gallons;
    float milespergallon, totalmiles;
    int count;

    // input phase
    totalmiles = 0.0f;
    count = 0;

    cout << "Enter Destination City (ctl + d to stop): ";
    cin >> city;

    while (!cin.eof())
    {
        cout << "Enter Miles Traveled: ";
        cin >> miles;
        cout << "Enter Gallons Used: ";
        cin >> gallons;
        
        count++;
        totalmiles += miles;
        milespergallon = miles / gallons;

        // output phase
        cout << fixed << setprecision(2);
        cout << "City: " << city << endl;
        cout << "Miles per Gallon: " << milespergallon << endl;

        cout << "Enter Destination City (ctl + d to stop): ";
        cin >> city;
    }

    cout << endl;
    cout << "Total Miles Travelled: " << totalmiles << endl;
    cout << "Number of Trips: " << count << endl;

    return 0;
} // end of main
