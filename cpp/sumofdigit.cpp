#include <bits/stdc++.h>
using namespace std;

int sumofdigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumofdigit(n);
    return 0;
}
