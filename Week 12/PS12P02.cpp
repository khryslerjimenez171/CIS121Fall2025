#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void load_arrays(string city[], string population[])
{
    int i;
    ifstream infile;
    
    infile.open("city.txt");
    
    for (i = 0; i <= 7; i++)
    {
        infile >> city[i] >> population[i];
    }
    
    infile.close();
}
void print_arrays(string city[], string population[])
{
    int i;
    
    for (i = 0; i <= 7; i++)
    {
        cout << city[i] << "  " << population[i] << endl;
    }
}
void search_arrays(string city[], string population[], string scity)
{
    int i;
    bool found_flag;
    
    found_flag = false;
    
    for (i = 0; i <= 7 && found_flag == false; i++)
    {
        if (scity == city[i])
        {
            cout << city[i] << "  " << population[i] << endl;
            found_flag = true;
        }
    }
    
    if (found_flag == false)
        cout << scity << "  " << " is not found" << endl;
    
}
int main ()
{
    string city [8], population [8];
    string scity;
    
    load_arrays(city, population);
    
    print_arrays(city, population);
    
    cout << "Enter City To Search For (ctl + d to stop): ";
    cin >> scity;
    while(!cin.eof())
    {
        search_arrays(city,population,scity);
        
        cout << "Enter City To Search For (ctl + d to stop): ";
        cin >> scity;
    }
    
    return 0;
}
