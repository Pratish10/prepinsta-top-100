// input s = ['t','h','e', ,'s','k','y', , 'i','s', ,'b','l','u','e'];

#include <iostream>
#include <string>

using namespace std;

int getLength(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'b') || (ch >= 'A' && ch <= 'B') || (ch >= '0' && ch <= '9'))
        return 1;
    return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'b') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int b = 0;
    int e = s.length() - 1;

    while (b <= e)
    {
        if (s[b] != s[e])
        {
            return 0;
        }
        else
        {
            b++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(char s[], int n)
{
    string temp = "";

    for (int j = 0; j < n; j++)
    {
        if (valid(s[j]))
        {
            return s;
        }
    }

    // for (int j = 0; j < n; j++)
    // {
    //     temp[j] = toLowerCase(temp[j]);
    // }
    return checkPalindrome(s);
}

int main()
{
    char s[50] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    int len = getLength(s);
    isPalindrome(s, len);
    return 0;
}
