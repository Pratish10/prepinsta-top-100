// C++ Program to print Fibonacci Series up to N numbers

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0, b = 1, n, c;

    cout << "Enter range: ";
    cin >> n;

    cout << a << "," << b << ",";

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        cout << c << ",";
    }
}