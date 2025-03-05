//
// Name Robert Blackwell
// Date 3/4/2025
// Hotel Occupancy Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    int roomsOnFloor = 0;
    int totalRooms = 0; 
    int totalFloors = 0;
    int occupiedRoomsOnFloor = 0;
    int totalOccupiedRooms = 0;
    float percentOccupied = 0.0f;

    cout << "Enter number of floors: ";
    cin >> totalFloors;

    while (totalFloors < 1)
    {
        cout << "Number of floors must be at least 1. Please re-enter ";
        cin >> totalFloors;
    }

    for (int i = 1; i <= totalFloors; i++)
    {
        if ( i != 13)
        {
            cout << "Enter the number of rooms on the floor " << i << " ";
            cin >> roomsOnFloor;

            while (roomsOnFloor < 10)
            {
                cout << "Number of rooms on floor must be atlease 10. Please re-enter ";
                cin >> roomsOnFloor;
            }

        cout << "How many rooms are occupied? ";
        cin >> occupiedRoomsOnFloor;  

        }

        totalRooms += roomsOnFloor;
        totalOccupiedRooms += occupiedRoomsOnFloor;

    }

    percentOccupied = (totalOccupiedRooms * 1.0f / totalRooms) * 100.0f;

    cout << "The hotel has total of " << totalFloors << " floors\n ";
    cout << "The hotel has total of " << totalRooms << " rooms\n ";
    cout << "There are " << totalOccupiedRooms << " rooms occupied\n ";
    cout << "There are " << totalRooms - totalOccupiedRooms << " empty rooms.\n ";
    cout << "Percentage of occupied rooms is " << setprecision(2) << fixed << percentOccupied << "%\n ";

    return 0;
}

