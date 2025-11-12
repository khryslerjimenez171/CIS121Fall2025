#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Global structure definition
struct Student {
    string firstName;
    string lastName;
    char districtCode;
    int creditHours;
    double tuitionBalance;
};

double computeTuition(char code, int credits);
void displayStudents(const vector<Student>& students);

int main() {
    vector<Student> students;
    Student temp;
    
    cout << "Enter Student Information (ctl + d to stop)\n";

    while (true) {
        cout << "\nEnter First Name: ";
        if (!(cin >> temp.firstName)) break;

        cout << "Enter Last Name: ";
        cin >> temp.lastName;

        cout << "Enter District Code (I/O): ";
        cin >> temp.districtCode;

        cout << "Enter Credit Hours: ";
        cin >> temp.creditHours;

        temp.tuitionBalance = computeTuition(temp.districtCode, temp.creditHours);

        students.push_back(temp);
    }

    displayStudents(students);

    cout << "\nTotal Number of Students: " << students.size() << endl;
    return 0;
}

double computeTuition(char code, int credits) {
    double rate;
    if (toupper(code) == 'I')
        rate = 250.00;
    else
        rate = 500.00;
    return credits * rate;
}

void displayStudents(const vector<Student>& students) {
    cout << fixed << setprecision(2);
    cout << "\nStudent Tuition Summary:\n";
    cout << endl;
    cout << "First Name\tLast Name\tCode\tCredits\tTuition\n";
    for (const auto& stu : students) {
        cout << stu.firstName << "\t\t"
             << stu.lastName << "\t\t"
             << stu.districtCode << "\t"
             << stu.creditHours << "\t$"
             << stu.tuitionBalance << endl;
    }
}
