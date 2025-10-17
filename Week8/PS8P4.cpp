//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//float comp_unitprice(char productcode)
//{
//    float unitprice;
//    if (productcode == 'W' || productcode == 'w')
//        unitprice = 10.00f;
//    else if (productcode == 'C' || productcode == 'c')
//        unitprice = 15.00f;
//    else if (productcode == 'G' || productcode == 'g')
//        unitprice = 20.00f;
//    else
//        unitprice = 0.0;
//    return unitprice;
//}
//
//float comp_shipping(char productcode)
//{
//    float shipping;
//    if (productcode == 'W' || productcode == 'w')
//        shipping = 2.00f;
//    else if (productcode == 'C' || productcode == 'c')
//        shipping = 5.00f;
//    else if (productcode == 'G' || productcode == 'g')
//        shipping = 7.00f;
//    else
//        shipping = 0.0;
//    return shipping;
//}
//
//int main()
//{
//    float grandtotal = 0.0f, extended;
//    int qty;
//    char productcode;
//    float unitprice, shipping;
//
//    cout << "Enter product code (W, C, G) (ctl + d to stop): ";
//    cin >> productcode;
//    cout << "Enter Quantity: ";
//    cin >> qty;
//
//    while (!cin.eof())
//    {
//        unitprice = comp_unitprice(productcode);
//        shipping = comp_shipping(productcode);
//        extended = qty * unitprice + shipping;
//        grandtotal = grandtotal + extended;
//
//        cout << setprecision(2) << fixed;
//        cout << "Product Code: " << productcode << endl;
//        cout << "Unit Price: $" << unitprice << endl;
//        cout << "Shipping: $" << shipping << endl;
//        cout << "Extended Price: $" << extended << endl;
//
//        cout << "Enter product code (W, C, G) (ctl + d to stop): ";
//        cin >> productcode;
//        cout << "Enter Quantity: ";
//        cin >> qty;
//    }
//
//    cout << endl;
//    cout << "Total: $" << grandtotal << endl;
//
//    system("pause");
//    return 0;
//}
//
//
