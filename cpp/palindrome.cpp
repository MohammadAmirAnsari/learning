#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "RACECAR";
    int start = 0, end = str.length()-1;
    bool flag = false;

    while (start <= end)
    {
        if (str[start] != str[end])
        {

            flag = true;
            break;
        }
        start++;
        end--;
    }
    cout << (flag ? "No" : "Yes");

    return 0;
}
