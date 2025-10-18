#include <bits/stdc++.h>
using namespace std;

int max_till_i(int arr[], int till_i)
{
    int maximum = INT_MIN;
    for (int i = 0; i <= till_i; i++)
    {
        maximum = max(arr[i], maximum);
    }
    return maximum;
}

int main()
{
    // int arr[] = {12, 45, 23, 51, 19, 8};
    int arr[] = {1,0,5,4,6,8};
    cout << max_till_i(arr, 5);

    return 0;
}
