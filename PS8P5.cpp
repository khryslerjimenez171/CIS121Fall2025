#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_labfee(string department, int coursecode)
{
    float labfee;
    if (department == "CIS" && coursecode == 101)
        labfee = 50.00f;
    else if (department == "CIS" && coursecode == 121)
        labfee = 100.00f;
    else if (department == "MAT" && coursecode == 111)
        labfee = 25.00f;
    else if (department == "MAT" && coursecode == 112)
        labfee = 35.00f;
    else if (department == "ENG" && coursecode == 100)
        labfee = 55.00f;
    else
        labfee = 50.00f;
    return labfee;
}

int main()
{
    string department;
    int coursecode;
    float labfee, totalfee = 0.0f, count = 0;

    cout << "Enter Department (CIS, MAT, ENG, All Others) (ctl + d to stop): ";
    cin >> department;
    cout << "Enter Course Code (101, 121, 111, 112, 100, All Others): ";
    cin >> coursecode;

    while (!cin.eof())
    {
        labfee = compute_labfee(department, coursecode);
        totalfee = totalfee + labfee;
        count = count + 1;

        cout << setprecision(2) << fixed;
        cout << "Department: " << department << endl;
        cout << "Course Code: " << coursecode << endl;
        cout << "Lab Fee: $" << labfee << endl;

        cout << "Enter Department (CIS, MAT, ENG, All Others) (ctl + d to stop): ";
        cin >> department;
        cout << "Enter Course Code (101, 121, 111, 112, 100, All Others): ";
        cin >> coursecode;
    }

    cout << endl << "Total Lab Fees: $" << setw(8) << totalfee << endl;
    if (count > 0)
        cout << "Average Lab Fee: $" << setw(8) << (totalfee / count) << endl;
    cout << "Number of Courses: " << setw(8) << count << endl;

    system("pause");
    return 0;
}

