// C++ program to sort elements of the given array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int sortArray(int arr[], int size)
{
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // cout << arr[1];
}

int main(int argc, char const *argv[])
{
    int num[10] = {1, 5, 3, 9, 7, 4, 6, 12, 5, 10};
    sortArray(num, 10);
    return 0;
}
