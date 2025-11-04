#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Do or die else I will complain";
    int length = str.length(), max_length = INT_MIN, count = 0, start = 0, max_start = 0;
    for (int i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (count > max_length)
            {
                max_length = count;
                max_start = start;
            }
            count = 0;
            start = i + 1;
            continue;
        }
        count++;
    }
    cout << max_length;
    for (int i = max_start; i < max_start+max_length; i++)
    {
        cout << str[i];
    }
    return 0;
}
