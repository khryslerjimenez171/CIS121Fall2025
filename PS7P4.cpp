#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // define variables
    string lastname;
    char jobcode;
    float hours, rate, pay, totalPay;
    int count;

    // input phase
    totalPay = 0.0f;
    count = 0;

    cout << "Enter Last Name (ctl + d to stop): ";
    cin >> lastname;

    while (!cin.eof())
    {
        cout << "Enter Job Code (L/A/J): ";
        cin >> jobcode;
        cout << "Enter Hours Worked: ";
        cin >> hours;
        
        count++;

        if (jobcode == 'L') rate = 25.0f;
        else if (jobcode == 'A') rate = 30.0f;
        else if (jobcode == 'J') rate = 50.0f;
        else rate = 0.0f;

        if (hours > 40)
            pay = (40 * rate) + ((hours - 40) * rate * 1.5f);
        else
            pay = hours * rate;

        totalPay += pay;

        //output phase
        cout << fixed << setprecision(2);
        cout << "Employee: " << lastname << endl;
        cout << "Job Code: " << jobcode << endl;
        cout << "Hours Worked: " << hours << endl;
        cout << "Pay: $" << pay << endl;

        cout << "Enter Last Name (ctl + d to stop): ";
        cin >> lastname;
    }

    cout << endl;
    if (count > 0)
        cout << "Average Pay: $" << (totalPay / count) << endl;
    cout << "Number of Employees: " << count << endl;

    return 0;
} // end of main
