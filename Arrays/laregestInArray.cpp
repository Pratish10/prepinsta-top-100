// Largest Element in an array using C++
#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int largestInArray(int arr[], int size)
{

    int larg = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > larg)
        {
            larg = arr[i];
        }
    }
    cout << larg << endl;
}

int smallestInArray(int arr[], int size)
{
    int small = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << small << endl;
}

int main(int argc, char const *argv[])
{
    int num[10] = {1, 5, 3, 9, 7, 4, 6, 12, 5, 10};

    largestInArray(num, 10);
    smallestInArray(num, 10);
}
