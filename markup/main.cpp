//
// Name Robert Blackwell
// Date 3/18/2025
// Markup Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main ()
{
    double wholesale;
    double markupPercent;
    double retail; 

    cout << "Enter the item's wholesale cost: ";
    cin >> wholesale;

    while (wholesale < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> wholesale;
    }

    cout << "Enter the item's markup percentage: ";
    cin >> markupPercent;

    while (markupPercent < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> markupPercent; 
    }

    retail = calculateRetail(wholesale, markupPercent);

    cout << "The retail price is $" << setprecision(2)
        << fixed << retail << endl;


return 0;
}

double calculateRetail(double wholesale, double markupPct)
{
    double markup = wholesale * markupPct / 100;
    return wholesale + markup;
}