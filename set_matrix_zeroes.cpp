#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	set<int> rows,columns;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			if(matrix[i][j]==0){
				rows.insert(i);
				columns.insert(j);
			}
		}
	}
	for(auto x:rows){
		for(int i=0;i<matrix[0].size();i++){
			matrix[x][i]=0;
		}
	}
	for(auto x:columns){
		for(int i=0;i<matrix.size();i++){
			matrix[i][x]=0;
		}
	}
}