#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float get_costpercredit(char districtcode)
{
    if (districtcode == 'I' || districtcode == 'i')
        return 250.0;
    else if (districtcode == 'O' || districtcode == 'o')
        return 550.0;
    else
        return 0.0;
}

float compute_tuition(float credithours, float rate)
{
    return credithours * rate;
}

int main()
{
    string lastname;
    char districtcode;
    float credithours, rate, tuition, totaltuition = 0;

    cout << "Enter Student Last Name (Ctrl + d to stop): ";
    while (cin >> lastname)
    {
        cout << "Enter Credit Hours: ";
        cin >> credithours;
        cout << "Enter District Code (I = In-District, O = Out-of-District): ";
        cin >> districtcode;

        rate = get_costpercredit(districtcode);
        tuition = compute_tuition(credithours, rate);

        totaltuition += tuition;

        cout << fixed << setprecision(2);
        cout << "Student: " << lastname << " | Tuition Owed: $" << tuition << endl;

        cout << "\nEnter Student Last Name (Ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Total Tuition Owed by All Students: $" << totaltuition << endl;

    system("pause");
    return 0;
}
