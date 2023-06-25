// Finding the longest palindrome in an array in C++

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int n)
{
    int rem = 0, temp = n;
    while (temp > 0)
    {
        rem = rem * 10 + temp % 10;
        temp /= 10;
    }
    if (rem == n)
        return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 121, 55551, 545545, 10111, 90};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n);

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(n) && max < arr[i])
            max = arr[i];
    }
    if (max == INT_MIN)
        max = -1;

    cout << max;
}
