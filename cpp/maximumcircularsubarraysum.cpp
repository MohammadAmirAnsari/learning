#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> arr)
{
    int max_sum = INT_MIN, current_sum = 0;
    for (int iter : arr)
    {
        current_sum = -1 * iter + current_sum;
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
            current_sum = 0;
    }
    return max_sum;
}
int sum(vector<int> arr)
{
    int sum = 0;
    for (int iter : arr)
    {
        sum += iter;
    }
    return sum;
}

// hint: max circular array = Total sum of array - Sum of non contributing elements
// Sum = Sum(A) - Kadane(-A)
int main()
{
    vector<int> arr = {4, -4, 6, -6, 10, -11, 12};
    int size = arr.size(), kadane_sum, array_sum;
    kadane_sum = kadane(arr);
    array_sum = sum(arr);
    cout << array_sum - (-kadane_sum);

    return 0;
}
