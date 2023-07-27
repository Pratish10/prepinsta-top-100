#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch); // Convert the character to lowercase to handle both uppercase and lowercase vowels.
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string removeVowels(const string &input)
{
    string result = "";
    for (char ch : input)
    {
        if (!isVowel(ch))
        {
            result += ch;
        }
    }
    return result;
}

int main()
{
    string input;
    // cout << "Enter a string: ";
    getline(cin, input);

    string withoutVowels = removeVowels(input);

    cout << withoutVowels << endl;

    return 0;
}
