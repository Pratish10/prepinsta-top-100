// Check if a Number is Positive or Negative in C++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    cout << "Enter the number: ";
    cin >> i;

    if (i > 0)
    {
        cout << "The number " << i << " is Positive." << endl;
    }
    else if (i < 0)
    {
        cout << "The number " << i << " is Negative." << endl;
    }
    else
    {
        cout << "The number " << i << " is Zero." << endl;
    }
}
