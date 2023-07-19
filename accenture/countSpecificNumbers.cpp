#include <iostream>

bool ContainsOnlyDigits(int number)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (digit != 1 && digit != 4 && digit != 9)
        {
            return false;
        }
        number /= 10;
    }
    return true;
}

int CountSpecificNumbers(int m, int n)
{
    if (m <= n)
    {

        int count = 0;
        for (int num = m; num <= n; num++)
        {
            if (ContainsOnlyDigits(num))
            {
                count++;
            }
        }
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int m = 100;
    int n = 200;

    int count = CountSpecificNumbers(m, n);
    std::cout << count << std::endl;

    return 0;
}
