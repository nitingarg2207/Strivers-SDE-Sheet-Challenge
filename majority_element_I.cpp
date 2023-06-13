#include <bits/stdc++.h>

int findMajorityElement(int nums[], int n) {
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[nums[i]]++;
		if(m[nums[i]]>n/2) return nums[i];
	}
	return -1;
}