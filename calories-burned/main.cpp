//
// Name Robert Blackwell
// Date 2/23/25
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int main ()
{
    const double CALS_PER_MINUTE = 3.9;
    int minutes;
    double calories;

    for (minutes = 10; minutes <= 30; minutes += 5)
    {
        calories = minutes * CALS_PER_MINUTE;
        cout << "After " << minutes << " minutes you burned " << calories << " calories.\n";
    }
    return 0;
}