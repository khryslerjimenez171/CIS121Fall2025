#include <iostream>
#include <iomanip>
#include <string>
#include "Computer.h"

using namespace std;

int main()
{
    Computer MyComputer;
    string make, model, cpu, ram, hd, type;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "\nEnter Computer Make (Lenovo, HP, Apple): ";
        if (!(cin >> make)) break;
        MyComputer.set_make(make);

        cout << "Enter Computer Model (no spaces): ";
        cin >> model;
        MyComputer.set_model(model);

        cout << "Enter CPU Type (Intel, AMD): ";
        cin >> cpu;
        MyComputer.set_cpu(cpu);

        cout << "Enter RAM (8GB, 16GB, 32GB): ";
        cin >> ram;
        MyComputer.set_ram(ram);

        cout << "Enter Hard Drive (SSD, HD): ";
        cin >> hd;
        MyComputer.set_hd(hd);

        cout << "Enter Computer Type (Laptop, Notebook, Tablet, Desktop): ";
        cin >> type;
        MyComputer.set_type(type);

        MyComputer.compute_cost();

        cout << endl;
        cout << "Make: " << MyComputer.get_make() << endl;
        cout << "Model: " << MyComputer.get_model() << endl;
        cout << "CPU: " << MyComputer.get_cpu() << endl;
        cout << "RAM: " << MyComputer.get_ram() << endl;
        cout << "Hard Drive: " << MyComputer.get_hd() << endl;
        cout << "Type: " << MyComputer.get_type() << endl;
        cout << "Total Cost: $" << MyComputer.get_cost() << endl;

        cout << "\nctl + d to stop.\n\n";
    }

    cout << "\nProgram terminated.\n";
    return 0;
}

