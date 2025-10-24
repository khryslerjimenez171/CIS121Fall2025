#include<iostream>
#include<iomanip>
using namespace std;

// Function computes cost per widget, extended price, sales tax, and total order
void fcompwidgets(int numwidgets, float& costperwidget, float& extendedprice, float& tax, float& totalorder)
{
    if (numwidgets >= 10000)
        costperwidget = 4.0;
    else if (numwidgets >= 5000)
        costperwidget = 5.0;
    else
        costperwidget = 10.0;

    extendedprice = numwidgets * costperwidget;
    tax = extendedprice * 0.07;
    totalorder = extendedprice + tax;
}

int main()
{
    int widgets;
    float costperwidget, extendedprice, tax, totalorder, sumtotal = 0;

    cout << "Enter Number of Widgets (ctrl + d to stop): ";
    while (cin >> widgets)
    {
        fcompwidgets(widgets, costperwidget, extendedprice, tax, totalorder);
        sumtotal += totalorder;

        cout << fixed << setprecision(2);
        cout << "Widgets: " << widgets << "  Cost/Widget: $" << costperwidget
             << "  Extended: $" << extendedprice << "  Tax: $" << tax
             << "  Total: $" << totalorder << endl;

        cout << "\nEnter Number of Widgets (ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Sum of All Total Orders: $" << sumtotal << endl;

    return 0;
}
