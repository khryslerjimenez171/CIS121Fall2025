#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Prototype
float compute_mpg(float miles, float gallons);

int main()
{
    float gallons, miles, mpg;
    float totalmiles = 0.0f, totalgallons = 0.0f;
    ifstream infile;

    infile.open("Trips.txt");

    cout << setprecision(2) << fixed;

    while (!infile.eof())
    {
        infile >> gallons >> miles;
        if (infile.eof()) break;

        mpg = compute_mpg(miles, gallons);
        totalmiles = totalmiles + miles;
        totalgallons = totalgallons + gallons;

        cout << "Miles: " << setw(8) << miles << "  Gallons: " << setw(8) << gallons
             << "  MPG: " << setw(8) << mpg << endl;
    }

    infile.close();

    cout << endl;
    cout << "Total Miles:   " << setw(10) << totalmiles << endl;
    cout << "Total Gallons: " << setw(10) << totalgallons << endl;

    return 0;
}

float compute_mpg(float miles, float gallons)
{
    float mpg;
    mpg = miles / gallons;
    return mpg;
}
