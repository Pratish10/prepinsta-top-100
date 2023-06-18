// C++ Program for GCD of two numbers

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, gcd;
    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}