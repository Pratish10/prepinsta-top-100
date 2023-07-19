#include <iostream>
#include <string>
using namespace std;

int calculate(int m, int n)
{
    int sum = 0;
    while (m <= n)
    {
        if (m % 3 == 0 && m % 5 == 0)
        {
            cout << m << " ";
            sum = sum + m;
        }
        m++;
    }
    // cout << sum;
}

int main()
{
    calculate(100, 160);
}
