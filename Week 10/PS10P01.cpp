#include<iostream>
#include<iomanip>
using namespace std;

void fcompOrder(float qty, float price, float& total, float& tax, float& totalorder)
{
    total = qty * price;
    tax = total * 0.07;
    totalorder = total + tax;
}

int main()
{
    float qty, price, total, tax, totalorder;
    float sumtotal = 0, sumtax = 0;

    cout << "Enter Quantity (ctrl + d to stop): ";
    while (cin >> qty)
    {
        cout << "Enter Price: ";
        cin >> price;

        fcompOrder(qty, price, total, tax, totalorder);

        sumtotal += total;
        sumtax += tax;

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << "  Tax: $" << tax << "  Total Order: $" << totalorder << endl;

        cout << "\nEnter Quantity (ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Sum of Totals: $" << sumtotal << endl;
    cout << "Sum of Taxes:  $" << sumtax << endl;

    return 0;
}
