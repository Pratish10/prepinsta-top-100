// C++ program to the Power of a number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p, e;

    cout << "Enter number: ";
    cin >> p;

    cout << "Enter exponential: ";
    cin >> e;

    cout << pow(p, e);
}