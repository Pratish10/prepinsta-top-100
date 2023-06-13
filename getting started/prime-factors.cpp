// Finding Prime Factors of a Number
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i = i + 3)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n << " ";
    }
}
