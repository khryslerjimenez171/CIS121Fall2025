#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_average(float hits, float atbats)
{
    return atbats / hits;
}

int main()
{
    string lastname;
    float hits, atbats, average;
    int count = 0;

    cout << "Enter Player Last Name (Ctrl + d to stop): ";
    while (cin >> lastname)
    {
        cout << "Enter Number of Hits: ";
        cin >> hits;
        cout << "Enter Number of At-Bats: ";
        cin >> atbats;

        average = compute_average(hits, atbats);
        count++;

        cout << fixed << setprecision(3);
        cout << "Player: " << lastname << " | Batting Average: " << average << endl;

        cout << "Enter Player Last Name (Ctrl + d to stop): ";
    }

    cout << endl;
    cout << "Number of Players Entered: " << count << endl;

    system("pause");
    return 0;
}
