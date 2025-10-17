#include <bits/stdc++.h>
using namespace std;

int single_number(vector<int> &nums)
{
    int single = 0;
    for (int i : nums)
    {
        single ^= i;
    }
    return single;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3, 1};
    cout << single_number(nums);
    return 0;
}
