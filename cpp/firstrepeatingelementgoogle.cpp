#include <bits/stdc++.h>
using namespace std;

/*
Problem:
Given an array arr[] of size N. The task is to find the first repeating element in the array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.
*/
int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    // vector<int> arr = {1, 4, 3, 5, 6};
    // vector<int> arr = {1, 5, 7, 9, 6, 2, 3, 5, 1};
    vector<int> arr_idx(1e6 + 2, -1);
    int size = arr.size(), min_index = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr_idx[arr[i]] == -1)
        {
            arr_idx[arr[i]] = i;
        }
        else
        {
            min_index = min(arr_idx[arr[i]], min_index);
        }
    }
    cout << min_index;
    return 0;
}
