#include <bits/stdc++.h>
using namespace std;

/*
Input:
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is A.
Output:
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray.
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
