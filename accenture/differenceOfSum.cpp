#include <iostream>

using namespace std;

int differenceOfSum(int m, int n)
{
    int divisible = 0;
    int notDivisible = 0;
    for (int j = 1; j <= n; j++)
    {
        if (j % m == 0)
        {
            divisible = divisible + j;
        }
        else
        {

            notDivisible = notDivisible + j;
        }
    }
    cout << notDivisible - divisible << endl;
}

int main(int argc, char const *argv[])
{
    differenceOfSum(6, 30);
    differenceOfSum(3, 10);
    return 0;
}
