//
// Name Robert Blackwell
// Date 4/13/2025
// Pointer Rewrite Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int doSomthing(int *, int *);

int main()
{
    int x = 10, y = 2;

    cout << "Before calling the function:\n"
        << "x = " << x << endl
        << "y = " << endl << endl;
    
    cout << "The function returns "
         << doSomthing(&x, &y) << endl << endl;
    
    cout << "After calling the function:\n"
         << "x = " << x << endl
         << "y = " << y << endl;

return 0;

}

int doSomthing(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
