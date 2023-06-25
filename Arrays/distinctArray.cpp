// Repeating Elements in an array using C++

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int distinctArray(int arr[], int n)
{
    sort(arr, arr + n);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n && arr[i] == arr[i + 1])
        {
            flag = 1;
            i++;
        }
        if (flag)
        {
            cout << arr[i - 1] << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {20, 30, 10, 2, 10, 20, 30, 11};

    distinctArray(arr, 8);
}
