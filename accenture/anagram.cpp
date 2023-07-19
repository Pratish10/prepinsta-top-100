#include <iostream>
#include <algorithm>

using namespace std;

void anagram(string m, string n)
{
    if (m.length() != n.length())
    {
        cout << "No" << endl;
        return;
    }
    sort(m.begin(), m.end());
    sort(n.begin(), n.end());

    for (int i = 0; i < m.length(); i++)
    {
        if (m[i] != m[i])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(int argc, char const *argv[])
{
    anagram("vfdvcscsss", "silent");
    return 0;
}
