// C++ program to find the frequency of elements in an array

#include <iostream>
#include <limits.h>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int UniqueOccurences(vector<int> arr, int)
{
    int count = 1;
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        while (i < arr.size() && arr[i] == arr[i + 1])
        {
            i++;
            count++;
        }
        ans.push_back(count);
        sort(ans.begin(), ans.end());
        for (int i = 0; ans.size(); i++)
        {
            if (ans[i] == ans[i + 1])
                cout << ans[i] << " ";
        }
        cout << ans[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
