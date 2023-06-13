// C++ Program to check whether a number is an Automorphic number or not

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long a, n, i;
    cout << "Enter the number: ";
    cin >> n;

    a = n * n;

    if (n % 10 == a % 10)
    {
        cout << n << " is Automorphic number";
    }
    else
    {

        cout << n << " is not an Automorphic number";
    }
}
