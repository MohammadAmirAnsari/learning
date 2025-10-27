#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-1, 4, 7, 2};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j <size; j++)
        {
            for (int k = i; k <= j; k++){

                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
