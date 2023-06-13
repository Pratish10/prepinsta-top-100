// Find the Greatest of the Two Numbers in C++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    cout << "Enter 1st number : ";
    cin >> i;
    cout << "Enter 2nd number : ";
    cin >> j;

    if (i > j)
    {
        cout << i << " is greater.";
    }
    else if (i < j)
    {
        cout << j << " is greater.";
    }
    else if (i == j)
    {

        cout << "Both are equal.";
    }
}