#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; ++i)
        {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacci(n);
    cout << result << endl;

    return 0;
}
