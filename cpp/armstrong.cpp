#include <bits/stdc++.h>
using namespace std;

bool is_armstrong(int n)
{
    // 153 = 1 3 + 5 3 + 3 3
    int copy_n = n, power = 0, sum = 0;
    while (copy_n > 0)
    {
        power++;
        copy_n /= 10;
    }
    copy_n = n;
    
    while (copy_n > 0)
    {
        sum += pow(copy_n % 10, power);
        copy_n /= 10;
    }
    return sum == n ? true : false;
}

int main()
{
    int n;
    cin >> n;
    cout << is_armstrong(n);
    return 0;
}
