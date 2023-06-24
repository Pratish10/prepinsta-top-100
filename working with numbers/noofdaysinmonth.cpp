// C++ Program to count the number of days in a given month of a year

#include <iostream>
#include <math.h>
using namespace std;

int daysInMonth(int month, int year)
{
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && year % 4 == 0)
    {
        cout << "Number of days: " << arr[month - 1] + 1;
    }
    else
    {
        cout << "Number of days: " << arr[month - 1];
    }

    // using if else
    // if (month == 2 && year % 4 == 0)
    // {
    //     cout << "No .of Days: 29" << endl;
    // }
    // else if (month == 2)
    // {
    //     cout << "No .of Days: 28" << endl;
    // }
    // else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    // {
    //     cout << "No .of Days: 31" << endl;
    // }
    // else if (month == 4 || month == 6 || month == 9 || month == 11)
    // {
    //     cout << "No .of Days: 30" << endl;
    // }
    // else
    // {
    //     cout << "Invalid Input" << endl;
    // }
}

int main(int argc, char const *argv[])
{
    daysInMonth(6, 2012);
}
