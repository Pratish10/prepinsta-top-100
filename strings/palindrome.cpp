#include <iostream>
#include <string>

using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char lowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void removeSpecialCharacter(string &s)
{ // Pass by reference to modify the string
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i, 1);
            i--;
        }
    }
}

bool palindrome(string s, int n)
{
    int b = 0;
    int e = n - 1;
    removeSpecialCharacter(s);
    while (b <= e)
    {
        if (lowerCase(s[b]) != lowerCase(s[e]))
            return false;
        else
        {
            b++;
            e--;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    char name[20];
    char s[20];

    cin >> name;
    cin >> s;

    cout << name << endl;
    int len = getLength(name);
    int len2 = getLength(s);
    cout << len << endl;
    cout << name << endl;
    if (palindrome(s, len2))
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}
