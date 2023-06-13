// Check Whether a Number is Even or Odd in C++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout << "Enter the number: ";
    cin >> i;

    if (i % 2 == 0)
    {
        cout << "The number " << i << " is Even.";
    }
    else
    {
        cout << "The number " << i << " is Odd.";
    }
}
