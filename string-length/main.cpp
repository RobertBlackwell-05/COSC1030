//
// Name Robert Blackwell
// Date 5/5/2025
// String Length Programming Project
// COSC 1030
//
#include <iostream>

int stringLength(const char* str)
{
    int count = 0;
    while (*str != '\0')
        {
        count++;
        str++;
        }
    return count;
}

int main()
{
    char inputString[100];
    std::cout << "Enter a String: ";
    std::cin.getline(inputString, 100);

    int length = stringLength(inputString);
    std::cout << "The length of the string is: " << length << std::endl;
    return 0;

}
