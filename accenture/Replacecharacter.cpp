#include <iostream>
#include <string>
using namespace std;

void ReplaceCharacter(std::string &str, char ch1, char ch2)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if (str[i] == ch2)
        {
            str[i] = ch1;
        }
    }
}

int main()
{
    std::string str = "apples";
    char ch1 = 'a';
    char ch2 = 'p';

    ReplaceCharacter(str, ch1, ch2);
    std::cout << str << std::endl;

    return 0;
}
