#include <iostream>
using namespace std;
int main()
{
    //define variables
    int concerttickets;
    char locationcode;
    float price, total;

    // input phase
    cout << "Enter Number of Tickets: ";
    cin >> concerttickets;
    cout << "Enter Location Code (H/L): ";
    cin >> locationcode;

   if (concerttickets > 25 || locationcode == 'H')
       price = 30.0;
   else if (concerttickets > 10 || locationcode == 'L')
       price = 40.0;
   else
       price = 50.0;
    
   total = concerttickets * price;
    
    // process phase
    cout << "Number of Tickets: " << concerttickets << endl;
    cout << "Price Per Ticket: $" << price << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;

} // end of main
