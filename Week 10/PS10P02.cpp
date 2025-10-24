#include<iostream>
#include<iomanip>
using namespace std;

// Function computes postage, area charge, and weight charge
void fcompPostage(float weight, int zipcode, float& weightcharge, float& areacharge, float& postage)
{
    // Determine weight charge per ounce
    float weightrate;
    if (weight > 100)
        weightrate = 0.02;
    else if (weight > 50)
        weightrate = 0.03;
    else
        weightrate = 0.05;

    weightcharge = weight * weightrate;

    // Determine area charge
    if (zipcode == 60171)
        areacharge = 2.00;
    else if (zipcode == 60172)
        areacharge = 2.50;
    else if (zipcode == 60635)
        areacharge = 3.00;
    else
        areacharge = 5.00;

    // Compute total postage
    postage = weightcharge + areacharge;
}

int main()
{
    float weight, weightcharge, areacharge, postage;
    int zipcode, count = 0;

    cout << "Enter Weight (ctrl + d to stop): ";
    while (cin >> weight)
    {
        cout << "Enter Zip Code: ";
        cin >> zipcode;

        fcompPostage(weight, zipcode, weightcharge, areacharge, postage);
        count++;

        cout << fixed << setprecision(2);
        cout << "Weight Charge: $" << weightcharge << "  Area Charge: $" << areacharge
             << "  Postage: $" << postage << endl;

        cout << "\nEnter weight (ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Number of Packages Entered: " << count << endl;

    return 0;
}
