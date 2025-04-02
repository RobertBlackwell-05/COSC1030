//
// Name Robert Blackwell
// Date 4/1/2025
// Temperatures
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void getTemp(string[], int[], int);
int getTotal(int[],int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main()
{

    const int TEMP_TYPE = 1;

    string names[TEMP_TYPE] = { "Tempature"};

    int temp [TEMP_TYPE];

    int totalAvgTemp;

    int highTemp;

    int lowTemp;

    getTemp(names, temp, TEMP_TYPE);

    totalAvgTemp = getTotal(temp, TEMP_TYPE);
    highTemp = largestElement(temp, TEMP_TYPE);
    lowTemp = smallestElement(temp, TEMP_TYPE);

    cout << endl << endl;
    cout << " Temperature Report \n\n";
    cout << "__________________________";

    for(int tempType = 0; tempType < TEMP_TYPE; tempType++ )
    {
        cout << setw(6) << names[tempType]
            << setw(21) << temp[tempType]
            << endl;
    }

    cout << "\nTotal Average Temp:" << setw(15) << totalAvgTemp << endl;
    cout << "Highest Temp:" << names[highTemp] << endl;
    cout << "Lowest Temp:" << names[lowTemp] << endl;  



}



























int getTotal(int array[], int size)
{
    int total = 0;

    for (int pos = 0; pos < size; pos++)
        total += array[pos];

    
    return total;
}

int largestElement(int array[], int size)
{
    int indexOfLargest = 0;

    for (int pos = 1; pos < size; pos++)
    {
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
    
    return indexOfLargest;

}


int smallestElement(int array[], int size)
{
    int indexOfSmallest = 0;

    for (int pos = 1; pos < size; pos++)
    {
        if (array[pos] < array[indexOfSmallest])
        indexOfSmallest = pos;

    }
    return indexOfSmallest;
}