#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int t1 = 0, t2 = 1, sum = 0;
    if (n <= 2)
        return n;
    for (int i = 2; i <= n; i++)
    {
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    return sum;
}

int recursive_fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    cout << recursive_fibonacci(n);
    return 0;
}
