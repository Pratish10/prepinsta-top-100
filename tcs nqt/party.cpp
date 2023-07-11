#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>
using namespace std;

vector<int> party(int arr[], int brr[], int n)
{
    int max = 0;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        int diff = abs(s + arr[i] - brr[i]);
        s = diff;
        if (s > max)
        {
            max = s;
        }
    }
    cout << max << " ";
}

int main(int argc, char const *argv[])
{
    int t;

    int arr[] = {3, 5, 2, 0};
    int brr[] = {0, 2, 4, 4};
    party(arr, brr, 4);
}
