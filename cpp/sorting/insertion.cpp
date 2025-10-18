#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1, current = arr[i];
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// insert an element from unsorted array to its correct position in sorted array
int main()
{
    int arr[] = {12, 45, 23, 51, 19, 8};
    int arr2[] = {6, 3, 8, 2, 4};
    insertion_sort(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
