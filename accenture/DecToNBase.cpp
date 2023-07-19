#include <iostream>
#include <string>

std::string DecToNBase(int n, int num)
{
    const std::string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string result = "";

    while (num > 0)
    {
        int remainder = num % n;
        result = digits[remainder] + result;
        num /= n;
    }

    return result;
}

int main()
{
    int n = 21;
    int num = 5678;

    std::string result = DecToNBase(n, num);
    std::cout << result << std::endl;

    return 0;
}
