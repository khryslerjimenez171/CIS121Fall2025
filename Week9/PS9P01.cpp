#include<iostream>
#include<iomanip>
using namespace std;

float compute_total(float quantity, float price)
{
    return quantity * price;
}

float compute_discounttotal(float total)
{
    float discountrate, discount, discounttotal;

    if (total > 10000.0)
        discountrate = 0.10;
    else
        discountrate = 0.05;

    discount = total * discountrate;
    discounttotal = total - discount;

    return discounttotal;
}

int main()
{
    float quantity, price, total, discounttotal;
    float sumtotal = 0, sumdiscounttotal = 0;

    cout << "Enter Quantity (Ctrl + d to stop): ";
    while (cin >> quantity)
    {
        cout << "Enter Price: $";
        cin >> price;

        total = compute_total(quantity, price);
        discounttotal = compute_discounttotal(total);

        sumtotal += total;
        sumdiscounttotal += discounttotal;

        cout << fixed << setprecision(2);
        cout << "Total: $" << total << endl;
        cout << "Discounted Total: $" << discounttotal << endl;

        cout << "Enter Quantity (Ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Sum of Totals: $" << sumtotal << endl;
    cout << "Sum of Discount Totals: $" << sumdiscounttotal << endl;

    system("pause");
    return 0;
}
