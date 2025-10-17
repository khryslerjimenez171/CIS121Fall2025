//#include <iostream>
//using namespace std;
//int main()
//{
//    //define variables
//    char jobcode;
//    float hours, rate = 0.0, grosspay;
//
//    // input phase
//    cout << "Enter Job Code (L, J, A): ";
//    cin >> jobcode;
//    cout << "Enter Hours Worked: ";
//    cin >> hours;
//
//    switch (jobcode)
//    {
//        case 'L':
//            if (hours > 40)
//                rate = 50.0;
//            else
//                rate = 40.0;
//            break;
//        case 'J':
//            if (hours > 60)
//                rate = 100.0;
//            else
//                rate = 75.0;
//            break;
//        case 'A':
//            if (hours > 40)
//                rate = 25.0;
//            else
//                rate = 20.0;
//    }
//    
//    grosspay = hours * rate;
//    
//    // process phase
//    cout << "Gross Salary: $" << grosspay << endl;
//
//    return 0;
//
//} // end of main
