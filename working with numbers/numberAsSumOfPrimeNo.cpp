// C++ Program to check whether a number be expressed as a sum of two prime numbers

#include <iostream>
#include <math.h>
using namespace std;

int prime_or_not(int n)
{
    int j = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            j = 0;
            break;
        }

        return j;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (prime_or_not(i))
        {

            if (prime_or_not(n - i))
            {
                cout << i << " + " << n - i << " = " << n << endl;
            }
        }
    }
}