// C++ Program to calculate the area of a circle

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float n;
    cout << "Enter radius: ";
    cin >> n;

    float a = 3.14 * n * n;

    cout << a;
}