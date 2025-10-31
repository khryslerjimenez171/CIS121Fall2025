#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

float compute_biweekly(float annualsalary);

int main()
{
    ifstream infile;
    string lastname;
    float annualsalary, biweekly;
    float totalsalary = 0.0;
    int count = 0;

    infile.open("Empl.txt");

    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Last Name" << setw(15) << "Annual Salary"
         << setw(15) << "Bi-Weekly" << endl;

    cout << setprecision(2) << fixed;
    
    while (infile >> lastname >> annualsalary)
    {
        biweekly = compute_biweekly(annualsalary);
        totalsalary += annualsalary;
        count++;

        cout << left << setw(12) << lastname << setw(15) << annualsalary
             << setw(15) << biweekly << endl;
    }

    cout << "Total Annual Salary: $" << totalsalary << endl;
    cout << "Number of Employees:    " << count << endl;
    cout << "Average Annual Salary: $" << (totalsalary / count) << endl;

    infile.close();
    return 0;
}

float compute_biweekly(float annualsalary)
{
    return annualsalary / 26.0;
}
