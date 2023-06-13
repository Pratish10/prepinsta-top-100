// C++ Program to find the Reverse of a Number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, r = 0, j;
    cout << "Enter number: ";
    cin >> i;

    // int x = 125;

    while (i != 0)
    {
        j = i % 10;
        r = (r * 10) + j;
        i = i / 10;
    }
    cout << r << endl;
}