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
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int main(int argc, char const *argv[])
{
    char name[20];

    cin >> name;
    cout << name << endl;
    int len = getLength(name);
    cout << len << endl;
    reverse(name, len);
    cout << name << endl;
    return 0;
}
