#include <bits/stdc++.h>
using namespace std;

int prime(int n, int i = 2)
{
    if (n % i == 0)
        return false;
    else if (n <= 2 || i * i > n)
        return true;
    return prime(n, ++i);
}

int main()
{
    int n, flag = 1;
    cin >> n;

    cout << prime(n);

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
