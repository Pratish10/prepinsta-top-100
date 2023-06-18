// C++ Program for Decimal to Binary Conversion

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a[100], i;
    cout << "Enter the number: ";
    cin >> n;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n /= 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}