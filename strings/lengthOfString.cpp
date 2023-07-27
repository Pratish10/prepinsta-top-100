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

int main(int argc, char const *argv[])
{
    char name[20];

    cin >> name;
    cout << name << endl;
    int len = getLength(name);
    cout << len << endl;
}
