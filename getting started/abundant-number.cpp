// C++ Program to check whether a number is an Abundant Number or not

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0, n, i, a;
    cout << "Enter the number: ";
    cin >> n;

    a = n;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
    {
        cout << n << " is abundant number";
    }
    else
    {

        cout << n << " is not abundant number";
    }
}
