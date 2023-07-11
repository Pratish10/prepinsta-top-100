#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int countArr(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {7, 4, 8, 2, 9};
    countArr(arr, 5);
}
