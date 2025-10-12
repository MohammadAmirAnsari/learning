#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n <= 2)
        return n;
    return n * fact(n - 1);
}

int binomialcoefficient(int n, int r)
{
    // nCr = fact(n)/(fact(n-r)*fact(r))
    return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << binomialcoefficient(n, r);
    return 0;
}
