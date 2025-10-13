#include <bits/stdc++.h>
using namespace std;

// two pointer approach
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int start = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
