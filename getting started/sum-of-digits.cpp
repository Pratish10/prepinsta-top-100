// C++ Program to find the Sum of Digits of a Number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, sum = 0, j;
    cout << "Enter number: ";
    cin >> i;

    // int x = 125;

    while (i != 0)
    {
        j = i % 10;
        sum = sum + j;
        i = i / 10;
    }
    cout << sum << endl;
}