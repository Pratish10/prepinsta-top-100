// C++ Program for Decimal to Octal Conversion

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i = 1, rem, octal = 0;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 8;
        n /= 8;
        octal = octal + rem * i;
        i *= 10;
    }
    cout << octal;
}