// C++ program to check whether a number is a Harshad Number or not

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0, n, i, a;
    cout << "Enter the number: ";
    cin >> n;

    a = n;
    while (a > 0)
    {
        i = a % 10;
        sum = sum + i;
        a /= 10;
    }

    if (n % sum == 0)
    {
        cout << n << " is harshad number";
    }
}
