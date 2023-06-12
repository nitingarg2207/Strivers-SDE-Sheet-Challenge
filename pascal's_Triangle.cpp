#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> v;
    for (int i = 0; i < numRows; i++)
    {
        if (i == 0)
        {
            vector<int> arr;
            arr.push_back(1);
            v.push_back(arr);
            continue;
        }
        if (i == 1)
        {
            vector<int> arr;
            arr.push_back(1);
            arr.push_back(1);
            v.push_back(arr);
            continue;
        }
        vector<int> arr;
        arr.push_back(1);
        for (int j = 1; j < i; j++)
        {
            arr.push_back(v[i - 1][j - 1] + v[i - 1][j]);
        }
        arr.push_back(1);
        v.push_back(arr);
    }

    return v;
}

// optimal (striver)
vector<int> generateRow(int n)
{
    vector<int> row;
    int ans = 1;
    row.push_back(ans);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / (i);
        row.push_back(ans);
    }
    return row;
}
vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}