//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//float compute_tuition(int credits)
//{
//    float tuition;
//    tuition = credits * 250.0;
//    return tuition;
//}
//
//int main()
//{
//    string lastname;
//    int credits;
//    float tuition, totaltuition = 0, count = 0;
//
//    cout << "Enter Student Last Name (ctl + d to stop): ";
//    cin >> lastname;
//
//    while (!cin.eof())
//    {
//        cout << "Enter Number of Credits Taken: ";
//        cin >> credits;
//
//        tuition = compute_tuition(credits);
//
//        totaltuition = totaltuition + tuition;
//        count = count + 1;
//
//        cout << setprecision(2) << fixed;
//        cout << "Student: " << lastname << endl;
//        cout << "Credits: " << credits << endl;
//        cout << "Tuition: $" << tuition << endl;
//
//        cout << "Enter Student Last Name (ctl + d to stop): ";
//        cin >> lastname;
//    }
//
//    cout << endl << "Total Tuition: $" << setw(8) << totaltuition << endl;
//    cout << "Number of Students: " << setw(8) << count << endl;
//
//    system("pause");
//    return 0;
//}
//
