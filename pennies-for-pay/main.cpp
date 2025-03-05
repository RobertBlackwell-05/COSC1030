//
// Name Robert Blackwell
// Date 3/4/2025
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main()
{
    int numDays = 1;
    double money = 1.0;

    cout << "Enter number of days\n";
    cin >> numDays;

    while (numDays < 1)
    {
        cout << "Please enter valid number of days\n";
        cin >> numDays;
    }

    for (int i = 1; i<= numDays; i++)
    {
        cout << "Day " << i << " you earned " << money / 100 << " pennies\n";
        money *= 2;
    }
}

