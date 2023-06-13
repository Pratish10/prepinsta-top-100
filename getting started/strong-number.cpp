// C++ Program to check whether a number is a Strong Number or not
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i, fac = 1, a, sum = 0, x;
    cout << "Enter the number: ";
    cin >> n;

    a = n;

    while (a != 0)
    {
        i = a % 10;
        sum = sum + i;

        for (x = 1; x <= i; x++)
        {
            fac = fac * x;
        }

        a = a / 10;
    }
    if (fac == n)
    {
        cout << n << " is strong number";
    }
    else
    {
        cout << n << " is strong number";
    }
}
