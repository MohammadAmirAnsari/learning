#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 5, 7, 9, 10, 11},
        {6, 10, 12, 13, 20, 21},
        {9, 25, 29, 30, 32, 41},
        {15, 55, 59, 63, 68, 70},
        {40, 70, 79, 81, 95, 105},
    };

    int row = arr.size()-1, col = arr[0].size()-1, i = 0, j = 0;

    while (i <= row && j <= col)
    {
        for (int j_t = j; j_t <= col; j_t++)
        {
            cout << arr[i][j_t] << " ";
        }
        i++;
        for (int i_t = i; i_t <= row; i_t++)
        {
            cout << arr[i_t][col] << " ";
        }
        col--;
        for (int j_t = col; j_t >= j; j_t--)
        {
            cout << arr[row][j_t] << " ";
        }
        row--;
        for (int i_t = row; i_t >= i; i_t--)
        {
            cout << arr[i_t][j] << " ";
        }
        j++;
    }

    return 0;
}
