// C++ Program to Print Prime numbers in a given range

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout << "Enter 1st number: ";
    cin >> i;

    if (i == 2)
    {
        cout << i << " is Prime ";
    }
    else if (i > 1 && i % 2 != 0)
    {
        cout << i << " is Prime";
    }
    else
    {

        cout << i << " is not Prime";
    }
}