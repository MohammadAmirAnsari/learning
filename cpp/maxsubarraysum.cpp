#include <bits/stdc++.h>
using namespace std;

// kadane's algorithm
int max_subarray_sum(int arr[], int size)
{
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < size; i++)
    {
        max_sum = max(arr[i] + current_sum, max_sum);
        if (current_sum < 0)
            current_sum = 0;
    }
    return max_sum;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {-1, -2, -3, -4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << max_subarray_sum(arr, size);
    return 0;
}
