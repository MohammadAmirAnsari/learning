#include <bits/stdc++.h>
using namespace std;

int hextodec(string hex)
{
    long long signed int dec = 0, mul = 1;
    for (int i = hex.size() - 1; i >= 0; i--)
    {
        dec += ((int(hex[i]) >= 65 ? hex[i] - 55 : hex[i]) % 16) * mul;
        mul *= 16;
    }
    return dec;
}

int recursive_hextodec(string hex)
{
    if (hex.size() <= 1)
        return hex[0] >= 65 ? hex[0] - 55 : hex[0] % 16;
    int last = hex.size() - 1;
    return recursive_hextodec(hex.substr(0, last)) * 16 + (hex[last] >= 65 ? hex[last] - 55 : hex[last] % 16);
}

int main()
{
    string hex;
    cin >> hex;
    cout << recursive_hextodec(hex);
    // cout << hextodec(hex);
    return 0;
}
