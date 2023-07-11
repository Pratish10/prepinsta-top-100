#include <iostream>
using namespace std;

int main()
{
    int V, W;
    cin >> V >> W;

    // Check constraints
    if (W < 2 || W % 2 != 0 || V >= W)
    {
        cout << "INVALID INPUT";
        return 0;
    }

    int TW = 0, FW = 0;

    // Calculate the number of two-wheelers and four-wheelers
    TW = (4 * V - W) / 2;
    FW = V - TW;

    cout << "TW=" << TW << " FW=" << FW;

    return 0;
}
