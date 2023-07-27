#include <iostream>
#include <string>

using namespace std;

char Occurence(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a';
        }
        else
        {
            num = ch - 'A';
        }
        arr[num]++;
    }
    int max = -1, ans = 0;
    for (int j = 0; j < 26; j++)
    {
        if (max < arr[j])
        {
            ans = j;
            max = arr[j];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    cout << Occurence(s);
    return 0;
}
