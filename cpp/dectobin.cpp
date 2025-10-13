#include <bits/stdc++.h>
using namespace std;

string dectobin(int n)
{
    if (n <= 1)
        return to_string(n);
    string bin = "";
    while (n > 1)
    {
        bin.push_back((n % 2) & 1 ? '1' : '0');
        n /= 2;
    }
    if (n == 1)
        bin.push_back('1');
    reverse(bin.begin(), bin.end());
    return bin;
}

string recursive_dectobin(int n, string bin)
{
    if (n > 1)
        bin = recursive_dectobin(n / 2, bin);
    bin.push_back((n % 2) & 1 ? '1' : '0');
    return bin;
}

int recursive_dectobin_2(int n)
{
    int bin = 0;
    if (n > 1)
        n = recursive_dectobin_2(n / 2) * 10 + ((n % 2) & 1 ? 1 : 0);
    return n;
}

int main()
{
    int n;
    string bin = "";
    cin >> n;
    cout << dectobin(n);
    cout << recursive_dectobin(n, bin);
    cout << recursive_dectobin_2(n);
    return 0;
}
