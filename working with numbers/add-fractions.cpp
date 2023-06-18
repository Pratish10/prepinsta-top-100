// C++ Program to calculate addition of two Fractions

#include <iostream>
#include <math.h>
using namespace std;

int gcd(int n1, int n2)
{

    int gcd;

    for (int i = 1; i <= n1 || i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main(int argc, char const *argv[])
{
    int num1, num2, den1, den2, count;
    cout << "Enter num1 and den1: ";
    cin >> num1 >> den1;

    cout << "Enter num2 and den2: ";
    cin >> num2 >> den2;

    int lcm = (den1 * den2) / gcd(den1, den2);

    int sum = (num1 * lcm / den1) + (num2 * lcm / den2);

    int num3 = sum / gcd(sum, lcm);
    lcm = lcm / gcd(sum, lcm);

    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num2 << "/" << lcm;
}