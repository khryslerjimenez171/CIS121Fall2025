#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Function computes tuition and tuition owed
void fcompTuition(float credithours, float financialaid, float& tuition, float& tuitionowed)
{
    tuition = credithours * 250.0;
    tuitionowed = tuition - financialaid;
}

int main()
{
    string lastname;
    float credithours, financialaid, tuition, tuitionowed;
    float totalowed = 0;
    int count = 0;

    cout << "Enter Student Last Name (ctrl + d to stop): ";
    while (cin >> lastname)
    {
        cout << "Enter Credit Hours: ";
        cin >> credithours;
        cout << "Enter Financial Aid: ";
        cin >> financialaid;

        fcompTuition(credithours, financialaid, tuition, tuitionowed);
        totalowed += tuitionowed;
        count++;

        cout << fixed << setprecision(2);
        cout << "Student: " << lastname << "  Tuition: $" << tuition << "  Owed: $" << tuitionowed << endl;

        cout << "\nEnter Student Last Name (ctrl + d to stop): ";
    }

    cout << endl;
    if (count > 0)
        cout << "Average Owed: $" << (totalowed / count) << endl;
    cout << "Total Tuition Owed by All Students: $" << totalowed << endl;
    cout << "Number of Students: " << count << endl;

    return 0;
}
