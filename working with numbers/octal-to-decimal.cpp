// C++ Program for Octal to Decimal Conversion

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, j, sum = 0, count = 0, a, i = 0, p;
    cout << "Enter 1st number: ";
    cin >> n;

    a = n;
    while (a != 0)
    {
        count++;
        a /= 10;
    }
    a = n;

    while (i < count && a > 0)
    {

        j = a % 10;
        p = pow(8, i);
        sum = sum + j * p;
        a /= 10;
        i++;
    }
    cout << sum;
}