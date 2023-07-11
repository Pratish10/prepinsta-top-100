// C++ program to determine can all numbers of an array be made equal

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int equalNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
        }
        while (arr[i] % 3 == 0)
        {
            arr[i] /= 3;
        }
        if (arr[i] != arr[0])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {134551, 354, 156453};
    int n = sizeof(arr) / sizeof(int);
    if (equalNumber(arr, n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
