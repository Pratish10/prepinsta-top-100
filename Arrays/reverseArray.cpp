// C++ Program to Reverse elements of an array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int size)
{

    int start = 0, end = size - 1;
    while (end > start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{

    int num[10] = {1, 5, 3, 9, 7, 4, 6, 12, 5, 10};
    reverseArray(num, 10);
    return 0;
}
