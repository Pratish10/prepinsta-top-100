// Find the Sum of Numbers in a given range in C++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, sum = 0;
    cout << "Enter 1st number : ";
    cin >> i;
    cout << "Enter 2nd number : ";
    cin >> j;

    while (i <= j)
    {
        sum = sum + i;

        i++;
    }
    cout << sum << " ";
}