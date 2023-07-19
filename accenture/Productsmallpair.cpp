

#include <iostream>
#include <algorithm>

using namespace std;

int Productsmallpair(int sum, int arr[], int n)
{
    // if (n < 2)
    // {
    //     return -1;
    // }

    sort(arr, arr + n);
    int s = arr[0] + arr[1];
    if (s < sum)
    {
        return arr[0] * arr[1];
    }
}

int main(int argc, char const *argv[])
{
    int arr[6] = {9, 8, -7, 3, 9, 3};
    int result = Productsmallpair(4, arr, 6);
    cout << result;
    return 0;
}
