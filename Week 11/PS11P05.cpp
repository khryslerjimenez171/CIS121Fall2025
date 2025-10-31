#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Prototype
void compute_tuition(char code, float credits, float &tuition, float &coursefee);

int main()
{
    string lname;
    char code;
    float credits;
    float tuition, coursefee;
    float sumtuition = 0.0f;
    int count = 0;
    ifstream infile;

    infile.open("Student.txt");
    
    while (!infile.eof())
    {
        infile >> lname >> code >> credits;

        compute_tuition(code, credits, tuition, coursefee);
        sumtuition = sumtuition + tuition;
        count = count + 1;

        float costpercredit = (code == 'I' || code == 'i') ? 250.0f : 500.0f;

        cout << setprecision(2) << fixed;
        
        cout << "Student:          " << lname << endl;
        cout << "Code:             " << code << endl;
        cout << "Cost per Credit: $" << setw(8) << costpercredit << endl;
        cout << "Credits:          " << setw(8) << credits << endl;
        cout << "Tuition Owed:    $" << setw(10) << tuition << endl;
        cout << "Course Fees:     $" << setw(10) << coursefee << endl;
        cout << endl;
    }

    infile.close();

    cout << endl;
    cout << "Total Tuition Owed: $" << setw(10) << sumtuition << endl;
    cout << "Number of Students: " << setw(6) << count << endl;
    if (count > 0)
        cout << "Average Tuition per Student: $" << setw(10) << (sumtuition / count) << endl;

    return 0;
}

void compute_tuition(char code, float credits, float &tuition, float &coursefee)
{
    float costpercredit;
    if (code == 'I' || code == 'i')
        costpercredit = 250.0f;
    else
        costpercredit = 500.0f;

    tuition = credits * costpercredit;
    coursefee = tuition * 0.10f;
}
