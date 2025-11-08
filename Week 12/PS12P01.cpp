#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void load_arrays(string make[], string model[], float msrp[])
{
    int i;
    ifstream infile;
    
    infile.open("msrpd.txt");
    
    for (i = 0; i <= 9; i++)
    {
        infile >> make[i] >> model[i] >> msrp[i];
    }
    
    infile.close();
}

void print_arrays(string make[], string model[], float msrp[])
{
    int i;
    
    cout << "Array in Normal Order:" << endl;
    cout << endl;
    
    for (i = 0; i <= 9; i++)
    {
        cout << make[i] << "  " << model[i] << "  " << msrp[i] << endl;
    }
    cout << endl;
}

void print_arrays_reverse(string make[], string model[], float msrp[])
{
    int i;
    
    cout << "Array in Reverse Order:" << endl;
    cout << endl;
    
    for (i = 9; i >= 0; i--)
    {
        cout << make[i] << "  " << model[i] << "  " << msrp[i] << endl;
    }
    cout << endl;
}

int main()
{
    string make[10], model[10];
    float msrp[10];
    
    load_arrays(make, model, msrp);
    
    print_arrays(make, model, msrp);
    
    print_arrays_reverse(make, model, msrp);
    
    return 0;
}
