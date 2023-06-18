// C++ Program to find Permutations in which n people can occupy r seats in a classroom

#include <iostream>
#include <math.h>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(int argc, char const *argv[])
{
    int n, r;
    cout << "Enter number of people: ";
    cin >> n;
    cout << "Enter number of seats: ";
    cin >> r;

    int p = factorial(n) / factorial(n - r);

    cout << p;
}