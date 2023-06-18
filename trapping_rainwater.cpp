#include <bits/stdc++.h> 
long getTrappedWater(long *height, int n){
    vector<long> left(n,height[0]);
    vector<long> right(n,height[n-1]);
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],height[i-1]);
    }
    for(int i=n-2;i>0;i--){
        right[i]=max(right[i+1],height[i+1]);
    }
    long sum=0;
    for(int i=1;i<n-1;i++){
        if(min(left[i],right[i])>height[i]){
            sum+=(min(left[i],right[i])-height[i]);
        }
    }
    return sum;
}