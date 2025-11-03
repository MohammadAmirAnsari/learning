#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "BacDeF";

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) >= 97 && int(s[i]) <= 122)
        {
            s[i] = char(s[i] - 32);
        }
        cout << s[i];
    }

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}
