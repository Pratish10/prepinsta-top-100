// C++ Program to find number of digits in an integer

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0;
    cout << "Enter number: ";
    cin >> n;

    while (n > 0)
    {

        count++;
        n /= 10;
    }
    cout << count;
}