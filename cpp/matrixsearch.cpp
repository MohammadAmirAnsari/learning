#include <bits/stdc++.h>
using namespace std;

/*
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/
int main()
{
    vector<vector<int>> arr = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};
    int target = 20, rows = arr.size(), cols = arr[0].size(), i = 0, j = cols - 1;

    while (i < rows && j >= 0)
    {
        if (arr[i][j] == target)
        {
            cout << "Present";
            return 0;
        }
        else if (target < arr[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "Not Present";
    return 0;
}
