// Program to Check for Perfect Square in C++

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long a, n, i;
    cout << "Enter the number: ";
    cin >> n;

    if (n > 0)
    {
        i = sqrt(n);
        a = i * i;
        if (a == n)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
    }
    else
    {
        cout << "Enter number greater than 0";
    }
}
