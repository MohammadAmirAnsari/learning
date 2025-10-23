#include <bits/stdc++.h>
using namespace std;

/*
Problem:
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.
*/
int main()
{
    int arr[4] = {9, 7, 5, 3};
    int arr2[4] = {9, 10};
    int arr3[4] = {3, 3, 3};
    int arr4[4] = {1, 3, 3, 7};
    int arr5[4] = {2, 1, 2};
    int arr6[4] = {1, 2, 4};
    int arr7[17] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26};
    int arr8[7] = {10, 7, 4, 6, 8, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]), max_length = 2, current_length = 2, difference = arr[0] - arr[1];

    for (int i = 1; i < size - 1; i++)
    {
        int current_difference = arr[i] - arr[i + 1];
        if (current_difference != difference)
        {
            max_length = current_length;
            current_length = 2;
            difference = current_difference;
        }
        else
        {
            current_length++;
        }
    }
    cout << max(current_length, max_length);

    return 0;
}
