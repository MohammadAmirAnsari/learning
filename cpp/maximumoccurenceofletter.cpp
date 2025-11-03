#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcacbade";
    vector<int> arr(26, 0);
    int size = arr.size(), max_occurence = INT_MIN;

    for (int i = 0; i < s.length(); i++)
    {
        arr[char(s[i]) - 97] += 1;
    }

    for (int i = 0; i < size; i++)
    {
        max_occurence = max(max_occurence, arr[i]);
    }
    cout << max_occurence;
    return 0;
}
