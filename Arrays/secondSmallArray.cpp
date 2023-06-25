// C++ program for finding the second smallest element in an array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int smallestInArray(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int secSmall = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != smallest && arr[i] < secSmall)
        {
            secSmall = arr[i];
        }
    }
    cout << secSmall << endl;
}

int main(int argc, char const *argv[])
{
    int num[10] = {1, 5, 3, 9, 7, 4, 6, 12, 5, 10};

    smallestInArray(num, 10);
}
