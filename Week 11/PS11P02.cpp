#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

float compute_extended(float quantity, float price);

int main()
{
    string item;
    float qty, price;
    float extprice;
    float sumext = 0.0f;
    float tax, totalreceipt;
    ifstream infile;

    infile.open("Grocery.txt");

    while (!infile.eof())
    {
        infile >> item >> qty >> price;

        extprice = compute_extended(qty, price);
        sumext = sumext + extprice;

        cout << setprecision(2) << fixed;
        
        cout << "Item:            " << item << endl;
        cout << "Quantity:        " << setw(6) << qty << endl;
        cout << "Cost/Item:      $" << setw(8) << price << endl;
        cout << "Extended Price: $" << setw(8) << extprice << endl;
        cout << endl;
    }

    infile.close();

    tax = sumext * 0.07f;
    totalreceipt = sumext + tax;

    cout << endl;
    cout << "Subtotal: $" << setw(10) << sumext << endl;
    cout << "Tax (7%): $" << setw(10) << tax << endl;
    cout << "Total Receipt: $" << setw(10) << totalreceipt << endl;

    return 0;
}

float compute_extended(float quantity, float price)
{
    float extended;
    extended = quantity * price;
    return extended;
}
