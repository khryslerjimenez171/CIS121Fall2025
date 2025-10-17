//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    // define variables
//    float quantity;
//    float price, extended, discount, discountedprice, total;
//    
//    // input phase
//    total = 0.0f;
//
//    cout << "Enter Quantity (ctl + d to stop): ";
//    cin >> quantity;
//
//    while (!cin.eof())
//    {
//        cout << "Enter Price: ";
//        cin >> price;
//        
//        // process phase
//        extended = quantity * price;
//        if (quantity > 1000)
//            discount = extended * 0.10f;
//        else
//            discount = 0.0f;
//
//        discountedprice = extended - discount;
//        total += discountedprice;
//
//        // output phase
//        cout << fixed << setprecision(2);
//        cout << "Quantity: " << quantity << endl;
//        cout << "Price: $" << price << endl;
//        cout << "Extended Price: $" << extended << endl;
//        cout << "Discount: $" << discount << endl;
//        cout << "Discounted Price: $" << discountedprice << endl;
//
//        cout << "Enter Quantity (ctl + d to stop): ";
//        cin >> quantity;
//    }
//
//    cout << endl;
//    cout << "Total of Discounted Prices: $" << total << endl;
//
//    return 0;
//} // end of main
