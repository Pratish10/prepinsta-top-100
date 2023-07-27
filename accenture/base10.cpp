#include <iostream>
using namespace std;

int convertToBaseK(int n, int k)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % k;
        n /= k;
    }

    return sum;
}

int main()
{
    int n, k;
    cout << "Enter the number in base 10: ";
    cin >> n;

    cout << "Enter the base (k): ";
    cin >> k;

    int result = convertToBaseK(n, k);
    cout << "Sum of digits in base " << k << " after conversion: " << result << endl;

    return 0;
}
