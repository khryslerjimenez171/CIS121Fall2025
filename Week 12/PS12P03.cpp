#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void load_arrays(string fname[], string lname[], float salary[]);
void print_arrays(string fname[], string lname[], float salary[]);
void search_arrays(string fname[], string lname[], float salary[], string search_name);

int main()
{
    string fname[10], lname[10];
    float salary[10];
    string search_name;

    load_arrays(fname, lname, salary);

    print_arrays(fname, lname, salary);

    cout << endl;
    cout << "Enter Last Name to Search For (ctrl + d to stop): ";
    cin >> search_name;

    while (!cin.eof())
    {
        search_arrays(fname, lname, salary, search_name);

        cout << "Enter Last Name to Search For (ctrl + d to stop): ";
        cin >> search_name;
    }

    return 0;
}

void load_arrays(string fname[], string lname[], float salary[])
{
    int i;
    ifstream infile;

    infile.open("Empldata.txt");

    if (!infile)
    {
        cout << "Error opening file Empldata.txt" << endl;
        exit(1);
    }

    for (i = 0; i < 10; i++)
    {
        infile >> fname[i] >> lname[i] >> salary[i];
    }

    infile.close();
}

void print_arrays(string fname[], string lname[], float salary[])
{
    int i;
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "First Name      Last Name        Salary" << endl;
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        cout << left << setw(15) << fname[i]
             << setw(15) << lname[i]
             << "$" << setw(10) << salary[i] << endl;
    }

    cout << endl;
}

void search_arrays(string fname[], string lname[], float salary[], string search_name)
{
    int i;
    bool found_flag = false;

    cout << setprecision(2) << fixed;

    for (i = 0; i < 10 && found_flag == false; i++)
    {
        if (search_name == lname[i])
        {
            cout << endl;
            cout << "Employee Found:" << endl;
            cout << "First Name: " << fname[i] << endl;
            cout << "Last Name: " << lname[i] << endl;
            cout << "Salary: $" << salary[i] << endl;
            cout << endl;
            found_flag = true;
        }
    }

    if (found_flag == false)
    {
        cout << endl;
        cout << search_name << " not found " << endl;
        cout << endl;
    }
}
