#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// find minimum element in unsorted array and swap with element at beginning
int main()
{
    int arr[] = {12, 45, 23, 51, 19, 8};
    selection_sort(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
