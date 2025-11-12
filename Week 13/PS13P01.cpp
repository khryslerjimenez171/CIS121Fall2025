#include <iostream>
#include <string>
using namespace std;

void displayArrays(string make[], string model[], int size);

int main() {
    int numAutos;

    cout << "Enter The Number of Autos: ";
    cin >> numAutos;

    string* make = new string[numAutos];
    string* model = new string[numAutos];

    for (int i = 0; i < numAutos; i++)
    {
        cout << "Enter Make for Auto #" << i + 1 << ": ";
        cin >> make[i];
        cout << "Enter Model for Auto #" << i + 1 << ": ";
        cin >> model[i];
    }

    displayArrays(make, model, numAutos);

    delete[] make;
    delete[] model;

    return 0;
}

void displayArrays(string make[], string model[], int size) {
    cout << "\nAuto List:\n";
    cout << "Make\t\tModel\n";
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << make[i] << "\t\t" << model[i] << endl;
    }
}
