//
// Name Robert Blackwell
// Date 2/11/2025
// Stadium Seating Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12.0;
    const double CLASS_C_PRICE = 9.0;

    int classATickets;
    int classBTickets;
    int classCTickets;
    double total;

    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;


    total = (classATickets * CLASS_A_PRICE) +
            (classBTickets * CLASS_B_PRICE) +
            (classCTickets * CLASS_C_PRICE);

cout << "The Total revenue from ticket sales is $"
    << setprecision(2) << fixed << total << endl;

return 0;
}
