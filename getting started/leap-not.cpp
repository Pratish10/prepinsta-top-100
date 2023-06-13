// Program to Check Whether a Year is a Leap Year or Not in C++

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout << "Enter year: ";
    cin >> i;

    if (i % 4 == 0)
    {
        cout << i << " is a Leap Year";
    }
    else
    {

        cout << i << " not a Leap Year";
    }
}