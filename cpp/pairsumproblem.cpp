#include <bits/stdc++.h>
using namespace std;

// given an sorted arr, return true if sum of 2 elements in the array is equal to k
int main()
{
    vector<int> arr = {2, 4, 7, 11, 14, 16, 20, 21};
    int size = arr.size(), low = 0, high = size - 1, k = 31;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "true";
            break;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    if (low >= high)
        cout << "false";
    return 0;
}
