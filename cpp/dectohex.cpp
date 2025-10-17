#include <bits/stdc++.h>
using namespace std;

string dectohex(long int n)
{
    string hex;
    int alphabet_base = 55;

    while (n > 0)
    {
        if (n % 16 >= 9)
            hex.insert(0, string(1, static_cast<char>(alphabet_base + (n % 16))));
        else
            hex.insert(0, to_string(n % 16));
        n /= 16;
    }
    return hex;
}

string recursive_dectohex(int n)
{
    if (n < 16)
        return n < 10 ? to_string(n) : string(1, 55 + n);
    return recursive_dectohex(n / 16) + recursive_dectohex(n % 16);
}

int main()
{
    long int n;
    cin >> n;
    // cout << dectohex(n);
    cout << recursive_dectohex(n);
    return 0;
}
