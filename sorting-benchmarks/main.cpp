//
// Name Robert Blackwell
// Date 5/4/2025
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

void displayArray(int[], int, string);
void bubbleSort(int[], int, int &);
void swap(int &, int &);
void selectionSort (int[], int, int &);

int main()
{
    const int ARRAY_SIZE = 20;

    int array_1[ARRAY_SIZE] = { 7, 8, 3, 14, 67, 82, 13, 9, 2, 1, 10, 70, 15, 73, 56, 76, 90, 87, 45, 69};

    int array_2[ARRAY_SIZE] = { 7, 8, 3, 14, 67, 82, 13, 9, 2, 1, 10, 70, 15, 73, 56, 76, 90, 87, 45, 69 };

    int number_of_exchanges = 0;
    displayArray(array_1, ARRAY_SIZE, "UNSORTED: " );
    selectionSort(array_2, ARRAY_SIZE, number_of_exchanges);
    displayArray(array_2, ARRAY_SIZE, "SORTED: ");
    cout << "\nNumber of Exchanges = " << number_of_exchanges << endl << endl;

    return 0;
}

void displayArray(int array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i= 0; i < ARRAY_SIZE; i++)
        cout << array[i] << ", ";
        cout << endl;
}

void bubbleSort( int array[], int ARRAY_SIZE, int &number_of_exchanges)
{
    int min_index;
    int min_value;
    
    for(int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
    min_index = start_index;
    min_value = array[start_index];

    for (int index = start_index +1; index < ARRAY_SIZE; index++)
    {
        if (array[index] < min_value)
        {
            min_value = array[index];
            min_index = index;
            number_of_exchanges++;
        }
    }
    swap(array[min_index], array[start_index]);

    }
    
}

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}