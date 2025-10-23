#include <bits/stdc++.h>
using namespace std;

/* 
Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
*/
int main()
{
    // vector<int> arr = {1, 2, 3, 7, 5};
    vector<int> arr = {1, 5, 9, 7, 2, 3};
    int size = arr.size(), target = 3, sum = 0;

    int i = 0;
    int j = 0;

    while (j < size)
    {
        sum += arr[j];

        while (i <= j && sum > target)
        {
            sum -= arr[i];
            i++;
        }

        if (sum == target)
        {
            cout << i << " " << j;
            return 0;
        }
        j++;
    }

    return 0;
}
