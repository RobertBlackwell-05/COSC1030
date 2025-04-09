//
// Name Robert Blackwell
// Date 4/8/2025
// Search Benchmarks Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

void getValue(int&);
int linearSearch(int[], int, int&);
int binarySearch(int[], int, int&);


int main()
{
    const int SIZE = 20;
    int Array[SIZE] = { 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300, 320, 340, 360, 380, 400};
    int LinValue = 0;
    int BinValue = 0;
    int Value;
    int BinResults;
    int LinResults;


    getValue(Value);

LinResults = linearSearch(Array, SIZE, LinValue, Value);

BinResults = binarySearch(Array, SIZE, BinValue, Value);

cout << "Comparisons made before finding the Value: " << Value << endl;
cout << "Linear Search: " << LinValue << endl;
cout << "Binary Search: " << BinValue << endl;

return 0;
}


void getValue(int &Value)
{
    cout << "Enter the value to search for: ";
    cin >> Value;
}

int linearSearch(int list[], int size, int Value, int &LinValue)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (list[index] == Value)
        {
            found = true;
            position = index; 
        }
        index++;

        if (position == -1)
            LinValue++;
    }
    return position;
}

int binarySearch( int array[], int size, int value, int &BinValue)
{
    int first = 0, 
        last = size - 1,
        middle,
        position = -1;
    
        bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else 
            first = middle + 1;
        if (position == -1)
            BinValue++;
    }
    return position;
}