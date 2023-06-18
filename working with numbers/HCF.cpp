// HCF of Two Number in C++

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, num1, num2, hcf = 1;
    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    for (i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf;
}
