//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//float compute_pay(char jobcode, float hours)
//{
//    float rate, pay;
//
//    if (jobcode == 'L' || jobcode == 'l')
//        rate = 25.0;
//    else if (jobcode == 'A' || jobcode == 'a')
//        rate = 30.0;
//    else if (jobcode == 'J' || jobcode == 'j')
//        rate = 50.0;
//    else
//        rate = 0.0;
//
//    if (hours > 40)
//        pay = (40 * rate) + ((hours - 40) * rate * 1.5);
//    else
//        pay = hours * rate;
//
//    return pay;
//}
//
//int main()
//{
//    string lastname;
//    char jobcode;
//    float hours, pay, totalpay = 0, count = 0;
//
//    cout << "Enter Last Name (ctl + d to stop): ";
//    cin >> lastname;
//
//    while (!cin.eof())
//    {
//        cout << "Enter Job Code (L, A, J) and hours worked: ";
//        cin >> jobcode;
//        cout << "Enter Hours Worked: ";
//        cin >> hours;
//
//        pay = compute_pay(jobcode, hours);
//
//        totalpay = totalpay + pay;
//        count = count + 1;
//
//        cout << setprecision(2) << fixed;
//        cout << "Employee: " << lastname << endl;
//        cout << "Job Code: " << jobcode << endl;
//        cout << "Pay: $" << pay << endl;
//
//        cout << "Enter Last Name (ctl + d to stop): ";
//        cin >> lastname;
//    }
//
//    cout << endl << "Total Pay: $" << setw(8) << totalpay << endl;
//    if (count > 0)
//        cout << "Average Pay: $" << setw(8) << (totalpay / count) << endl;
//    cout << "Number of Employees: " << setw(8) << count << endl;
//
//    system("pause");
//    return 0;
//}
//
//
