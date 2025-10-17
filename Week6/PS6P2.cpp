//#include <iostream>
//using namespace std;
//int main()
//{
//    //define variables
//    int partnumber, quantity;
//    float total;
//    float costperunit = 5.0;
//
//    // input phase
//    cout << "Enter Part Number (10, 99, 55, 70, 50): ";
//    cin >> partnumber;
//    cout << "Enter Quantity: ";
//    cin >> quantity;
//
//   switch (partnumber)
//   {
//       case 10:
//           if (quantity > 1000)
//               costperunit = 1.0;
//           break;
//       case 99:
//           if (quantity > 500)
//               costperunit = 2.0;
//           break;
//       default:
//           costperunit = 5.0;
//   }
//
//    total = quantity * costperunit;
//    
//    // process phase
//    cout << "Part Number: " << partnumber << endl;
//    cout << "Cost Per Unit: $" << costperunit << endl;
//    cout << "Total Cost: $" << total << endl;
//
//    return 0;
//
//} // end of main
