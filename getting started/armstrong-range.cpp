// Find the Armstrong Numbers in a given Interval in C++

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int num1, num2, num, count, i, remainder, sum;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    // int x = 1634;

    if (num1 > num2)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    for (i = num1; i <= num2; i++)
    {
        num = i;
        count = 0;
        while (num > 0)
        {
            num = num / 10;
            count++;
        }
        num = i;
        sum = 0;

        while (num > 0)
        {
            remainder = num % 10;
            sum = sum + pow(remainder, count);
            num = num / 10;
        }
        if (sum == i)
            cout << i << " is armstrong." << endl;
    }
}