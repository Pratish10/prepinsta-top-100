#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, m, rs;
    cin >> a >> m >> rs;

    if (a > m)
    {
        int buy = a - m;
        rs = rs - buy;
    }
    else if (a < m)
    {

        int sell = m - a;
        rs = rs - sell;
    }
    cout << rs;
}
