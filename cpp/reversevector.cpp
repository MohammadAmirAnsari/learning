#include <bits/stdc++.h>
using namespace std;

void reverse_vector(vector<int> &vec)
{
    int start = 0, end = vec.size() - 1;

    while (start <= end)
        swap(vec[start++], vec[end--]);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    reverse_vector(vec);
    for (int i : vec)
    {
        cout << i << " ";
    }
    return 0;
}
