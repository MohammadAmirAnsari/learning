#include <bits/stdc++.h>
using namespace std;

int linear_search_vector(vector<int> vec, int target)
{
    int index = 0;
    for (int i : vec)
    {
        if (i == target)
            return index;
        index++;
    }
    return -1;
}

int main()
{
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int target = 80;
    cout << linear_search_vector(vec, target);
    return 0;
}
