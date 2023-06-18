// C++ Program to find the maximum number of handshakes

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, count;
    cout << "Enter number of people: ";
    cin >> n;

    count = ((n - 1) * n) / 2;

    cout << count;
}