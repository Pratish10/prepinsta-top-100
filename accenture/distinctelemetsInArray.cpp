#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void distinctelemetsInArray(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {

            count++;
        }
    }
    cout << count << endl;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {8, 9, 5, 8, 9, 7, 12};
    int brr[3] = {8, 8, 8};
    distinctelemetsInArray(arr, 7);
    distinctelemetsInArray(brr, 3);
    return 0;
}
