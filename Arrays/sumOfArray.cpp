// Calculate the sum of elements in an array in C++

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
}

int main(int argc, char const *argv[])
{
    int num[10] = {1, 5, 3, 9, 7, 4, 6, 12, 5, 10};

    sumOfArray(num, 10);
}
