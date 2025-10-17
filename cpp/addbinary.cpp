#include <bits/stdc++.h>
using namespace std;

int add_binary(int bin1, int bin2)
{
    int max_length = to_string(max(bin1, bin2)).size(), carry = 0;
    string bin_final;

    while (max_length > 0)
    {
        int bin1_lastdigit = bin1 % 10, bin2_lastdigit = bin2 % 10, sum = 0;
        if (bin1_lastdigit + bin2_lastdigit == 0)
        {
            sum += carry;
            carry = 0;
        }
        else if (bin1_lastdigit + bin2_lastdigit == 1)
        {
            sum += carry ? 0 : 1;
            if (carry)
                carry = 1;
        }
        else
        {
            sum += carry ? 1 : 0;
            carry = 1;
        }

        bin1 /= 10;
        bin2 /= 10;
        max_length--;

        bin_final.insert(0, to_string(sum));
    }
    if (carry)
        bin_final.insert(0, to_string(carry));

    return stoi(bin_final);
}

int main()
{
    int bin1, bin2;
    cin >> bin1 >> bin2;
    cout << add_binary(bin1, bin2);
    return 0;
}
