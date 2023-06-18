// C++ Program to find the LCM of two numbers

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, num1, num2, lcm;
    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    int max = (num1 > num2) ? num1 : num2;

    for (i = max; i <= num1 * num2; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;
}
