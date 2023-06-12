#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	int frequency[n+1]={0};
	for(auto x:arr){
		frequency[x]++;
		if(frequency[x]>1) return x;
	}
	return -1;
}