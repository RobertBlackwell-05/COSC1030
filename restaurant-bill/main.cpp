//
// Name Robert Blackwell
// Date 2/4/2025 (2days within due date)
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main ()
{
    double meal = 44.50;
    double tax = meal * 0.0675;
    double subtotal = meal + tax;
    double tip = subtotal * 0.20;
    double total = subtotal + tip;

    cout  << "Meal cost: " << meal << endl;
    cout << "Tax: " << tax << endl;
    cout << "Tip: " << tip << endl;
    cout << "Total: " << total << endl;

    return 0;
}
// Variable declarations

// Constants for the tax rate and tip percentage

// Get the amount of the purchase.

// Calculate the sales tax.

// Calculate the tip.

// Calculate the total of the sale.

// Print information about the sale.
