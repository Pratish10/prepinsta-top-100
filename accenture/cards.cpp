#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int cardspyramid(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 2;

    int arr[n + 1];

    arr[0] = 0;
    arr[1] = 2;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = ((2 * i) + i - 1 + arr[i - 1]) % 1000007;
    }
    return arr[n];
}

int main(int argc, char const *argv[])
{
    cout << cardspyramid(3);
    return 0;
}
