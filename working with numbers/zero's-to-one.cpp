// C++ Program to Replace all 0’s with 1 in a given integer

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, j, n1;
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0)
    {
        j = n % 10;
        if (j == 0)
            j = 1;
        n /= 10;
        n1 = n1 * 10 + j;
    }
    n = 0;
    while (n1 > 0)
    {
        int r = n1 % 10;
        n = n * 10 + r;
        n1 /= 10;
    }
    cout << n;
}