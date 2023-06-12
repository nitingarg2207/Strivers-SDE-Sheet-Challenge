#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long sum=0,sumA=0,square=0,squareA=0;
	sum=(n*(long long)(n+1))/2;
	square=((long long)n*(long long)(n+1)*(long long)(2*n+1))/6;
	for(int i=0;i<n;i++){
		sumA+=arr[i];
		squareA+=(long long)arr[i]*(long long)arr[i];
	}

	if(sumA-sum==0) return {-1,-1};

	long long rmn=sumA-sum;
	long long rpm=(squareA-square)/rmn;

	long long r=(rmn+rpm)/2;
	long long m=rpm-r;

	return {(int)m,(int)r};
}
