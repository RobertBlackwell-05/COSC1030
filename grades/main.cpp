//
// Name Robert Blackwell
// Date 3/18/2025
// Grades Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;


double calculateGrade(double, double, double, double, double);

int main ()
{
    double grade1;
    double grade2;
    double grade3;
    double grade4;
    double grade5;
    double finalscore; 
    double letterGrade;

    cout << "Please enter grade 1: ";
    cin >> grade1;

    while (grade1 < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> grade1;
    }

    cout << "Please enter grade 2: ";
    cin >> grade2;

    while (grade2 < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> grade2;
    }

    cout << "Please enter grade 3: ";
    cin >> grade3;

    while (grade3 < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> grade3;
    }

    cout << "Please enter grade 4: ";
    cin >> grade4;

    while (grade4 < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> grade4;
    }

    cout << "Please enter grade 5: ";
    cin >> grade5;
    
    while (grade5 < 0)
    {
        cout << "Please enter a non-negative value: ";
        cin >> grade5;
    }

    finalscore = calculateGrade(grade1, grade2, grade3, grade4, grade5);

    cout << "Your final grade average is: " << setprecision(2)
    << fixed << finalscore << endl;

    if(finalscore >= 90 )
    {
        cout << "Your letter grade is A.";
    }
    else if (finalscore >= 80)
    {
        cout << "Your letter grade is B.";
    }
    else if (finalscore >= 70)
    {
        cout << "Your letter grade is C.";
    }
    else if (finalscore >= 60)
    {
        cout << "Your letter grade is D.";
    
    }
    else
    {
        cout << "Your letter grade is F.";
    }

return 0;
}

double calculateGrade(double grade1, double grade2, double grade3, double grade4, double grade5)
{
    double finalscore = grade1 + grade2 + grade3 + grade4 + grade5 / 5;
    
    return finalscore; 
}


