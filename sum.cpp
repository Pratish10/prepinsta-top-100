// Find the Sum of N Natural Numbers in C++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int j, sum = 0;
    cout << "Enter the number which you need the sum: ";
    cin >> j;

    for (int i = 0; i <= j; i++)
    {
        sum = sum + i;
    }
    cout << "The sum first " << j << " numbers is:" << sum << endl;
}