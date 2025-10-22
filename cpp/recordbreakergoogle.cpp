#include <bits/stdc++.h>
using namespace std;

/*
Problem:
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following conditions:
The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the
number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.
*/
int main()
{
    // vector<int> arr = {1, 2, 0, 7, 2, 0, 2, 2};
    vector<int> arr = {1, 2, 4, 1, 5, 7, 6, 2, 8};
    int size = arr.size(), record_breaking_days = 0, previous_max_visitor = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > previous_max_visitor)
        {
            if (arr[i] > arr[i + 1] || (i + 1) == size - 1)
                record_breaking_days++;
        }
        previous_max_visitor = max(arr[i], previous_max_visitor);
    }
    cout << record_breaking_days;
    return 0;
}
