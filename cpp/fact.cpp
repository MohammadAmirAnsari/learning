#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    return n * fact(n - 1);
}

int main()
{
    long long int n;
    cin >> n;
    n = fact(n);
    cout << n;
    return 0;
}
