// C++ program to count numbers of even and odd elements in an array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int evenOdd(int arr[], int n)
{
    int count_even = 0;
    int count_odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    cout << "Even: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 7, 8, 4, 5, 16, 8, 5, 3, 8, 4, 8, 6, 1, 86, 4, 6, 48, 46, 4, 6, 1, 486, 4, 64, 86, 4, 6};
    int n = sizeof(arr) / sizeof(int);
    evenOdd(arr, n);
}
