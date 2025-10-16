#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_mpg(float miles, float gallons)
{
    return miles / gallons;
}

float compute_gascost(float gallons)
{
    const float costpergallon = 3.50;
    return gallons * costpergallon;
}

int main()
{
    string city;
    float miles, gallons, mpg, cost;
    float totalcost = 0;

    cout << "Enter Destination City (Ctrl + d to stop): ";
    while (cin >> city)
    {
        cout << "Enter Miles Traveled: ";
        cin >> miles;
        cout << "Enter Gallons Used: ";
        cin >> gallons;

        mpg = compute_mpg(miles, gallons);
        cost = compute_gascost(gallons);

        totalcost += cost;

        cout << fixed << setprecision(2);
        cout << city << " | MPG: " << mpg << " | Gas Cost: $" << cost << endl;

        cout << "Enter Destination City (Ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Total Gas Cost for All Trips: $" << totalcost << endl;

    system("pause");
    return 0;
}
