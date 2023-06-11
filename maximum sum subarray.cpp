#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long total=0, curr=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        total=max(total,curr);
        if(curr<0) curr=0;
    }
    return total;
}