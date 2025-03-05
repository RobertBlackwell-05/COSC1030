//
// Name Robert Blackwell
// Date 3/4/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main()
{
    int penny;
    int nickel;
    int dime;
    int quarter;
    double total = 0;

    cout << "Please enter the number of pennies: ";
    cin >> penny;

    cout << "Please enter the number of nickles: ";
    cin >> nickel;

    cout << "Please enter the number of dimes: ";
    cin >> dime;

    cout << "Please enter the number of quarter: ";
    cin >> quarter;

    total = (penny * 0.01) + (nickel * 0.05) + (dime * 0.1) + (quarter * 0.25);

        if( total == 1)
        {
            cout << "Congratulations, the amount entered is exactly $1";
        }
        else if (total > 1)
        {
            cout << "Sorry, the amount entered is more than $1";
        }
        else 
        {
            cout << "Sorry, the amount entered is less than $1";
        }
        return 0;
}
