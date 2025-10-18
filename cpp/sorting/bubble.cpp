#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// repeatedly swap adjacent elements if they are in wrong order
int main()
{
    // int arr[] = {12, 45, 23, 51, 19, 8};
    int arr[] = {6, 3, 8, 2, 4};
    bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
