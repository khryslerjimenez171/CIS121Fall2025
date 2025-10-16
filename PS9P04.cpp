#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float get_rate(char jobcode)
{
    if (jobcode == 'L' || jobcode == 'l')
        return 25.0;
    else if (jobcode == 'A' || jobcode == 'a')
        return 30.0;
    else if (jobcode == 'J' || jobcode == 'j')
        return 50.0;
    else
        return 0.0;
}

float compute_gross(float hours, float rate)
{
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}

int main()
{
    string lastname;
    char jobcode;
    float hours, rate, gross, totalgross = 0;

    cout << "Enter Employee Last Name (Ctrl + d to stop): ";
    while (cin >> lastname)
    {
        cout << "Enter Job Code (L, A, J): ";
        cin >> jobcode;
        cout << "Enter Hours Worked: ";
        cin >> hours;

        rate = get_rate(jobcode);
        gross = compute_gross(hours, rate);
        totalgross += gross;

        cout << fixed << setprecision(2);
        cout << "Employee: " << lastname << " | Gross Pay: $" << gross << endl;

        cout << "Enter Employee Last Name (Ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Total Gross Pay: $" << totalgross << endl;

    system("pause");
    return 0;
}
