#include <bits/stdc++.h>
using namespace std;

int octtodec(int n)
{
    int dec = 0, mul = 1;
    while (n > 0)
    {
        dec += (n % 10) * mul;
        mul *= 8;
        n /= 10;
    }
    return dec;
}

int recursive_octtodec(int n)
{
    if (n <= 7)
        return n;
    return recursive_octtodec(n / 10) * 8 + n % 10;
}

int main()
{
    int n;
    cin >> n;
    cout << octtodec(n) << endl;
    cout << recursive_octtodec(n);
    return 0;
}
