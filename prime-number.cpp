// C++ Program to Check Whether the Number is Prime or Not

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j;
    cout << "Enter 1st number: ";
    cin >> i;
    cout << "Enter 2nd number: ";
    cin >> j;

    while (i <= j)
    {

        if (i < 3)
        {
            cout << i << " is prime" << endl;
        }
        else if (i % 2 != 0)
        {
            cout << i << " is prime" << endl;
        }
        else
        {

            cout << i << " is not prime" << endl;
        }

        i++;
    }
}