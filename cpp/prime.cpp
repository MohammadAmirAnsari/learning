#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;

    if (n <= 1)
        cout << "Composite";
    return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Prime";
    else
        cout << "Composite";
    return 0;
}
