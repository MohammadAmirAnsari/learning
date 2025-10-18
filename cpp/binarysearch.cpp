#include <bits/stdc++.h>
using namespace std;

int my_binary_search(int arr[], int size, int target)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;

        if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int recursive_binary_search(int arr[], int start, int end, int target)
{
    if (start > end)
        return -1;

    int mid = (start + end) / 2;
    if (arr[mid] == target)
        return mid;

    if (target < arr[mid])
        return recursive_binary_search(arr, start, mid - 1, target);
    return recursive_binary_search(arr, mid + 1, end, target);
}

int main()
{
    int arr[] = {8, 10, 12, 21, 27, 34, 42}, target = 27;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << my_binary_search(arr, size, target);
    cout << recursive_binary_search(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, target);
    return 0;
}
