#include <bits/stdc++.h>
using namespace std;

/* 
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
*/
int main()
{
    // vector<int> arr = {0, -9, 1, 3, -4, 5};
    vector<int> arr = {5, 6, 9, -10, 1, 2, 3, 0};
    int size = arr.size(), max_size = 1e6 + 1;
    vector<int> check_arr(max_size, 0);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > -1)
        {
            check_arr[arr[i]] = 1;
        }
    }

    for (int i = 0; i < max_size; i++)
    {
        if (!check_arr[i])
        {

            cout << i;
            return 0;
        }
    }
    return 0;
}
