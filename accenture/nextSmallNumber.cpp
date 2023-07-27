#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

void nextSmallerNumber(int arr[])
{
    int m = arr.size();
    stack<int> st;
    st.push(arr[m - 1]);
    arr[m - 1] = -1;
    for (int i = m - 2; i >= 0; i--)
    {
        int x = arr[i];

        while (st.size() > 0 && x < st.top())
        {
            st.pop();
        }
        if (st.size() == 0)
        {
            arr[i] = -1;
        }
        else
        {
            arr[i] = st.top();
        }
        st.push(x);
    }

    return;
}

int main()
{
    int arr[] = {3, 2, 11, 7, 6, 5, 6, 1};

    nextSmallerNumber(arr);
}
