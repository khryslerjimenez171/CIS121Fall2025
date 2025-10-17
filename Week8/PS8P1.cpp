//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//float compute_mpg(float miles, float gallons)
//{
//    float mpg;
//    mpg = miles / gallons;
//    return mpg;
//}
//
//int main()
//{
//    float miles, mpg, gallons;
//    string city;
//    float totalmiles = 0, trips = 0;
//
//    cout << "Enter Destination City (ctl + d to stop): ";
//    cin >> city;
//
//    while (!cin.eof())
//    {
//        cout << "Enter Miles Travelled: ";
//        cin >> miles;
//        cout << "Enter Gallons Used: ";
//        cin >> gallons;
//
//        mpg = compute_mpg(miles, gallons);
//
//        totalmiles = totalmiles + miles;
//        trips = trips + 1;
//
//        cout << setprecision(2) << fixed;
//        cout << city << " miles per gallon " << mpg << endl;
//
//        cout << "Enter Destination City (ctl + d to stop): ";
//        cin >> city;
//    }
//
//    cout << endl << "Total Miles: " << setw(8) << totalmiles << endl;
//    cout << "Number of Trips: " << setw(8) << trips << endl;
//
//    system("pause");
//    return 0;
//}
//
