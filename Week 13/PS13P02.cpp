#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    float hours;
    float rate;
    float grossPay;
};

float computeGrossPay(float hours, float rate);

int main() {
    int numEmployees;
    cout << "Enter Number of Employees: ";
    cin >> numEmployees;

    vector<Employee> employees(numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter First Name for Employee #" << i + 1 << ": ";
        cin >> employees[i].firstName;
        cout << "Enter Last Name for Employee #" << i + 1 << ": ";
        cin >> employees[i].lastName;
        cout << "Enter Hours Worked: ";
        cin >> employees[i].hours;
        cout << "Enter Hourly Rate: ";
        cin >> employees[i].rate;

        employees[i].grossPay = computeGrossPay(employees[i].hours, employees[i].rate);
    }

    cout << fixed << setprecision(2);
    cout << "\nEmployee Payroll Summary:\n";
    cout << endl;
    cout << "First Name\tLast Name\tGross Pay\n";
    for (const auto& emp : employees) {
        cout << emp.firstName << "\t\t" << emp.lastName << "\t\t$" << emp.grossPay << endl;
    }

    return 0;
}

float computeGrossPay(float hours, float rate) {
    if (hours > 40)
        return (40 * rate) + ((hours - 40) * rate * 1.5);
    else
        return hours * rate;
}
