// C++ program to find the frequency of elements in an array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int frequencyArray(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        while (i < n && arr[i] == arr[i + 1])
        {
            count++;
            i++;
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[6] = {10, 20, 20, 30, 10, 20};
    frequencyArray(arr, 6);
    return 0;
}
