// Occurrence of a digit in a given number using C++

#include <iostream>
#include <math.h>
using namespace std;

int Occurences(int n, int d)
{
    int count = 0;
    while (n > 0)
    {
        n % 10;
        if (n % 10 == d)
            count++;
        n /= 10;
    }
    cout << count;
}

int main(int argc, char const *argv[])
{
    Occurences(100, 0);
}
