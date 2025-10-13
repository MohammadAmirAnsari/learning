#include <bits/stdc++.h>
using namespace std;

int bintodec(int n)
{
    int dec = 0, mul = 1;
    while (n > 0)
    {
        dec += mul * (n % 10);
        mul *= 2;
        n /= 10;
    }
    return dec;
}

int recursive_bintodec(int n)
{
    if (n >= 1)
        n = (n % 10) + recursive_bintodec(n / 10) * 2;
    return n;
}

int main()
{
    int n;
    cin >> n;
    // cout << bintodec(n);
    cout << recursive_bintodec(n);
    return 0;
}
