#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

// Function computes 5-year and 10-year investment values
void fcompinvestment(float amount, float rate5, float rate10, float& amount5, float& amount10)
{
    amount5 = amount * pow((1 + rate5), 5);
    amount10 = amount * pow((1 + rate10), 10);
}

int main()
{
    float amount, rate5, rate10, amount5, amount10;

    cout << "Enter Investment Amount (ctrl + d to stop): ";
    while (cin >> amount)
    {
        cout << "Enter 5-year Rate (in decimal): ";
        cin >> rate5;
        cout << "Enter 10-year Rate (in decimal): ";
        cin >> rate10;

        fcompinvestment(amount, rate5, rate10, amount5, amount10);

        cout << fixed << setprecision(2);
        cout << "Investment: $" << amount << "  5-Year Amount: $" << amount5 << "  10-Year Amount: $" << amount10 << endl;

        cout << "\nEnter Investment Amount (ctrl + d to stop): ";
    }

    return 0;
}
