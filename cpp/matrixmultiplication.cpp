#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<vector<int>> arr1 = {
    //     {1, 2,6},
    //     {3, 4,6}};
    // vector<vector<int>> arr2 = {
    //     {5, 6},
    //     {5, 6},
    // {7, 8}};
    vector<vector<int>> arr1 = {
        {2, 4, 1, 2},
        {8, 4, 3, 6},
        {1, 7, 9, 5}};
    vector<vector<int>> arr2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {4, 5, 6}};
    // vector<vector<int>> arr1 = {
    //     {1, 2},
    //     {3, 4}};
    // vector<vector<int>> arr2 = {
    //     {5, 6},
    //     {7, 8}};

    int m1 = arr1.size(), m2 = arr2.size(), n1 = arr1[0].size(), n2 = arr2[0].size();

    if (n1 != m2)
    {
        cout << "Multiplication is not possible " << n1 << "x" << m2;
        return 0;
    }

    vector<vector<int>> mul(m1, vector<int>(n2, 0));

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            int same_dimension = 0;
            while (same_dimension < m2)
            {
                mul[i][j] += arr1[i][same_dimension] * arr2[same_dimension][j];
                same_dimension++;
            }
        }
    }

    for (int i = 0; i < m1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
