#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void compute_auto_values(float msrp, float saleprice, float &savings, float &salestax);

int main()
{
    string make, model;
    float msrp, saleprice;
    float savings, salestax;
    float sumofsavings = 0.0f;
    ifstream infile;

    infile.open("Auto.txt");

    while (!infile.eof())
    {
        infile >> make >> model >> msrp >> saleprice;

        compute_auto_values(msrp, saleprice, savings, salestax);

        sumofsavings = sumofsavings + savings;

        cout << setprecision(2) << fixed;
        
        cout << "Make:         " << make << endl;
        cout << "Model:        " << model << endl;
        cout << "MSRP:        $" << setw(10) << msrp << endl;
        cout << "Sales Price: $" << setw(10) << saleprice << endl;
        cout << "Savings:     $" << setw(10) << savings << endl;
        cout << "Sales Tax:   $" << setw(10) << salestax << endl;
        cout << endl;
    }

    infile.close();

    cout << endl;
    cout << "Total Savings on all autos: $" << setw(10) << sumofsavings << endl;

    return 0;
}

void compute_auto_values(float msrp, float saleprice, float &savings, float &salestax)
{
    savings = msrp - saleprice;
    salestax = saleprice * 0.07f;
}
