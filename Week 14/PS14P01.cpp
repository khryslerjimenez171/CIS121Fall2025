#include <iostream>
#include <string>
#include "Member.h"
using namespace std;

int main()
{
    membership member;

    string fname, lname, type;
    int age;

    while (true)
    {
        cout << "\nEnter First Name (ctl + d to stop): ";
        if (!(cin >> fname)) break;

        cout << "Enter Last Name: ";
        cin >> lname;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Membership Type (Gold/Silver/Bronze): ";
        cin >> type;

        member.member_first_name(fname);
        member.member_last_name(lname);
        member.member_age(age);
        member.member_type(type);

        // Display
        cout << endl;
        cout << member.member_first_name() << endl;
        cout << member.member_last_name() << endl;
        cout << member.member_age() << endl;
        cout << member.member_type() << endl;
        cout << member.membership_cost() << endl;
    }

    cout << "\nGoodbye.\n";
    return 0;
}
