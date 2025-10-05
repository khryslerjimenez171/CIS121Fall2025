#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // define variables
    string lastname;
    char districtcode;
    int credithours, count, totalcredits;
    float tuition, totaltuition;

    // input phase
    totaltuition = 0.0;
    totalcredits = 0;
    count = 0;

    cout << "Enter Student Last Name (ctl + d to stop): ";
    cin >> lastname;

    while (!cin.eof())
    {
        cout << "Enter Credit Hours: ";
        cin >> credithours;
        cout << "Enter District Code (I/O): ";
        cin >> districtcode;
        
        count++;
        totalcredits += credithours;

        if (districtcode == 'I')
            tuition = credithours * 250.0f;
        else
            tuition = credithours * 550.0;

        totaltuition += tuition;

        //process phase
        cout << fixed << setprecision(2);
        cout << "Student: " << lastname << endl;
        cout << "Tuition Owed: $" << tuition << endl;

        cout << "Enter Student Last Name (ctl + d to stop): ";
        cin >> lastname;
    }

    cout << endl;
    cout << "Total Tuition Owed: $" << totaltuition << endl;
    cout << "Total Credit Hours: " << totalcredits << endl;
    cout << "Number of Students: " << count << endl;

    return 0;
} // end of main
