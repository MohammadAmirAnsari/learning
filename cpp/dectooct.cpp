#include <bits/stdc++.h>
using namespace std;

int dectooct(int n)
{
    int oct = 0, mul = 1;
    while (n > 0)
    {
        oct += n % 8 * mul;
        mul *= 10;
        n /= 8;
    }
    return oct;
}

int recursive_dectooct(int n)
{
    if (n < 8)
        return n;
    return recursive_dectooct(n / 8) * 10 + (n % 8);
}

int main()
{
    int n;
    cin >> n;
    cout << dectooct(n);
    cout << recursive_dectooct(n);
    return 0;
}
