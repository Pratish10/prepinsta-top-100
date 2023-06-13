// C++ Program to find the Factorial of a Number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sum = 1, n;

    cout << "Enter range: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum << " ";
}