#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int zeros = 0, fives = 0;
    for (int i = 0; i < n; ++i)
    {
        int digit;
        cin >> digit;
        if (digit == 0)
            zeros++;
        else
            fives++;
    }

    if (zeros == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int numFives = (fives / 9) * 9;
    if (numFives == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    string result;
    result.append(numFives, '5');
    result.append(zeros, '0');

    cout << result << endl;

    return 0;
}
