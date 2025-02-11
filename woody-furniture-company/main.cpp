//
// Name Robert Blackwell
// Date 2/11/2025
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for the chair prices
    const double CHAIR_AC_PRICE = 85.00;
    const double CHAIR_M_PRICE = 57.50;
    const double CHAIR_FC_PRICE = 127.75;

    // Variables
    int chairACsale;
    int chairMsale;
    int chairFCsale;
    double ACtotal;
    double Mtotal;
    double FCtotal;
    double total;

// read the number of chair AC sold
cout << "Enter the number of American Colonial chairs sold: ";
cin >> chairACsale;

// read the number of chair M sold
cout << "Enter the number of Modern chairs sold: ";
cin >> chairMsale;

// read the number of chair FC sold
cout << "Enter the number of French Classical chairs sold:  ";
cin >> chairFCsale;

ACtotal = (chairACsale * CHAIR_AC_PRICE);

Mtotal = (chairMsale * CHAIR_M_PRICE);

FCtotal = (chairFCsale * CHAIR_FC_PRICE);

total = (chairACsale * CHAIR_AC_PRICE) +
        (chairMsale * CHAIR_M_PRICE) +
        (chairFCsale * CHAIR_FC_PRICE);

cout << "The total revenue from American Colonial is: $ "
    << setprecision(2) << fixed << ACtotal << endl;

cout << "The total revenue from Modern is: $ "
    << setprecision(2) << fixed << Mtotal << endl;

cout << "The total revenue from French Classical is: $ "
    << setprecision(2) << fixed << FCtotal << endl;

cout << "The total revenue from all chair sales is: $ "
    << setprecision(2) << fixed << total << endl;


return 0;
}
