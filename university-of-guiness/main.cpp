//
// Name Robert Blackwell
// Date 2/18/2025
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double instatetution = 3000.0;
    const double outstatetution = 4500.0;
    const double ISroomandboard = 2500.0;
    const double OSroomandboard =  3500.0;

    int residency;
    int roomandboard;
    int yes;
    int no;
    int instate;
    int outofstate;

 // I cant get the Cin to be taken in twice. I will do the entire program without ever taking the second cin. It wont let me put in an input for residency.
    cout << "Do you need room and board: " << endl;
    cin >> roomandboard;

    cout << "\nAre you in-state or out-of-state(One word): " << endl;
    cin >> residency;

    

    if (residency = instate)
    {
        cout << "\nYour tution fee will be: $" << instatetution << endl;

        if (roomandboard = yes)
            {
           cout << "\nYour room and board will be: $" << ISroomandboard << endl;
            } 
            else;
    }

    if (residency = outofstate)
    {
        cout << "\nYour tution fee will be: $" << outstatetution << endl;
       
             if (roomandboard = yes)
            {
            cout << "\nYour room and board will be: $" << OSroomandboard << endl;
            }
            else;
    }

    return 0;
}