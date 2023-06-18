#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_map<int,int> m;
    sort(arr.begin(),arr.end());
    int ans=1;
    int curr=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        else if(arr[i]==arr[i-1]+1) curr++;
        else{
            curr=1;
        }
        ans=max(ans,curr);
    }
    return ans;
}