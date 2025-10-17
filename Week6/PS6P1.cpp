//#include <iostream>
//using namespace std;
//int main()
//{
//    //define variables
//    int quantity;
//    char status;
//    float price = 30.0;
//    float extendedprice, tax, total;
//
//    // input phase
//    cout << "Enter Quantity of Widgets: ";
//    cin >> quantity;
//    cout << "Enter Customer Status (A, B, C, D): ";
//    cin >> status;
//
//   switch (status)
//   {
//       case 'A':
//           if (quantity > 10000)
//               price = 10.0;
//           break;
//       case 'B':
//           if (quantity > 10000)
//               price = 12.0;
//           break;
//       case 'C':
//           if (quantity >= 5000 && quantity <= 10000)
//               price = 20.0;
//           break;
//       case 'D':
//           if (quantity >= 5000 && quantity <= 10000)
//               price = 22.0;
//           break;
//       default:
//           price = 30.0;
//   }
//
//    extendedprice = quantity * price;
//    tax = extendedprice * 0.07;
//    total = extendedprice + tax;
//    
//    // process phase
//    cout << "Extended Price: $" << extendedprice << endl;
//    cout << "Tax: $" << tax << endl;
//    cout << "Total Price: $" << total << endl;
//
//    return 0;
//
//} // end of main
