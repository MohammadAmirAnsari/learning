#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag ? true : false;
}

// sum of prime from 2 to N
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
