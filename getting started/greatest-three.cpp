// C++ Program to find the Greatest of three numbers

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, k;
    cout << "Enter 1st number : ";
    cin >> i;
    cout << "Enter 2nd number : ";
    cin >> j;
    cout << "Enter 3rd number : ";
    cin >> k;

    if (i > j && i > k)
    {
        cout << i << " is greater.";
    }
    else if (j > i && j > k)
    {
        cout << j << " is greater.";
    }
    else
    {

        cout << k << " is greater.";
    }
}