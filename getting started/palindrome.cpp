// C++ Program to Check Palindrome Number or not

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, r = 0, j, x;
    cout << "Enter number: ";
    cin >> i;

    // int x = 12521;
    x = i;
    while (i != 0)
    {
        j = i % 10;
        r = (r * 10) + j;
        i = i / 10;
    }
    if (x == r)
        cout << x << " is palindrome.";
    else
        cout << x << " is not palindrome.";
}