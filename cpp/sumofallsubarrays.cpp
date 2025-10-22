#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[3] = {1, 2, 2};
    int arr[5] = {1, 2, 0, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]), sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
        sum = 0;
    }
    return 0;
}
