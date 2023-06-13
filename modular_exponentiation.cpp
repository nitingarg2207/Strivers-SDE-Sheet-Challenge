#include <bits/stdc++.h>

int modularExponentiation(long long x, int n, int m) {
	long long ans=1;
	while(n>0){
		if(n%2==1){
			ans=((long long)ans*x)%m;
		}
		x=(long long)x*x;
		x%=m;
		n/=2;
	}
	return (int)ans;
}