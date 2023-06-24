// C++ Program to calculate the area of a circle

#include <iostream>
#include <math.h>
using namespace std;

double rootOfQuadratic(double a, double b, double c)
{
    if (a == 0)
    {
        cout << "Invalid" << endl;
    }

    double d = b * b - 4 * a * c;
    if (d > 0)
    {
        double root1 = (-b + sqrt(d)) / 2 * a;
        double root2 = (-b - sqrt(d)) / 2 * a;
        cout << "Roots are real and different " << root1 << "and" << root2 << endl;
    }
    else if (d < 0)
    {
        double root1 = -b / 2 * a;
        double root2 = sqrt(-d) / 2 * a;
        cout << "Roots are complex " << root1 << "and" << root2 << endl;
    }
    else
    {
        double root1 = (-b + sqrt(d)) / 2 * a;
        cout << "Roots are real and equal " << root1 << endl;
    }
}

int main(int argc, char const *argv[])
{
    rootOfQuadratic(1, 4, 4);
}
