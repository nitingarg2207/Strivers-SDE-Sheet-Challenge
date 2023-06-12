#include <bits/stdc++.h>
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	set<int> rows, columns;
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[0].size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				rows.insert(i);
				columns.insert(j);
			}
		}
	}
	for (auto x : rows)
	{
		for (int i = 0; i < matrix[0].size(); i++)
		{
			matrix[x][i] = 0;
		}
	}
	for (auto x : columns)
	{
		for (int i = 0; i < matrix.size(); i++)
		{
			matrix[i][x] = 0;
		}
	}
}

// optimal(striver)
void setZeroes2(vector<vector<int>> &matrix)
{
	int col0 = 1;
	int n = matrix.size();
	int m = matrix[0].size();
	// vector<int> col(m, 0); -> matrix[0][...]
	// vector<int> row(n, 0); -> matrix[...][0]
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == 0)
			{
				// mark the i-th row
				matrix[i][0] = 0;

				// mark the j-th column
				if (j != 0)
					matrix[0][j] = 0;
				else
					col0 = 0;
			}
		}
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			if (matrix[i][j] != 0)
			{
				// check for col & row
				if (matrix[0][j] == 0 || matrix[i][0] == 0)
				{
					matrix[i][j] = 0;
				}
			}
		}
	}
	if (matrix[0][0] == 0)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[0][j] = 0;
		}
	}
	if (col0 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			matrix[i][0] = 0;
		}
	}
}