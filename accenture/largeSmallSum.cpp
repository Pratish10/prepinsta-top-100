#include <iostream>
#include <vector>
#include <algorithm>

int LargeSmallSum(std::vector<int> arr)
{
    if (arr.empty() || arr.size() < 3)
    {
        return 0;
    }

    std::vector<int> evenElements;
    std::vector<int> oddElements;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenElements.push_back(arr[i]);
        }
        else
        {
            oddElements.push_back(arr[i]);
        }
    }

    std::sort(evenElements.rbegin(), evenElements.rend());
    std::sort(oddElements.begin(), oddElements.end());

    int secondLargest = evenElements.size() >= 2 ? evenElements[1] : 0;
    int secondSmallest = oddElements.size() >= 2 ? oddElements[1] : 0;

    return secondLargest + secondSmallest;
}

int main()
{
    std::vector<int> arr = {3, 2, 1, 7, 5, 4};

    int result = LargeSmallSum(arr);
    std::cout << result << std::endl;

    return 0;
}
